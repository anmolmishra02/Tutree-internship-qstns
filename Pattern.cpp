#include<bits/stdc++.h>
using namespace std;

int main()
{
    int countupper=1;
    int countlower=6;
    bool inverted=true;
    while(countupper<=7 or countlower>0)
    {   if(inverted)
        {for(int i=countupper;i<=7;i++)
        {
        cout<<i<<" ";
        }
        cout<<endl;
        countupper++;
        if(countupper>2)
        {   for(int k=0;k<countupper-2;k++)
            {
                cout<<" ";
            }
        }
        }
        if(countupper==8)
        {
            inverted=false;
        }
        if(inverted==false)
        {
            if(countlower>2)
            {
                for(int k=0;k<countlower-2;k++)
                {
                    cout<<" ";
                }
            }
           for(int i=countlower;i<=7;i++)
           {
               cout<<i<<" ";
           }
           cout<<endl;
           countlower--;
        }
        
    }
}
