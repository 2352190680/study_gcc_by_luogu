#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n,m;long long a[2000001],b[100001];
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    for (int i=1;i<=m;++i){
        cin>>b[i];
    }
    for (int i=1;i<=m;++i){
        cout<<a[b[i]]<<endl;
    }
    return 0;
}