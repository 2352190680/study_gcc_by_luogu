#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
string s;long long n;
int main(){
    cin>>s>>n;
    long long l=s.length();
    int k=n%l;int a=n/l;
    if (k==0){
        if (a%l==0)cout<<s[0];
        else cout<<s[l-a%l];
    }
    else{
        
    }



    return 0;
}