#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand (time(NULL));
    int n=rand()% 8+4;
    int arreglo[n];
    int arreglocp[n];
    bool arreglob[n];
    int limmen=14, limmay=0, men, may;
    int mi=0;
    int ma=n-1;
    int i=0;
    cout<<"\n Acomodo original ";
    for(int e=0; e<n; e++)
    {
        arreglo[e]=rand()%13+1;
        cout<<" "<<arreglo[e];
    }
    for(int o=0; o<n; o++)
    {
        arreglob[o]=true;
    }
    while(mi<=ma)
    {
        limmen=14; limmay=0;
        for(i=0; i<n; i++)
        {
            if(arreglo[i]<limmen && arreglob[i]==true)
            {
                limmen=arreglo[i]; //cout<<"\n limmen "<<i<<" "<<arreglo[i];
                men=i;
            }else;
            if(arreglo[i]>limmay && arreglob[i]==true)
            {
                limmay=arreglo[i]; //cout<<"\n limmay "<<i<<" "<<arreglo[i];
                may=i;
            }else;
        }
        arreglocp[mi]=arreglo[men];
        arreglocp[ma]=arreglo[may];
        arreglob[men]=false;
        arreglob[may]=false;
        mi++; ma--;
        // cout<<"\n mi "<<mi;
        // cout<<"\n ma "<<ma;
    }
    cout<<"\n Arreglo ordenado";
    for(int j=0; j<n; j++)
    {
        cout<<" "<<arreglocp[j];
    }
    return 0;
}
