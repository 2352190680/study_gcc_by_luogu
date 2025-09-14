#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long N=pow(2,32);
int n;int a[5001];long long sum;int b[4][3];
void dfs(int x){
    if (x==4){
        sum+= (static_cast<long long>(floor(b[1][2]*1.0/b[2][2])) * static_cast<long long>(floor(b[1][2]*1.0/b[3][2])) * static_cast<long long>(floor(b[2][2]*1.0/b[3][2]))) % N;
        return;
    }
    for (int i=b[x-1][1]-1;i>=1;--i){
        if (3-x>i)return;
        b[x][2]=a[i];b[x][1]=i;
        dfs(x+1);
    }
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    b[0][1]=n+1;
    dfs(1);
    cout<<sum;
    return 0;
}