#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;long long summax;long long sum;int dp[21];int b[21];
struct dilei{
    long long num;
    int a[21];
};dilei l[21];
void dfs(int x){
    bool p=false;
    for (int i=x+1;i<=n;++i){
        if (l[x].a[i]==1){p=true;}
    }
    if (p==false){
        sum+=l[x].num;
        if (sum>=summax){
            summax=sum;dp[x]=x;
            memset(b,0,sizeof(b));
            for (int i=1;i<=n;++i){
                b[i]=dp[i];
            } 
            dp[x]=0;  
        }
        sum-=l[x].num;
        return;
    }
    else{
        for (int i=x+1;i<=n;++i){
            if (l[x].a[i]==1){
                sum+=l[x].num;dp[x]=x;
                dfs(i);
                sum-=l[x].num;dp[x]=0;
            }
        }
    }
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>l[i].num;
    }
    for (int i=1;i<=n-1;++i){
        for (int j=i+1;j<=n;++j){
            cin>>l[i].a[j];
        }
    }
    for (int i=1;i<=n;++i){sum=0;dfs(i);}
    for (int i=1;i<=20;++i){
        if (b[i]!=0)cout<<b[i]<<" ";
        else continue;
    }
    cout<<endl;
    cout<<summax;
    return 0;
}