#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;int k;cin>>k;
    int a[n+1];
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int t=0;
    for (int i=1;i<=n;++i){
        t++;
        if (t==k){
            cout<<a[i];
            return 0;
        }
        while(a[i]==a[i+1]){
            i++;
        }
    }
    cout<<"NO RESULT";
    return 0;
}