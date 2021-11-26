#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n=0;cin>>m;
    while(m>0)
    {
        if(m>=10)
        {m-=10;n++;}
         else if(m>=5&&m<10)
       {m-=5;n++;}
        else
        {m-=1;n++;}
     }  
    cout<<n;
}