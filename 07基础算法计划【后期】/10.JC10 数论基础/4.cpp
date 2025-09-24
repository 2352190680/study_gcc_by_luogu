#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int a,b,c,d;
int gcd(int x,int y){
    if (y==0)return x;
    else return gcd(y,x%y);
}
int main(){
    cin>>a>>b;int t=gcd(a,b);
    cout<<t<<" ";
    cout<<(long long)a*b/t;
    return 0;
}