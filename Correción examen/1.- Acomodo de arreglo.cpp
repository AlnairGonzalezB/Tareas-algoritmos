#include <iostream>

using namespace std;

int main()
{
    int gra=-900;
    int peq=900;
    int n=6;
    int bot=0;
    int top=n-1;
    int vec[n]={2,1,1,2,1,2};
    int vecac[n];

    for(int i=0; i<6;i++)
    {
        if(vec[i]<peq)
        {
            peq=vec[i];
        }else
        gra=vec[i];
    }
    cout<<"\n Grande: "<<gra;
    cout<<"\n Pequenio: "<<peq<<"\n";
    for(int i=0; i<6;i++)
    {
        if(vec[i]==gra)
        {
            vecac[top]=gra;
            top--;
        }else
        {
         vecac[bot]=peq;
        bot++;
        }
    }
    for(int i=0; i<6;i++)
    {
        cout<<" "<<vecac[i];
    }
    return 0;
}
