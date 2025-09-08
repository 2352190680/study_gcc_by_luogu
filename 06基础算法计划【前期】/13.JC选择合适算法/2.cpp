//弹珠
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int n;int a[1001][1001];int maxa;int l[1000001][3];
int main(){
    cin>>n;bool pd=false;int ge=1;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            cin>>a[i][j];
            if (a[i][j]==0){
                pd=true;l[ge][1]=i,l[ge][2]=j;ge++;
            }
        }
    }
    if (pd==false){
        cout<<"Bad Game!";
        return 0;
    }
    for (int i=1;i<=ge;++i){
        int sum=0;
        for (int k=1;k<=n;++k){
            sum+=a[k][l[i][2]];
        }
        for (int k=1;k<=n;++k){
            sum+=a[l[i][1]][k];
        }
        sum-=a[l[i][1]][l[i][2]];
        if (sum>=maxa)maxa=sum;       
    }
    cout<<maxa;
    return 0;
}