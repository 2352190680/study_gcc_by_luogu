#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // double a,b,c;
    // cin>>a>>b>>c;
    // if ((a+b>c)&&(a+c>b)&&(b+c>a))cout<<1;
    // else cout<<0;

    // double a,b,c;
    // cin>>a>>b>>c;  
    // if((a<b)&&(b<c)||(c<b)&&(b<a))cout<<b;
    // if((b<a)&&(a<c)||(c<a)&&(a<b))cout<<a;
    // if((a<c)&&(c<b)||(b<c)&&(c<a))cout<<c;

    // int a,b;
    // scanf("%d%d",&a,&b);
    // printf("%d + %d=?\n",a,b);
    // printf("%d * %d=?\n",a,b);
    // printf("%d - %d=?\n",a,b);
    // printf("%d / %d=?\n",a,b);

    // double a,b,h,c;
    // scanf("%lf%lf%lf",&a,&b,&h);
    // printf("%.1lf",0.5*h*(a+b));

    int a,b,c,d,e,f;
    cin>>a>>b>>c;
    d=fabs(a-37);
    e=fabs(b-37);
    f=fabs(c-37);
    if (d<e&&d<f)    cout<<a;
    if (d>e&&e<f)    cout<<b;
    if (f<e&&d>f)    cout<<c;
    return 0;
}