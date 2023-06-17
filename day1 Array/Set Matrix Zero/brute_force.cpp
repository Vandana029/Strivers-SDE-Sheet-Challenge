// Time complexity : O(n^3)

// #include<stdio.h>
#include<iostream>
using namespace std;

void mark_row(int, int**);
void mark_col(int, int**);

// size of matrix
int n;

int main()
{
    cin >> n;

    int **arr;
    int i, j;
    
    // allocating the row space in heap dynamically
    arr = new int *[n];

    // allocating the column space in heap dynalically
    for(i = 0; i < n; i++)
        arr[i] = new int[n];

    // Giving input to the matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[i][j] == 0)
            {
                mark_row(i, arr);
                mark_col(j, arr);
            }
        }

    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[i][j] == -1)
            {
                arr[i][j] = 0; 
            }
        }

    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }

    return 0;
}

void mark_row(int i, int **arr)
{
    for (int  j = 0; j < n; j++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
        
    }
    
}

void mark_col(int j, int **arr)
{
    for (int  i = 0; i < n; i++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
        
    }
    
}
