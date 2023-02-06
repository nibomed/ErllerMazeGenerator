#include <stdio.h>
#include <stdlib.h>

const int columns = 30;
const int rows = 15;

bool bottomWall[columns][rows];
bool rightWall[columns][rows];
int set[columns];

bool isAddWallByChance() {
	return rand() % 100 < 50;
}

void drawLabirint() {
	printf("+");
	for (int row = 0; row < columns; row++)
		printf("--+");
	printf("\n");
	for (int row = 0; row < rows; row++) {
		printf("|");
		for (int col = 0; col < columns; col++) {
			printf(" ");
			printf(rightWall[col][row] ? " |" : "  ");
		}
		printf("\n");
		for (int col = 0; col < columns; col++) {
			printf("+");
			printf(bottomWall[col][row] ? "--" : "  ");
		}
		printf("+\n");
	}
	printf("\n");
}

void mergeGroups(int id1, int id2) {
	int setChangeTo = set[id1];
	int setToChange = set[id2];
	for (int i = 0; i < columns; i++)
		if (set[i] == setToChange)
			set[i] = setChangeTo;
}

int main() {
	srand(6);

	// Initialize set
	for (int i = 0; i < columns; i++)
		set[i] = i + 1;

	for (int row = 0; row < rows - 1; row++) {

		// Add vertical walls
		for (int setIdx = 0; setIdx < columns - 1; setIdx++) {
			if (set[setIdx] == set[setIdx + 1]) {
				rightWall[setIdx][row] = true; // Cells in one group must be sepparated by wall
			} else {
				rightWall[setIdx][row] = isAddWallByChance(); // Cells in different group can have walls
				if (!rightWall[setIdx][row]) // But if no walls separate cells, then merge them into one group
					mergeGroups(setIdx, setIdx + 1);
			}	
		}

		// Add some horizontal walls randomly
		for (int setIdx = 0; setIdx < columns; setIdx++) {
			bottomWall[setIdx][row] = isAddWallByChance();
		}
		
		// Make sure that each group has a passage down
		// Add passage if it is not presented
		int setToCheck = 0;
		for (int setIdx = 0; setIdx < columns; setIdx++) {
			if (setToCheck != set[setIdx]) {
				bool havePassage = false;
				for (int setIdx2 = 0; setIdx2 < columns; setIdx2++)
					if (set[setIdx] == set[setIdx2] && !bottomWall[setIdx2][row]) {
						havePassage = true;
						break;
					}
				if (!havePassage) { // Add passage in current position
					bottomWall[setIdx][row] = false;
				}
			}
		}

		// Add cells from next row to their own group if they separated
		for (int setIdx = 0; setIdx < columns; setIdx++) {
			if (bottomWall[setIdx][row]) {
				set[setIdx] = row * rows + setIdx; // Any unique id is good enough
			}
		}
	}

	// Add borders on edges (right and bottom border). Top and left will be added during "rendering"
	for (int i = 0; i < columns; i++) {
		bottomWall[i][rows - 1] = true;
	}

	for (int i = 0; i < rows; i++) {
		rightWall[columns - 1][i] = true;
	}


	// For last row connect all sepparated rows
	for (int col = 0; col < columns - 1; col++) {
		rightWall[col][rows - 1] = (set[col] == set[col + 1]);
	}

	drawLabirint();
	return 0;
}
