//# 骑士的工作
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n,m,a[20001],b[20001];int sum;
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    for (int i=1;i<=m;++i){
        cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    if (n>m){
        cout<<"you died!";return 0;
    }
    else{
        for (int i=n;i>=1;--i){
            if (a[i]>b[m-n+i]){
                cout<<"you died!";return 0;
            }
        }
        int k=1;
        for (int i=1;i<=n;++i){
            while(b[k]<a[i]){
                ++k;
            }
            sum+=b[k];
            k++;
        }
    }
    cout<<sum;
    return 0;
}