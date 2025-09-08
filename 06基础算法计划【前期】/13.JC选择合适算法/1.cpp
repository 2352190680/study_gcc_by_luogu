//# [NOIP2008 提高组] 火柴棒等式
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int a[10]={6,2,5,5,4,5,6,3,7,6};
int n;int sum;
int process(int x){
    if (x==0)return a[0];
    int z=0;
    while (x){
        z+=a[x%10];
        x/=10;
    }
    return z;
}
int main(){
    cin>>n;n-=4;
    for (int i=0;i<=999;++i){
        for (int j=0;j<=999;++j){
            int k=i+j;
            if (process(i)+process(j)+process(k)==n){
                sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}