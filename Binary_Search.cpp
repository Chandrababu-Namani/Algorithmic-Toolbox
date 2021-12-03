// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;
int bs(vector<int>k,int n,int a,int b){
    if (a>b)return -1;
    int m=(a+b)/2;
    if(n==k[m])return m;
    else if(n<k[m])return bs(k,n,a,m-1);
    else return bs(k,n,a+1,b);
    return -1;
    }
int main(void)
{   
   int n;cin>>n;vector<int>a(n);
   for(int i=0;i<n;i++)cin>>a[i];
   int m;cin>>m;vector<int>b(m);
   for(int i=0;i<m;i++)cin>>b[i];

   for(int i=0;i<m;i++){
       cout<<bs(a,b[i],0,a.size()-1)<<" ";
   }
}
