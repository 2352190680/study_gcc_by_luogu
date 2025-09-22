#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
long long n;map<int,int>m;long long z;long long sum;
vector<int>v;
int main(){
    cin>>n;cin>>z;
    for (int i=0;i<n;++i){
        int a;cin>>a;
        m[a]++;
        v.push_back(a);
    }
    for (int i=0;i<n;++i){
        sum+=m[v[i]+z];
    }
    cout<<sum;
    return 0;
}