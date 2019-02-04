#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n=rand()%3;
    int mat[n+1][n+1];
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<n+1; j++)
        {
            mat[i][j]=rand()%8;
            if(i==j)
            {
                cout<<"\n "<<mat[i][j]<<" es parte de la diagonal principal";
            }else
            cout<<"\n "<<mat[i][j]<<" no es parte de la diagonal principal";
        }
    }
    return 0;
}
