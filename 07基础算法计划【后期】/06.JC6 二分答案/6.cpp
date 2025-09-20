#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;long long x;long long a[100001];long long sum;
int main(){
    cin>>n>>x;
    for (int i=1;i<=n;++i){
        cin>>a[i];
        if (a[i]>x){
            sum+=a[i]-x;a[i]=x;
        }
    }
    for (int i=2;i<=n-1;++i){
        if (a[i]+a[i-1]>x){
            sum+=a[i]+a[i-1]-x;a[i]=x-a[i-1];
        }
    }
    sum+=max(0LL,a[n]+a[n-1]-x);//max前后的类型应该要一致，所以0要加LL变为long long形式
    cout<<sum;
    return 0;
}