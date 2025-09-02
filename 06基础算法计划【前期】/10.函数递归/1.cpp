#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int wei=0;int n,m;
int a[10001];int b[10001];bool flag[10001];
// int akm(int x,int y){
//     if (x==0)return y+1;
//     else if (y==0){
//         return akm(x-1,1);
//     }
//     else{
//         return akm(x-1,akm(x,y-1));
//     }
// }
void dfs(int x){
    if (x>n){
        wei++;
        if (wei==m+1){
            for (int i=1;i<=n;++i){
                cout<<b[i]<<" ";
            }
            exit(0);
        }
        return;
    }
    if (wei==0){
        for (int i=a[x];i<=n;++i){
            if (!flag[i]){
                b[x]=i;flag[i]=1;
                dfs(x+1);
                flag[i]=0;
            }
        }
    }
    else{
        for (int i=1;i<=n;++i){
            if (!flag[i]){
                b[x]=i;flag[i]=1;
                dfs(x+1);
                flag[i]=0;
            }
        }      
    }
}//很妙
int main(){
    // int m,n;cin>>m>>n;
    // cout<<akm(m,n);
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    dfs(1);
    
    //内置函数全排列
    // for (int i=1;i<=m;++i){
    //     next_permutation(a+1,a+n+1);
    // }
    // for (int i=1;i<=n;++i){
    //     cout<<a[i]<<" ";
    // }



    return 0;
}