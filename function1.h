#include <iostream>
#define N 4

using namespace std;
void printBoard(int board [N][N]);
bool isValid(int board [N][N], int row, int col);
bool solveNQueen(int board [N][N], int col);
bool checkSolution();