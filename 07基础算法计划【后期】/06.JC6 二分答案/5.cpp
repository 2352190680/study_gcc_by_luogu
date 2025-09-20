#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long n,k;long long a[100009];
int main(){
    cin>>n>>k;
    for (long long i=1;i<=n;++i)cin>>a[i];
    sort(a+1,a+n+1);
    long long l=-1;
    long long r=a[n]+1;long long res=0;
    while (l+1<r){
        long long mid=(l+r)/2;long long sum=0;
        if (mid==0){
            mid++;
            for (int i=1;i<=n;++i){
                sum+=a[i]/mid;
            }
            if (sum==k)res=mid;
            break;
        }
        for (long long i=1;i<=n;++i){
            sum+=a[i]/mid;
        }
        if (sum<k)r=mid;
        else if (sum>=k){l=mid;res=mid;}
    }
    cout<<res;
    return 0;
}