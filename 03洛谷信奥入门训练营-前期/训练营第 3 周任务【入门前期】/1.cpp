#include<iostream>
using namespace std;
int main(){
    int a,n,sum=0,ci=0;
    cin>>a>>n;int l[n+1];
    for (int i=1;i<=n;++i){
        cin>>l[i];
    }
    for (int i=1;i<=n;++i){
        sum+=l[i];ci++;
        if (sum>=a){cout<<ci;break;}
    }

    return 0;
}