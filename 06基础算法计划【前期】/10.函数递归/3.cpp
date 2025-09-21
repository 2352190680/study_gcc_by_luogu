#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n,flag[101],a[101];
void dfs(int k){
    if (k>n){
        for (int i=1;i<=n;++i){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }
    else{
        for (int i=1;i<=n;++i){
            if (!flag[i]){
                flag[i]=1;a[k]=i;
                dfs(k+1);
                flag[i]=0;
            }
        }
    }
}
// int gcd(int a,int b){
//     if (b==0)return a;
//     return gcd(b,a%b);//同时可以换大小
// }
int main(){
    // int a,b;cin>>a>>b;
    // cout<<gcd(a,b);

    cin>>n;
    dfs(1);
    return 0;
}