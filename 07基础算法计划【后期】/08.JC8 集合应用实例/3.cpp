//呃，要哈希
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
int t;
int main(){
    cin>>t;
    for (int i=1;i<=t;++i){
        map<int,int>a;
        int n;cin>>n;
        for (int j=1;j<=n;++j){
            int x;cin>>x;
            if (a.find(x)==a.end())a[x]=j;
        }

        cout<<endl;
    }
    return 0;
}