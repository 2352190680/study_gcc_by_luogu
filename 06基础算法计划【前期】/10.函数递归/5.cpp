#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n;int a[500001];
long long m(int l,int r){
    if(abs(r-l)>5){
        int x=(l+r)/2;
        return m(l,x)%max(m(x+1,r),7ll)+a[x]-1;
    }else{
        int ma=0;
        for (int i=l;i<=r;++i){
            if (a[i]>ma)ma=a[i];
        }
        return ma;
    }
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i)cin>>a[i];
    cout<<m(1,10);
    return 0;
}