#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
map<int,long long>a;
int n,q;
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        int b;cin>>b;a[b]=i;
    }
    cin>>q;
    for (int i=1;i<=q;++i){
        long long c;cin>>c;
        if (a.find(c)!=a.end()){
            cout<<a[c];
        }else{
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}