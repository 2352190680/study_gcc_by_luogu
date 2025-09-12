#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
string s;long long n;
int main(){
    cin>>s>>n;int l=s.length();
    while (n>l){
        long long t=l;
        while (t*2<n){
            t*=2;
        }
        n=n-t-1;
        if (n==0)n=t;
    }
    cout<<s[n-1];
    return 0;
}