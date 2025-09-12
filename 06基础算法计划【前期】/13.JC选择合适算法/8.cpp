#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
long long mini=100000000000;long long sum=0;int run=25;
double l[6][11];int ll[6];int a[6];
void dfs (int x){
    if (x==6){
        if (run==0){
            if (sum<=mini){
                mini=sum;
                for (int i=1;i<=5;++i){
                    a[i]=ll[i];
                }
            }          
        }
        return;
    }
    for (int i=1;i<=10;++i){
        run-=i;sum+=l[x][i];ll[x]=i;
        dfs(x+1);
        run+=i;sum-=l[x][i];
    }
}
int main(){
    for (int i=1;i<=5;++i){
        for (int j=1;j<=10;++j){
            cin>>l[i][j];
        }
    }
    dfs(1);
    cout<<mini<<endl;
    for (int i=1;i<=5;++i){
        cout<<a[i]<<" ";
    }
    return 0;
}