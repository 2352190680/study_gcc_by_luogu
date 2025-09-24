#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int gcd(int x,int y){
    if (y==0)return x;
    else return gcd(y,x%y);
}
int main(){
    int a,b;int c,d;char e;
    cin>>a>>e>>b;
    cin>>c>>e>>d;
    a=a*c,b=b*d;
    int yinshu=gcd(a,b);
    a=a/yinshu,b=b/yinshu;
    cout<<b<<" "<<a;
    return 0;
}