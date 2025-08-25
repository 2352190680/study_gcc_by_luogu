#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    // double a,b;cin>>a>>b;double c=a;a=a*b*b;
    // c=c/b;c=c-int(c)/2;
    // cout<<a<<" ";printf("%.2lf",c);cout<<endl;
    // if (a>50*c)cout<<"Apple";
    // else cout<<"elppA";

    // char a[10];cin>>a;
    // for (int i=0;i<=10;++i){
    //     if (a[i]=='.')a[i]='%';
    // }
    // for (int i=0;i<=10;++i)cout<<a[i];

    // int n;double a,sum=0,gz=100,hgz=0;cin>>n>>a;int l[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=n;++i){
    //     if (l[i]==1)sum+=100;
    //     else if (l[i]==0){
    //         hgz+=gz*a*0.01;gz=gz-gz*a*0.01;sum+=a;
    //     }
    // }
    // printf("%.1lf%%",hgz/sum*100);

    // int n;cin>>n;double l[n+1];double gz=100,hgz=0;
    // for (int i=1;i<=n;++i)cin>>l[i];
    // for (int i=1;i<=n;++i){
    //     hgz+=gz*l[i]*0.01;gz=gz-gz*0.01*l[i];
    // }
    // printf("%.1lf%%",hgz);

    int n;cin>>n;double l[n+1],sum=0,yu=0;
    for (int i=1;i<=n;++i)cin>>l[i];
    double a;cin>>a;
    for (int i=1;i<=n;++i){
        sum+=l[i];yu+=100-l[i];
    }
    printf("%.1lf%%",(sum+yu*a*0.01)/3);
    return 0;
}