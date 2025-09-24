#include<bits/stdc++.h>
using namespace std;
long long x,y;long long sum;
long long gcd(long long x,long long y){
    if (y==0)return x;
    else{
        return gcd(y,x%y);
    }
}
int main(){
    cin>>x>>y;
    if (x==y)sum--;
    y*=x;
    for (long long i=1;i<=sqrt(y);++i){
        if (y%i==0&&gcd(i,y/i)==x)sum+=2;
    }
    cout<<sum;
    return 0;
}