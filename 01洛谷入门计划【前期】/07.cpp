#include <iostream>
using namespace std;
int main(){
    // int a,b,c,d;
    // d=0;
    // cin>>a>>b>>c;
    // if (a<60)d++;
    // if (b<60)d++;
    // if (c<60)d++;
    // if (d==1){
    //     cout<<1;
    // }  else{
    //     cout<<0;
    // }  

    // int a,b,c;
    // cin>>a>>b>>c;
    // if (!(a>b)&&!(a>c))cout<<1;   //       &&意为和，||意为或，!意为否

    // int a,b;
    // cin>>a>>b;
    // if ((9<a&&a<100)&&(9<b&&b<100)==1)cout<<1;

    // int a;
    // cin>>a;
    // // if (a%3!=0&&a%5!=0&&a%7!=0)cout<<"n";
    // if (!(a%3==0||a%5==0||a%7==0))cout<<"n";
    // if (a%3==0)cout<<"3"<<endl;
    // if (a%5==0)cout<<"5"<<endl;
    // if (a%7==0)cout<<"7"<<endl;

    int a;
    cin>>a;
    if (a%100==0){
        if (a%400==0)cout<<1;
        else cout<<0;
    } else {
    if (a%4==0)cout<<1;
    else cout<<0;
}
    return 0;
}