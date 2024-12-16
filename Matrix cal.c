#include <stdio.h>
void matri3x3();
void matri2x2();
void print_matrix(int rows, int cols, int mat[rows][cols]); 

int main() {
    int choice;
    printf("Enter 2 for 2x2 and 3 for 3x3: ");
    scanf("%d", &choice);
    if (choice == 2) {
        matri2x2();
    } else if (choice == 3) {
        matri3x3();
    } else {
        printf("Invalid choice. Please enter 2 or 3.\n");
    }
    return 0;
}

void matri3x3() {
    int matrix[3][3], result[3][3] = {0};
    int i, j, k;
    // Input
    printf("Enter the values of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //original matrix
    printf("Matrix:\n");
    print_matrix(3, 3, matrix);
    //square of the matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                result[i][j] += matrix[i][k] * matrix[k][j];
            }
        }
    }
    //squared matrix
    printf("Square of the matrix:\n");
    print_matrix(3, 3, result);
}

void matri2x2() {
    int matrix[2][2], result[2][2] = {0};
    int i, j, k;
    // Input
    printf("Enter the values of the 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //original matrix
    printf("Matrix:\n");
    print_matrix(2, 2, matrix);
    //square of the matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                result[i][j] += matrix[i][k] * matrix[k][j];
            }
        }
    }
    // Display the squared matrix
    printf("Square of the matrix:\n");
    print_matrix(2, 2, result);
}

void print_matrix(int rows, int cols, int mat[rows][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
