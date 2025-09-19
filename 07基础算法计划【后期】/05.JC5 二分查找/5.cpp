#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;int a[301];long long sum;int b[151],c[151];
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int mid=n/2;
    for (int i=1;i<=mid;++i){
        c[i]=a[i];b[i]=a[n-i+1];
    }
    if (n%2==0){
        sum+=b[1]*b[1];
        for (int i=1;i<=mid;++i){
            sum+=pow(b[i]-c[i],2);
            if (i!=mid)sum+=pow(b[i+1]-c[i],2);
        }
    }
    else{
        b[mid+1]=a[mid+1];
        sum+=b[1]*b[1];
        for (int i=1;i<=mid;++i){
            sum+=pow(b[i]-c[i],2);
            sum+=pow(b[i+1]-c[i],2);
        }
    }
    cout<<sum;
    return 0;
}