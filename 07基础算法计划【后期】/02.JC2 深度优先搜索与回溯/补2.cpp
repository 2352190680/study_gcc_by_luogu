#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;int a,b,c,d,e,f;int l[1000001];int lianxu;long long sum;
int main(){
    cin>>n>>a>>b>>c>>d>>e>>f;
    for (int i=1;i<=n;++i){
        cin>>l[i];
        if (l[i]==1){
            lianxu++;
            if (lianxu>=365)sum+=f;
            else if (lianxu>=120)sum+=e;
            else if (lianxu>=30)sum+=d;
            else if(lianxu>=7)sum+=c;
            else if (lianxu>=3)sum+=b;
            else{
                sum+=a;
            }
        }else{
            lianxu=0;
        }
    }
    cout<<sum;
    return 0;
}