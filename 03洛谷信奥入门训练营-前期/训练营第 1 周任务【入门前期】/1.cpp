#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // char a,b,c;cin>>a>>b>>c;
    // cout<<int(a+b+c);

    // int a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
    // int q=a*100+b*10+c,p=d*100+e*10+f;int yu=q%p;
    // printf("%.2lf",yu*0.01);

    // int n;cin>>n;
    // if (n>10&&n<100&&n%2==0)cout<<1<<" ";
    // else cout<<0<<" ";
    // if (n>20&&n<40)cout<<1;
    // else cout<<0;

    double a;cin>>a;
    if (a<=3)printf("10.0");
    else{
        double b=ceil((a-3)/0.5);
        printf("%.1lf",10+b*0.9);
    }
    return 0;
}