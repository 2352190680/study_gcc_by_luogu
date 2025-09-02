#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>//排序
using namespace std;
int main(){
    // int a,b,x,y;cin>>a>>b>>x>>y;
    // int l[a+1][b+1][3];memset(l,0,sizeof(l));
    // for (int i=0;i<=a;++i){
    //     l[i][0][1]=1;
    // }
    // for (int i=0;i<=b;++i){
    //     l[0][i][1]=1;
    // }
    // l[x][y][2]=1;
    // if (x>=2&&y>=1&&y<=b-1){
    //     l[x-2][y+1][2]=1;l[x-2][y-1][2]=1;
    // }
    // if (x<=a-2&&y>=1&&y<=b-1){
    //     l[x+2][y+1][2]=1;l[x+2][y-1][2]=1;
    // }
    // if (y>=2&&x>=1&&x<=a-1){
    //     l[x-1][y-2][2]=1;l[x+1][y-2][2]=1;
    // }
    // if (y<=b-2&&x>=1&&x<=a-1){
    //     l[x-1][y+2][2]=1;l[x+1][y+2][2]=1;
    // }
    // for (int i=1;i<=a;++i){
    //     for (int j=1;j<=b;++j){
    //         if (l[i][j][2]==0){
    //             l[i][j][1]=l[i-1][j][1]+l[i][j-1][1];
    //         }
    //     }
    // }
    // cout<<l[a][b][1];

    // int x,n;cin>>x>>n;int sum=1;
    // for (int i=1;i<=n;++i){
    //     sum+=sum*x;
    // }
    // cout<<sum;

    int m,n;cin>>m>>n;int a[n+2][m+2];memset(a,0,sizeof(a));
    a[1][1]=1;
    for (int i=1;i<=n+1;++i){
        for (int j=1;j<=m+1;++j){
            if (i==1&&j==1)continue;
            if (i>=3&&j>=2)a[i][j]+=a[i-2][j-1];
            if (i>=3&&j<=m)a[i][j]+=a[i-2][j+1];
            if (i>=2&&j>=3)a[i][j]+=a[i-1][j-2];
            if (i>=2&&j<=m-1)a[i][j]+=a[i-1][j+2];
        }
    }
    cout<<a[n+1][m+1];


    // int m,n;cin>>m>>n;int a[n+1][m+1];memset(a,0,sizeof(a));
    // a[0][0]=1;
    // for (int i=0;i<=n;++i){
    //     for (int j=0;j<=m;++j){
    //         if (i==0&&j==0)continue;
    //         if (i>=2&&j>=1)a[i][j]+=a[i-2][j-1];
    //         if (i>=2&&j<=m-1)a[i][j]+=a[i-2][j+1];
    //         if (i>=1&&j>=2)a[i][j]+=a[i-1][j-2];
    //         if (i>=1&&j<=m-2)a[i][j]+=a[i-1][j+2];
    //     }
    // }
    // cout<<a[n][m];
    return 0;
}