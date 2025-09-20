#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;long long a[1000001];long long m;
int main(){
    cin>>n>>m;int r=0;
    for (int i=1;i<=n;++i){
        cin>>a[i];
        if (a[i]>=r)r=a[i];
    }
    int l=-1;r++;
    while (l+1<r){
        int mid=(l+r)/2;
        long long sum=0;
        for (int i=1;i<=n;++i){
            if (a[i]>mid)sum+=a[i]-mid;
        }
        if (sum==m){
            cout<<mid;return 0;
        }
        else if (sum<m){
            r=mid;
        }
        else if (sum>m){
            l=mid;
        }
    }
    cout<<l;
    return 0;
}