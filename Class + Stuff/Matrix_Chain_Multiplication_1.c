#include <stdio.h>
#include <limits.h>
#include <conio.h>

int main()
{
    int n = 5;
    int p[] = { 10, 20, 50, 5, 40 };
    int m[5][5] = {0};
    int s[5][5] = {0};
    int j, min, q;
    for(int d = 1; d<n-1; d++)
    {
        for(int i = 0; i<n-d; i++)
        {
            j=i+d;
            min = INT_MAX;
            for(int k = i; k<j; k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<min)
                {
                    min = q;
                    s[i][j] = k;
                }
            }
            m[i][j]=min;
        }
    }
    printf("Minimum no. of multiplications = %d", m[1][n-1]);
}