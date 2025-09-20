#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long n;
int main(){
    cin>>n;long long r=sqrt(n);
    long long l=sqrt(r);
    for (long long a=l;a<=r;++a){
        if (a*a*a>n){cout<<a-1;break;}
        else if (a*a*a==n){cout<<a;break;}
    }
    return 0;
}