#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
long long gcd(long long x,long long y){
    if (y==0)return x;
    else  return gcd(y,x%y);
}
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for (int i=1;i<=n;++i){
        long long a0,a1,b0,b1,sum=0;
        cin>>a0>>a1>>b0>>b1;
        for (int j=1;j*j<=b1;j++){//因数
            if (b1%j==0){//倍数
                if (j%a1==0&&gcd(j/a1,a0/a1)==1&&gcd(b1/j,b1/b0)==1){
                    sum++;
                }
                int k=b1/j;
                if (j==k)continue;
                if (k%a1==0&&gcd(k/a1,a0/a1)==1&&gcd(b1/k,b1/b0)==1){
                    sum++;
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}