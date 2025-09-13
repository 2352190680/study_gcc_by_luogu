#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;int a[14];int ge;int flag[14];
void dfs(int x){
    if (x==n+1){
        ge++;
        if (ge<=3){
            for (int i=1;i<=n;++i){
            cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    for (int i=1;i<=n;++i){
        if (flag[i]==0){
            a[x]=i;bool p=true;
            for (int k=1;k<=x;++k){
                for (int j=k+1;j<=x;++j){
                    if (abs(a[j]-a[k])==j-k){
                        p=false;break;
                    }
                    if (p==false){
                        break;
                    }
                }
            }
            if (p==true){
                flag[i]=1;
                dfs(x+1);
                flag[i]=0;
            }               
        }
    }
}
int main(){
    cin>>n;
    dfs(1);
    cout<<ge;
    return 0;
}