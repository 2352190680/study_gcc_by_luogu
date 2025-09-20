#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include <vector>
using namespace std;
struct chuan{
    long long nation,time=0;
};
int n;vector<chuan>a(300001);
int main(){
    cin>>n;int c=1;int sum=0;int ge[100001] = {0};int d=1;
    for (int i=1;i<=n;++i){
        long long t;cin>>t;
        int k;cin>>k;
        for (int j=1;j<=k;++j){
            int b;cin>>b;
            a[c++]={b,t};ge[b]++;
            if (ge[b]==1)sum++;
        }
        while (d<c&&t-a[d].time>=86400){
            ge[a[d].nation]--;
            if (ge[a[d].nation]==0)sum--;
            d++;
        }
        cout<<sum<<endl;
    }
    return 0;
}