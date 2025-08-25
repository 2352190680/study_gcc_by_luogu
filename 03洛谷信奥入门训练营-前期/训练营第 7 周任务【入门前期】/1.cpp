#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int x,y,z,k;cin>>x>>y>>z>>k;int dui=0;
    // if (x>=k){dui+=x/k;x=x%k;cout<<dui<<" "<<x<<endl;}
    // else{
    //     cout<<dui<<" "<<x<<endl;
    // }
    // x+=y;
    // if (x>=k){dui+=x/k;x=x%k;cout<<dui<<" "<<x<<endl;}
    // else{
    //     cout<<dui<<" "<<x<<endl;
    // }
    // x+=z;
    // if (x>=k){dui+=x/k;x=x%k;cout<<dui<<" "<<x<<endl;}
    // else{
    //     cout<<dui<<" "<<x<<endl;
    // }

    // int x,y,z;cin>>x>>y>>z;
    // y+=x/2;x=x-x/2;z+=y-y/2;y=y/2;x+=z/2;z=z-z/2;
    // cout<<x<<endl;cout<<y<<endl;cout<<z<<endl;
    // printf("%.1lf",(x+y+z)/3.0);

    // double a;cin>>a;
    // a=a-int(a);
    // printf("%.5lf",a);

    // int n;cin>>n;double a=100;
    // for (int i=1;i<=n;++i){
    //     a=a/2;
    // }
    // printf("%.1lf%%",100-a);

    int n,k;cin>>n>>k;int c=k%(2*(n-1));
    if (c<=n){
        for (int i=1;i<c+1;++i)cout<<"_";
        cout<<"A";
        for (int i=c+2;i<=n;++i)cout<<"_";
    }else{
        c=c-n+1;
        for (int i=1;i<n-c;++i)cout<<"_";
        cout<<"A";
        for (int i=n-c+1;i<=n;++i)cout<<"_";
    }


    return 0;
}