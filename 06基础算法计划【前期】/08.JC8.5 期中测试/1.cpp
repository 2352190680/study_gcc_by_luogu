#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include <algorithm>
using namespace std;
struct z{
    int a,b;
};
bool cmp(z c,z d){
    return c.a==d.a?c.b<d.b:c.a>d.a;
}
int main(){
    // int n,m;cin>>n>>m;
    // long long a[n+1][3];int b[m+1];memset(b,0,sizeof(b));
    // for (int i=1;i<=n;++i){
    //     cin>>a[i][1]>>a[i][2];
    // }
    // for (int i=1;i<=n;++i){
    //     b[a[i][2]]+=a[i][1];
    //     cout<<a[i][2]<<" "<<b[a[i][2]]<<endl;
    // }

    // int n;cin>>n;string a[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // for (int i=1;i<=n;++i){
    //     int l=a[i].length();bool upper=false,lower=false,num=false,other=false;
    //     for (int j=0;j<l;++j){
    //         if (a[i][j]<='Z'&&a[i][j]>='A')upper=true;
    //         else if (a[i][j]<='z'&&a[i][j]>='a')lower=true; 
    //         else if (a[i][j]<='9'&&a[i][j]>='0')num=true; 
    //         else other=true; 
    //     }
    //     if (other==true||(upper==true&&lower==true&&num==false))cout<<"D";
    //     else if ((upper==true||lower==true)&&num==true)cout<<"C";
    //     else if (upper==true)cout<<"A";
    //     else if (lower==true)cout<<"B";
    //     cout<<endl;
    // }   

    // int n;cin>>n;int a[n+1][4];int num=0;
    // for (int i=1;i<=n;++i){
    //     cin>>a[i][1]>>a[i][2];
    //     a[i][3]=1;
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=i;j<=n;++j){
    //         if (a[i][1]>a[j][1]&&a[i][2]>a[j][2]&&a[j][3]==1){
    //             a[j][3]=0;num++;
    //         }
    //     }
    // }
    // cout<<num;
    //优化见上
    int n;cin>>n;int num=0;z e[n+1];int max=0;
    for (int i=1;i<=n;++i){
        cin>>e[i].a>>e[i].b;
    }
    sort(e+1,e+n+1,cmp);
    for (int i=1;i<=n;++i){
        if (e[i].b<max)num++;
        else max=e[i].b;
    }
    cout<<num;
    


    


    // int n,v1,v2;cin>>n>>v1>>v2;int a[n+1];int num=0,sum=0;int s1,s2;
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // for (int i=1;i<=n/2;++i){
    //     sum+=a[i];
    // }
    // num+=sum/v1;sum=0;s1=sum%v1;
    // for (int i=ceil(n/2)+1;i<=n;++i){
    //     sum+=a[i];
    // }
    // num+=sum/v2;s2=sum%v2;
    // if (n%2==1){
    //     if (s1>=s2){
    //         if (s1<=a[n/2+1])num++;
    //     }
    //     else{
    //         if (s1<=a[n/2+1])num++;
    //     }
    // }
    // cout<<num+2;



    return 0;
}