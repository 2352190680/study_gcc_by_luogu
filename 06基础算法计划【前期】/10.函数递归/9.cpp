#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include <iomanip>
using namespace std;
int n,r;int flag[21];int a[21];
void dfs(int k){
    if (k==r+1){
        for (int i=1;i<=r;++i){
            cout<<setw(3)<<a[i];
        }
        cout<<endl;
        return;
    }
    for (int i=1;i<=n;++i){
        if (flag[i]==0&&i>=a[k-1]){
            flag[i]=1;a[k]=i;
            dfs(k+1);
            flag[i]=0;
        }
    }
}
int main(){
    cin>>n>>r;
    dfs(1);
    return 0;
}