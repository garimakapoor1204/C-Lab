#include <stdio.h>

int main()
{
    int m, n, p, q, i, j, k;

    // Input order of first matrix
    printf("Enter order of first matrix.\n");
    scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input order of second matrix
    printf("Enter order of second matrix.\n");
    scanf("%d %d", &p, &q);

    // Check for matrix multiplication validity
    if (n != p)
    {
        printf("Order of matrices are incorrect. (Not valid)\n");
        return 0;
    }

    int B[p][q];
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Display Matrix A
    printf("Matrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Display Matrix B
    printf("Matrix B:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Multiply matrices
    int C[m][q];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display Resultant Matrix
    printf("Resultant Matrix after multiplication:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
