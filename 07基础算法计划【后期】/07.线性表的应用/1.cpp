#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int n;vector<int>a(n);
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        int t;cin>>t;
        a.push_back(t);
    }
    int ans;cin>>ans;
    cout<<ans<<" ";
    while (a[ans-1]!=0){
        cout<<a[ans-1]<< " ";
        ans=a[ans-1];
    }
    return 0;
}