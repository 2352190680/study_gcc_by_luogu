#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long t;int n;int a[50009];
bool chazhao(int x){
    for (int r=x;r<=n;++r){
        int l=r-x+1;
        if (a[r]<0){
            if (-a[l]<=t)return true;
        }
        if (a[l]>0){
            if (a[r]<=t)return true;
        }
        if (a[l]<0&&a[r]>0){
            if (min(abs(a[l]),abs(a[r]))+a[r]-a[l]<=t)return true;
        }
    }
    return false;
}
int main(){
    cin>>t>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int l=-1,r=n+1;
    while (l+1<r){
        int mid=(l+r)/2;
        if (chazhao(mid)==true)l=mid;
        else r=mid;
    }
    cout<<l;
    return 0;
}