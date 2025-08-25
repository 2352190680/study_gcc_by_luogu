#include<iostream>
using namespace std;
int main(){
    // int a,b,c,d;
    // scanf("%d%d%d",&a,&b,&c);
    // if (a>b)
    // d=a,a=b,b=d;
    // if (a>c)
    // d=a,a=c,c=d;
    // if (b>c)
    // d=b,b=c,c=d;
    // printf("%d %d %d",a,b,c);

    // int a,b,c,e,d;
    // scanf("%d%d%d%d",&a,&b,&c,&e);
    // if (a>b)
    // d=a,a=b,b=d;
    // if (a>c)
    // d=a,a=c,c=d;
    // if (a>e)
    // d=a,a=e,e=d;
    // if (b>c)
    // d=b,b=c,c=d;
    // if (b>e)
    // d=b,b=e,e=d;
    // if (c>e)
    // d=c,c=e,e=d;
    // printf("%d %d %d %d",a,b,c,e);    

    // 问号表达式
    // b=a==1?2:3   意为先判断a==1，若成立，则b赋值为2；否则b赋值为3
    // char a;
    // cin>>a;
    // cout<<((int(a)%2==1)?"YES":"NO");

    // &,|有着特殊的计算用法；~取反（0，1全变）;A<<1左移1比特=A*2      >>右移
    // int a=24,b=60;
    // cout<<(a&b)<<endl;

    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    d=a,a=b,b=d;
    if (a>c)
    d=a,a=c,c=d;
    if (b>c)
    d=b,b=c,c=d;
    if (a%2==1)cout<<a<<" ";
    if (b%2==1)cout<<b<<" ";   
    if (c%2==1)cout<<c;    
    return 0;
}
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (b > a)
//         if (b > c) cout << b;
//         else cout << c;
//     else cout << a;
// return 0;
// }