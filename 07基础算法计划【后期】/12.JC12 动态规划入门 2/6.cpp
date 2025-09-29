#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include <iomanip>
using namespace std;
int n,t;double sum;
struct coin{
    double m,v;
};coin a[101];
bool cmp(coin x,coin y){
    return x.v/x.m>y.v/y.m;
}
int main(){
    cin>>n>>t;
    for (int i=1;i<=n;++i){
        cin>>a[i].m>>a[i].v;
    }
    sort(a+1,a+n+1,cmp);
    for (int i=1;i<=n;++i){
        if (t>=a[i].m){
            t-=a[i].m;
            sum+=a[i].v;
        }
        else{
            sum+=t*(a[i].v/a[i].m);
            break;
        }
    }
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}