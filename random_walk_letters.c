#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Random generator initialize
    srand(time(NULL));

    // Create a 10x10 grid and initialize variables
    char arr[10][10];
    int i, j, direction_num, direction, counter = 1;

    // Fill the grid with dots to represent empty spaces
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            arr[i][j] = '.';
        }
    }

    // Start the random walk at the top-left corner
    i = 0;
    j = 0;
    arr[0][0] = 'A'; // Place the first letter

    // Keep placing letters until 'Z' or no valid moves remain
    while (counter < 26) {
        // Randomly choose a direction: 0=up, 1=right, 2=down, 3=left
        direction_num = rand() % 4;

        switch (direction_num) {
            case 0: { // Move up
                if ((i - 1 >= 0) && arr[i - 1][j] == '.') {
                    arr[i - 1][j] = 'A' + counter;
                    counter++;
                    i--;
                }
                break;
            }
            case 1: { // Move right
                if ((j + 1 < 10) && arr[i][j + 1] == '.') {
                    arr[i][j + 1] = 'A' + counter;
                    counter++;
                    j++;
                }
                break;
            }
            case 2: { // Move down
                if ((i + 1 < 10) && arr[i + 1][j] == '.') {
                    arr[i + 1][j] = 'A' + counter;
                    counter++;
                    i++;
                }
                break;
            }
            case 3: { // Move left
                if ((j - 1 >= 0) && arr[i][j - 1] == '.') {
                    arr[i][j - 1] = 'A' + counter;
                    counter++;
                    j--;
                }
                break;
            }
        }

        // Check if all possible directions are blocked; if so, stop
        if (!((i - 1 >= 0) && arr[i - 1][j] == '.') &&  // Up blocked
            !((j + 1 < 10) && arr[i][j + 1] == '.') &&  // Right blocked
            !((i + 1 < 10) && arr[i + 1][j] == '.') &&  // Down blocked
            !((j - 1 >= 0) && arr[i][j - 1] == '.')) {   // Left blocked
            break;
        }
    }

    // Print the final grid
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}