#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    long long a;cin>>a;
    char s[34];
    for (int i=32;i>=1;--i){
        s[i]=a%2+'0';
        a/=2;
    }
    string b,c,d;
    for (int i=1;i<=16;++i){
        b+=s[i];c+=s[i+16];
    }
    d=c+b;
    long long sum=0;
    for (int i=31;i>=0;--i){
        sum+=pow(2,31-i)*(d[i]-'0');
    }
    cout<<sum;
    return 0;
}