#include<iostream>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    int c=a+b;
    if (c>7)c=c%7;
    cout<<c;
    return 0;
}