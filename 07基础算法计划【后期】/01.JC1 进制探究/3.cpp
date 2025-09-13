#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;long long l[n+1];int flag[n+1];memset(flag,0,sizeof(flag));
    long long sum=0;
    for (int i=1;i<=n;++i){
        cin>>l[i];
    }
    sort(l+1,l+n+1);
    for (int i=1;i<=n;++i){
        if (flag[i]==0){
            for (int j=i+1;j<=n;++j){
                if (flag[j]==0){
                    if ((l[i]^l[j])<=l[i]+l[j]){//^的优先级太低了，要打括号
                        flag[j]=1;
                        l[i]=l[i]^l[j];
                    }
                }
            }
        }
    }
    for (int i=1;i<=n;++i){
        if (flag[i]==0){
            sum+=l[i];
        }
    }
    cout<<sum;
    return 0;
}


//然而，i^j<=i+j是必然的，事实上，全部数都异或一遍即可