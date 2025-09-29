#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;int a[201];long long b[1200001];long long sum;long long c;
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];sum+=a[i];
    }
    b[0]=1;
    for (int i=1;i<=n;++i){
        for (int j=sum;j>=0;--j){
            if (b[j]==1)b[j+a[i]]=1;
        }
    }
    for (int i=1;i<=sum;++i){
        if (b[i]==1)c++;
    }
    cout<<c;
    return 0;
}