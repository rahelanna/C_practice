#include <stdio.h>


int main() {
    
    // 2D array = an array, where each element is an entire array
    // useful if we need a matrix, grid, or table of data
    /*
    int numbers[2][3] = {              optional to set a max number of rows, must set a max number of columns
                         {1, 2, 3},
                         {4, 5, 6} 
                        };
    */
    
    int numbers[3][3];
    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
    
    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);
    
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 4;
    numbers[2][1] = 5;
    numbers[2][2] = 6;
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}