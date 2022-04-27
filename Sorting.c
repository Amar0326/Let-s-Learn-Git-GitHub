#include<stdio.h>
int main()
{

    // Bubble Sorting In Ascending
    int A[50];
    int number;
    int temp;
    int i, j;

    // Accepting Size Of Array.
    printf("Enter Size Of Array\n");
    scanf("%d", &number);

    // Accepting Elements Of Array Using For Loop.
    for (i = 0; i < number; i++)
    {
        printf("Enter A Value Of Element A[%d] ", i);
        scanf("%d", &A[i]);
    }

    // Main Program For Bubble Sorting (logic Of Bubble Sort).
    for (i = 0; i < number - 1; i++)
    {
        for (j = 0; j < number - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        
    }

    // For Printing Output Of Program.
    for (int j = 0; j < number; j++)
    {
        printf("%d\t", A[j]);
    }

    getch();
 
    return 0;
}
