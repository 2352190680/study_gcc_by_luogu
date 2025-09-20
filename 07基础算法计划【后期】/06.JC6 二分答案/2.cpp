#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long n;
int main(){
    cin>>n;
    long long l=n*2/3,r=n+1;
    while (l+1<r){
        long long mid=(l+r)/2;
        long long yu=mid;long long sum=yu;
        while (yu>=3){
            sum+=yu/3;
            yu=yu%3+yu/3;
        }
        if (sum>n){
            r=mid;
        }
        else if (sum<n){
            l=mid;
        }
        else{
            cout<<mid;return 0;
        }
    }
    cout<<r;
    return 0;
}