#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    // int a;
    // cin>>a;
    // cout<<a<<endl;
    // cout<<a<<a<<endl;
    // cout<<a<<a<<a<<endl;

    // cout<<int('C'-'A')<<endl;
    // cout<<char('a'+4);

    // int a;
    // char b;
    // a='M'-'A'+1;
    // b='A'+18-1;
    // cout<<a<<endl<<b;

    // int a,b;
    // scanf("%d%d",&a,&b);
    // printf("%d %d",b,a);
    // return 0;

    // double a,b;
    // scanf("%lf%lf",&a,&b);
    // printf("%lf %lf",b,a);    //有点像.format

    // double a;
    // int b;
    // scanf("%lf%d",&a,&b);
    // printf("%.4lf",a/b);

    int a,b,c,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=((c*60+d)-(a*60+b))/60;
    f=((c*60+d)-(a*60+b))%60;
    printf("%dhour %dminute",e,f);

    // char a;
    // cin>>a;
    // cout<<int(a);
    return 0;
}
//char(ASCII字符)，int(0000 0000 0000 0000),long long(0000 0000 00000 0000 0000 0000 0000 0000),float