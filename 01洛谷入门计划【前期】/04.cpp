#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
    // cout<<"1+1=2";
    
    // cout<<(17.0+23.0+48.0)/3;

    // int a,b,c;
    // cin>>a>>b;
    // c=(a*10+b)/19;
    // cout<<c;

    // double a;
    // scanf("%lf",&a);
    // printf("%.3lf",a);

    // double a,b,c,d,e,f;
    // cin>>a>>b>>c;
    // d=2*3.1415926*a;
    // e=3.1415926*b*b;
    // f=(4.0/3)*3.1415926*pow(c,3);
    // cout<<d<<" "<<e<<" "<<f;

    // double x,a,y,b,z;
    // scanf("%lf%lf%lf%lf",&x,&a,&y,&b);
    // z=(a*x-b*y)/(a-b);
    // printf("%.2lf",z);

    // double h,r,n;
    // int a;
    // cin>>h>>r;
    // n=20000/3.14/pow(r,2)/h;
    // a=ceil(n);
    // cout<<a;

    int a,b,c,d;
    cin>>a;
    b=a/100;
    c=(a-b*100)/10;
    d=a-b*100-c*10;
    cout<<b+c+d<<endl;
    cout<<pow(b+c+d,2)<<endl;
    cout<<pow(b+c+d,3);
    return 0;
}