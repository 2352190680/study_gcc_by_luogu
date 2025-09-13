#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n+1];long long sum=0;long long b=0;int he=0;
    for (int i=1;i<=n;++i){
        cin>>a[i];sum+=a[i];
    }
    for (int i=1;i<=n-1;++i){
        b+=a[i];
        if (b*2==sum)he++;
    }
    cout<<he;
    return 0;
}