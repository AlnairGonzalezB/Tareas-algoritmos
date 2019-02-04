#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n=rand()%10;
    int vec[n];
    for(int i=0; i<n; i++)
    {
        vec[i]=rand()%8;
        if(vec[i]%2==0)
        {
         cout<<"\n El numero par es "<< vec[i];
        }else
        cout<<"\n El numero impar es "<< vec[i];
    }
    return 0;
}
