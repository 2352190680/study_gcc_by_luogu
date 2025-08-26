#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int n,m,k;cin>>n>>m>>k;int l[n+1][m+1];int q[k+1][5];
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=m;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i<=k;++i){
    //     for (int j=1;j<=4;++j){
    //         cin>>q[i][j];
    //     }
    // }
    // for (int i=1;i<=k;++i){
    //     int x1=q[i][1],y1=q[i][2],x2=q[i][3],y2=q[i][4];int sum=0;
    //     int a[11];memset(a,0,sizeof(a));
    //     for (int j=x1;j<=x2;++j){
    //         for (int k=y1;k<=y2;++k){
    //             a[l[j][k]]++;
    //         }
    //     }
    //     for (int b=1;b<=10;++b){
    //         if (a[b]!=0){sum++;}
    //     }
    //     cout<<sum<<endl;
    // }

    // int n;cin>>n;int l[n+1];int a[101];memset(a,0,sizeof(a));
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=n;++i){
    //     a[l[i]]++;
    // }
    // for (int i=0;i<=100;++i){
    //     if (a[i]%2==1)cout<<i<<" ";
    // }

    // int n;cin>>n;int l[n+1];int sum=0;
    // for (int i=1;i<=n;++i)cin>>l[i];
    // for (int i=1;i<=n-2;++i){
    //     for (int j=i+1;j<=n-1;++j){
    //         for (int k=j+1;k<=n;++k){
    //             if (l[i]+l[k]>l[j]&&l[i]+l[j]>l[k]&&l[j]+l[k]>l[i])sum++;
    //         }
    //     }
    // }
    // cout<<sum;

    string s;cin>>s;int a[35];int l=s.length();memset(a,0,sizeof(a));a[7]=0;
    for (int i=0;i<l;++i){
        if (s[i]=='m'){a[atoi(s.substr(i-1, 1).c_str())]++;}
        else if (s[i]=='s')a[atoi(s.substr(i-1, 1).c_str())+9]++;
        else if (s[i]=='p')a[atoi(s.substr(i-1, 1).c_str())+18]++;
        else if (s[i]=='E')a[28]++;
        else if (s[i]=='S')a[29]++;
        else if (s[i]=='W')a[30]++;
        else if (s[i]=='N')a[31]++;
        else if (s[i]=='B')a[32]++;
        else if (s[i]=='G')a[33]++;
        else if (s[i]=='R')a[34]++;
    }
    for (int i=1;i<=34;++i){
        cout<<a[i]<<" ";
    }
    return 0;
}
