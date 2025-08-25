#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // int b;
    // cin>>b;
    // for(int a=0;a<=b;a++)
    //     {cout<<a<<" ";}

    // int b,c;
    // cin>>b;
    // for(int a=1;a<=b;a++){
    //     int p;
    //     cin>>p;
    //     c+=p;
    // }
    // cout<<c;

    // int z=100000000,b;
    // cin>>b;
    // for(int a=1;a<=b;a++){
    //     int p;
    //     cin>>p;
    //     if (p<=z)z=p;
    // }
    // cout<<z;

    // long long a;
    // // cin>>a;
    // scanf("%lld",&a);
    // printf("%lld",a);

    // while(循环条件)              ;              do{}while();->先循环一次再判断

    // int x,y;
    // cin>>x>>y;
    // for (int a=x;a<=y;a++)
    // cout<<a<<" ";

    // int a,c=0,d=0,e=0;
    // cin>>a;
    // for(int b=1;b<=a;b++)   {
    //     int m,n,p;
    //     cin>>m>>n>>p;
    //     c+=m;
    //     d+=n;
    //     e+=p;
    // }
    // cout<<c<<" "<<d<<" "<<e<<" "<<c+d+e;

    // double a;
    // cin>>a;
    // int b=1;
    // while(a>1){
    //     a=floor(a/2);
    //     b++;
    // }
    // cout<<b;

    // int a;
    // cin>>a;
    // double d=0;
    // for (int b=1;b<=a;b++){
    //     int c;
    //     cin>>c;
    //     d=d+c;
    // }
    // printf("%.2lf",d/a);

    int a,b,c;
    cin>>a>>b;
    // for(int d=a;d<=b;d++){
    //     if (d%2==1) c+=d;
    // }
    while(a<=b){
        if (a%2==1){c+=a;}
        a++;
    }
    cout<<c;
    return 0;
}