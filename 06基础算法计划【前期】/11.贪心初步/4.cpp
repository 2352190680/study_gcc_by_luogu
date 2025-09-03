#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n,extra;long long sum;int c;
struct cun{
    int cb,mc;
};
int main(){
    cin>>n>>extra;cun a[n+1];
    for (int i=1;i<=n;++i){
        cin>>a[i].cb>>a[i].mc;
        if (i==1){
            c=a[1].cb;
        }else{
            c=min(a[i].cb,c+extra);
        }
        sum+=c*a[i].mc;
    }
    cout<<sum;
    return 0;
}