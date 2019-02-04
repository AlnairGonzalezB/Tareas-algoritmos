#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int l=rand()%5; // x
    int m=rand()%5; // y
    int n=rand()%5; // l
    int i=rand()%5; // x
    int j=rand()%5; // y
    int k=rand()%5; // l
    int cuadA[3]={l,m,n};
    int cuadB[3]={i,j,k};
    if((cuadA[1]==cuadB[1]) && (cuadA[0]-cuadB[0]==cuadB[2] || cuadA[0]-cuadB[0]==cuadA[2] || cuadB[0]-cuadA[0]==cuadB[2] || cuadB[0]-cuadA[0]==cuadA[2] ) )
    {
        cout<<"\n Se empalma en esquina";
        if((cuadA[0]==cuadB[0]) && (cuadA[1]-cuadB[1]==cuadB[2] || cuadA[1]-cuadB[1]==cuadA[2] || cuadB[1]-cuadA[1]==cuadB[2] || cuadB[1]-cuadA[1]==cuadA[2] ))
        cout<<"\n Se empalma en esquina";
    }else
    cout<<"\n No se empalma en esquina";

    return 0;
}
