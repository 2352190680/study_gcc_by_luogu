#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
struct cow{
    int num,price;
};
bool cmp(cow x,cow y){
    return x.price<y.price;
}
int main(){
    int n,m;cin>>n>>m;cow a[m+1];int j;int sum=0;
    for (int i=1;i<=m;++i){
        cin>>a[i].price>>a[i].num;
    }
    sort(a+1,a+m+1,cmp);
    for (j=1;j<=m;++j){
        if (n<a[j].num){
            break;
        }
        n-=a[j].num;sum+=a[j].price*a[j].num;
    }
    if (j<n){
        sum+=n*a[j].price;
    }
    cout<<sum;
    return 0;
}