void clearscreen();
void cbreak();
void nocbreak();
int *up(int **maze, int *pos);
int *down(int **maze, int *pos);
int *right(int **maze, int *pos);
int *left(int **maze, int *pos);
int mapa(int **maze, int mode);
void firstMode(int **maze, char tecla);
void secondMode(int **maze, char tecla);
//void autonomous(int **maze);
char *getMazeInfo(int**maze);
