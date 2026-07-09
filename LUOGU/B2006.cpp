#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,a,y,b;
    double sum;
    cin>>x>>a>>y>>b;
    sum=1.0*(x*a-y*b)/(a-b);
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}