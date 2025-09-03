//[传智杯 #3 决赛] 商店
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n,m,sum;
int main(){
    cin>>n>>m;int a[n+1],b[m+1];
    for (int i=1;i<=n;++i)cin>>a[i];
    for (int i=1;i<=m;++i)cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    int c=0;
    for (int i=1;i<=m;++i){
        c++;
        if (a[c]>=b[i]){
            sum++;
        }
        else {
            while(c<n){
                c++;
                if (c==n&&a[n]<b[i]){
                    cout<<sum;return 0;
                }
                else if (a[c]>=b[i]){
                    sum++;break;
                }
            }
        }
        if (c==n)break;
    }
    cout<<sum;
    return 0;
}