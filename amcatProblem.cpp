#include <bits/stdc++.h>
using namespace std;
// int check()
int main()
{
    int arr = {
        {0, 0, 0, 0, 0},
        {0, 1, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 1, 1, 1},
        {0, 0, 0, 0, 0}};
    int count = 0;
    int row = 5;
    int col = 5;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j || i + j == j || i + j == row)
            {
                continue;
            }
            else if (arr[i][j] == 1)
            {
                count++;
            }
        }
        cout << count;
    }
}