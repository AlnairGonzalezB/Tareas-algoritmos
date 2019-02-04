#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n=rand()%5;
    int vec1[n+1];
    int vec2[n+1];
    int res=0, i=0, j=0;
    int mult;
    while(i<n+1 && j<n+1)
    {
        vec1[i]=rand()%5;
        vec2[j]=rand()%5;
        cout<<"\n "<<vec1[i]<<" * "<<vec2[j];
        mult=vec1[i]*vec2[j];
        res=res+mult;
        i++;
        j++;
    }
    cout<<"\n Resultante= "<<res;
    return 0;
}
