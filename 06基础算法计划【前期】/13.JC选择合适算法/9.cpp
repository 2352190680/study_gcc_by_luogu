#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int m,n;int a[1005][1005];
int main(){
    cin>>m>>n;int l=1;
    if (n-m==1){
        cout<<1;return 0;
    }
    else if (n-m==2){
        cout<<2;return 0;
    }
    a[1][1]=1,a[2][1]=1;
    for (int i=3;i<=n-m+1;++i){
        l+=4;
        for (int j=1;j<=l;++j){
            a[i][j]+=a[i-1][j]+a[i-2][j];
            a[i][j+1]+=a[i][j]/10;
            a[i][j]%=10;
        }
        for (int j=l;j>=1;--j){
            if (a[i][j]==0){
                l--;
            }else{
                break;
            }
        }
    }
    for (int i=l;i>=1;--i){
        cout<<a[n-m+1][i];
    }
    return 0;
}