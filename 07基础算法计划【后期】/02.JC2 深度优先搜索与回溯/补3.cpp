#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int k;cin>>k;int mi=0;
    int a[k+1];
    for (int i=1;i<=k;++i){
        cin>>a[i];
    }
    sort(a+1,a+k+1);
    for (int i=1;i<=k-1;++i){
        if (a[i+1]-a[i]>=mi)mi=a[i+1]-a[i];
    }
    cout<<mi;
    return 0;
}