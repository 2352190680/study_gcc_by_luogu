#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long n;
int main(){
    cin>>n;
    if (n==1||n==2||n==3){
        cout<<n;return 0;
    }
    for (long long i=2;i*i<=n;++i){
        if (n%i==0){
            cout<<n/i;return 0;
        }
    }
    return 0;
}