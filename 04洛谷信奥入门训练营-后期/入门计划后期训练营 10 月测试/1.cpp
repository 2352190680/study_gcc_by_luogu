#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int n,m;cin>>n>>m;int l[n+1];int ll[m+1][3];int min=10;
    for (int i=1;i<=n;++i)cin>>l[i];
    for (int i=1;i<=m;++i){
        for (int j=1;j<=2;++j){
            cin>>ll[i][j];
        }
    }
    for (int i=1;i<=m;++i){
        for (int k=0;k<=10;++k){
            bool pd=true;
            for (int j=ll[i][1];j<=ll[i][2];++j){
                if (l[j]==k)pd=false;        
            }
            if (pd==true){cout<<k<<endl;break;}
        }
    }

    return 0;
}