#include<bits/stdc++.h>
using namespace std;
bool sort3col(const vector<double>& a, const vector<double>& b){
    return a[2]>b[2];
}
int main()
{
    int n,kw;cin>>n>>kw;
    vector<vector<double>>a;
    for(int i=0;i<n;i++){
        vector<double>b;
        int j,k;cin>>j>>k;
        b.push_back(j);b.push_back(k);b.push_back((double)j/k);
        a.push_back(b);
    }
    sort(a.begin(),a.end(),sort3col);
    double maxval=0;
    int i=0;
    while(kw>0){
        if(kw>=a[i][1]){
            maxval+=a[i][0];
        }
        else{
            maxval+=(kw*a[i][2]);
        }
        kw-=a[i][1];
        i++;
    }
    printf("%.4lf",maxval);
    
}