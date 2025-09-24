#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long a,b,c;
long long gcd(long long x,long long y){
    if (y==0)return x;
    else{
        return gcd(y,x%y);
    }
}
int main(){
    cin>>a>>b>>c;
    long long y=gcd(a,b);
    a=a/y*b;
    long long yin=gcd(a,c);
    cout<<a/yin*c;
    return 0;
}