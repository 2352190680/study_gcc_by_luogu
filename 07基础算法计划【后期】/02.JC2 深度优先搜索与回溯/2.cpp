// #include<iostream>
// #include<cmath>
// #include<string>
// #include<cstring>
// #include<algorithm>
// using namespace std;
// int n,k;int a[11];int flag[11];
// void dfs(int x){
//     if (x==k+1){
//         for (int i=1;i<=k;++i){
//             cout<<a[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     for (int i=1;i<=n;++i){
//         if (flag[i]==0){
//             a[x]=i;flag[i]=1;
//             dfs(x+1);
//             flag[i]=0;
//         }
//     }
// }
// int main(){
//     cin>>n>>k;
//     dfs(1);
//     return 0;
// }
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n,k;int a[11];int flag[11];
void dfs(int x){
    if (x==k+1){
        for (int i=1;i<=k;++i){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for (int i=1;i<=n;++i){
            a[x]=i;
            dfs(x+1);
        }
}
int main(){
    cin>>k>>n;
    dfs(1);
    return 0;
}