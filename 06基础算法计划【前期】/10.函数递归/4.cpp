//# [NOIP2002 普及组] 选数
// #include<iostream>
// #include<cstring>
// #include<string>
// #include<cmath>
// #include<algorithm>
// using namespace std;
// int n,k;int a[21],b[21],flag[21];int sum=0;
// int p(int q){
//     bool pd=true;
//     for (int i=2;i*i<=q;++i){
//         if (q%i==0){ pd=false; break; }
//     }
//     if (pd) sum++;  
//     return 0;
// }
// void dfs(int x){
//     if (x>k){
//         int s=0;
//         for (int i=1;i<=k;++i){
//             s+=b[i];
//         }
//         if (s>=2){
//             p(s);
//         }
//         return;
//     }else{
//         for (int i=1;i<=n;++i){
//             if (!flag[i]){
//                 b[x]=a[i];flag[i]=1;
//                 dfs(x+1);
//                 flag[i]=0;
//             }
//         }
//     }
// }
// int main(){
//     cin>>n>>k;
//     for (int i=1;i<=n;++i){
//         cin>>a[i];
//     }
//     dfs(1);
//     cout<<sum;
//     return 0;
// }


//递归方式
#include<iostream>
using namespace std;
int n,k;int a[21],sum=0;
bool pd(int he){
    if (he<2)return false;
    else{
        for (int i=2;i*i<=he;++i){
            if (he%i==0)return false;
        }
        return true;
    }
}
void f(int t,int yu,int he){
    if (yu==0){
        if (pd(he)==true)sum++;
        return;
    }
    if (n-t+1<yu)return;
    for (int i=t;i<=n;++i){
        f(i+1,yu-1,he+a[i]);
    }
    return;
}
int main(){
    cin>>n>>k;
    for (int i=1;i<=n;++i)cin>>a[i];
    f(1,k,0);
    cout<<sum;
    return 0;
}