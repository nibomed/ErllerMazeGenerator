# ErllerMazeGenerator
Example of Eller maze generation algorithm in pure C
+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+
|        |  |  |     |  |  |           |     |  |  |           |     |        |        |  |
+--+  +--+  +  +  +  +  +  +  +  +  +  +  +--+  +  +  +  +  +--+  +--+--+--+  +--+  +  +  +
|              |  |  |  |     |  |  |     |     |     |  |  |     |        |        |     |
+--+  +--+--+  +  +--+  +  +--+--+  +  +--+--+  +--+  +  +--+  +--+  +--+  +--+  +--+  +  +
|  |  |  |     |  |        |  |  |  |     |     |  |  |     |     |     |  |  |     |  |  |
+  +--+  +  +  +  +--+  +--+  +  +  +--+  +--+--+  +  +  +  +  +  +--+  +  +  +--+--+--+--+
|        |  |     |     |     |  |  |  |  |        |  |  |     |     |  |     |  |     |  |
+--+  +--+--+--+  +--+  +--+  +  +--+  +  +--+  +  +--+--+  +--+--+--+  +--+--+  +  +--+  +
|  |        |     |     |  |  |  |        |     |        |        |     |  |              |
+  +  +--+  +--+  +--+  +  +  +  +  +--+--+--+  +--+--+--+--+--+  +--+--+  +--+  +  +--+--+
|  |     |           |  |        |     |        |  |  |        |     |           |  |     |
+  +--+  +--+--+--+  +  +  +--+--+  +--+  +  +  +  +  +--+  +  +  +--+  +--+--+--+  +  +--+
|        |  |        |  |     |     |  |  |  |  |  |  |     |     |  |        |     |     |
+  +  +  +  +--+--+  +--+--+  +--+  +  +--+--+--+  +  +--+  +  +  +  +--+--+--+--+  +  +--+
|  |  |  |  |  |        |        |  |     |              |  |  |  |     |        |        |
+--+--+  +--+  +  +  +  +--+  +--+--+  +--+  +--+  +--+--+  +--+--+  +--+  +  +--+  +  +  +
|        |        |  |  |  |  |        |     |  |  |     |     |           |     |  |  |  |
+--+  +  +--+  +  +  +  +  +  +  +  +--+--+--+  +  +--+  +--+--+  +--+  +  +  +  +  +  +  +
|  |  |     |  |  |  |  |     |  |  |        |  |  |        |     |     |  |  |  |  |  |  |
+  +  +  +  +  +--+--+--+  +  +  +--+--+  +  +--+  +  +  +--+  +  +--+  +  +--+  +--+--+  +
|  |  |  |  |  |  |  |  |  |  |        |  |           |     |  |     |  |     |  |  |     |
+  +--+  +  +--+  +  +  +  +  +  +--+--+--+--+--+--+  +  +--+--+  +  +  +--+--+  +  +  +  +
|     |  |        |     |  |  |  |     |  |  |  |     |        |  |  |  |     |     |  |  |
+  +--+  +--+--+  +--+  +  +--+  +--+  +--+  +  +--+  +  +  +--+--+  +--+--+  +  +--+--+--+
|  |  |  |  |  |  |        |     |  |     |     |  |  |  |  |  |        |  |        |  |  |
+  +--+  +  +  +--+  +  +--+--+--+  +  +--+  +--+  +--+--+--+  +--+--+--+  +  +  +--+  +  +
|     |  |  |  |     |     |  |  |              |        |  |  |           |  |  |        |
+--+--+  +  +  +  +--+--+  +--+  +--+  +--+  +--+  +  +--+  +  +--+--+  +--+  +--+  +  +  +
|                                                  |                                |  |  |
+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+