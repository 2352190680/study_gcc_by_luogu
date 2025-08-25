#include<iostream>
using namespace std;
int main(){
    // int n,sum=0;cin>>n;
    // for (int i=1;i<=n;++i){
    //     if (n%i==0){sum++;}
    // }
    // cout<<sum;

    // int a,b,c;cin>>a>>b>>c;
    // if (a+b<=c)cout<<"error";
    // else if (c+b<=a)cout<<"error";
    // else if (a+c<=b)cout<<"error";
    // else if (a==b&&a==c)cout<<"dengbian";
    // else if (a==b&&a!=c||a==c&&a!=b||b==c&&a!=b)cout<<"dengyao";
    // else{cout<<"yibian";}

    int a,b,n,sum=0;cin>>a>>b>>n;
    for (int i=a;i<=b;++i){
        int t=i;
        while(t!=0){
            if (t%10==n)sum++;
            t=t/10;
        }
    }
    cout<<sum;

    return 0;
}