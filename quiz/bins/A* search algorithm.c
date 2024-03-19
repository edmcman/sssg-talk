#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define ROWS 5
#define COLS 5

// Structure to represent a cell in the grid
struct Cell {
    int row, col;
    int f, g, h;
    struct Cell* parent;
    bool isBlocked;
};

// Function to calculate the Heuristic value (Manhattan distance) for a cell
int calculateHeuristic(struct Cell* current, struct Cell* goal) {
    return abs(current->row - goal->row) + abs(current->col - goal->col);
}

// Function to check if a cell is valid (within the grid and not blocked)
bool isValidCell(int row, int col, struct Cell* grid[ROWS][COLS]) {
    return (row >= 0) && (row < ROWS) && (col >= 0) && (col < COLS) && !(grid[row][col]->isBlocked);
}

// Function to perform A* search algorithm
void aStarSearch(struct Cell* grid[ROWS][COLS], struct Cell* start, struct Cell* goal) {
    // TODO: Implement A* search algorithm here
}

int main() {
    // Creating the grid
    struct Cell* grid[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = malloc(sizeof(struct Cell));
            grid[i][j]->row = i;
            grid[i][j]->col = j;
            grid[i][j]->f = 0;
            grid[i][j]->g = 0;
            grid[i][j]->h = 0;
            grid[i][j]->parent = NULL;
            grid[i][j]->isBlocked = false;
        }
    }

    // Setting blocked cells
    grid[1][1]->isBlocked = true;
    grid[1][2]->isBlocked = true;
    grid[2][2]->isBlocked = true;
    grid[3][2]->isBlocked = true;

    // Setting start and goal cells
    struct Cell* start = grid[0][0];
    struct Cell* goal = grid[4][4];

    // Running A* search algorithm
    aStarSearch(grid, start, goal);

    return 0;
}