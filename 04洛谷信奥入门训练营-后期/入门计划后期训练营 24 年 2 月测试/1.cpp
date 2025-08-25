#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int n,m;cin>>n>>m;char l[n+2][n+2];char a[m+2];int x=0,y=0;int fangxiang=8;
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=n;++j){
    //         cin>>l[i][j];
    //         if (l[i][j]=='S'){
    //             x=i;y=j;
    //         }
    //     }
    // }
    // for (int i=1;i<=m;++i) cin>>a[i];
    // for (int i=1;i<=m;++i){
    //     if (a[i]=='S'){
    //         if (fangxiang==8){
    //             if (l[x+1][y]!='*'&&x!=n){
    //                 x++;
    //             }                
    //         }
    //         else if (fangxiang==6){
    //             if (l[x][y-1]!='*'&&y!=1){
    //                 y--;
    //             }
    //         }
    //         else if (fangxiang==2){
    //             if (l[x-1][y]!='*'&&x!=1){
    //                 x--;
    //             }
    //         }
    //         else if (fangxiang==4){
    //             if (l[x][y+1]!='*'&&y!=n){
    //                 y++;
    //             }
    //         }
    //     }
    //     else if(a[i]=='W'){
    //         if (fangxiang==8){
    //             if (l[x-1][y]!='*'&&x!=1){
    //                 x--;
    //             }
    //         }
    //         else if (fangxiang==6){
    //             if (l[x][y+1]!='*'&&y!=n){
    //                 y++;
    //             }
    //         }
    //         else if (fangxiang==2){
    //             if (l[x+1][y]!='*'&&x!=n){
    //                 x++;
    //             }
    //         }
    //         else if (fangxiang==4){
    //             if (l[x][y-1]!='*'&&y!=1){
    //                 y--;
    //             }
    //         }
    //     }
    //     else if(a[i]=='L'){
    //         if (fangxiang==8) fangxiang=4;
    //         else if (fangxiang==6) fangxiang=8;
    //         else if (fangxiang==2) fangxiang=6;
    //         else if (fangxiang==4) fangxiang=2;
    //     }
    //     else if(a[i]=='R'){
    //         if (fangxiang==8) fangxiang=6;
    //         else if (fangxiang==6) fangxiang=2;
    //         else if (fangxiang==2) fangxiang=4;
    //         else if (fangxiang==4) fangxiang=8;
    //     }
    // }
    // cout<<x<<" "<<y;

    int n,m;cin>>n>>m;int l[n+m+1];int a[m+1];int min=100;
    for (int i=1;i<=n;++i){
        cin>>l[i];
    }
    for (int i=1;i<=m;++i){
        cin>>a[i];
    }
    for (int i=1;i<=m;++i){
        l[n+i]=a[i];
        for (int p=1;p<=100;++p){
            bool pd=true;
            for (int k=1;k<=n+i;++k){
                for (int q=k+1;q<=n+i;++q){
                    if (l[k]*l[q]==p){
                        pd=false;break;
                    }
                }
            }
            if(pd==true){cout<<p<<endl;break;}
        }
    }
    return 0;
}