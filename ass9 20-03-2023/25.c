#include<stdio.h>
int main(){
    int matrix[100][100], n, sum = 0;
    printf("Enter the dimension: ");
    scanf("%d", &n);
    printf("Enter the matrix: ");
    for (int i = 0; i < n; i++)//input
    {
        for (int j = 0; j < n; j++)
        {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)//sum of left diagonal of the matrix
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n-1)
            {
                sum += matrix[i][j];
            }
        }
        
    }

    printf("The sum of the right diagonal of the matrix is: %d", sum);//output
    
}