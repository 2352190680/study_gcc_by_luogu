//寻找团伙
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
struct people{
    int n;
    int a[61];
};
int main(){
    int n,k;cin>>n>>k;people l[n+1];
    for (int i=1;i<=n;++i){
        cin>>l[i].n;
        for (int j=1;j<=l[i].n;++j){
            cout<<l[i].a[j];
        }
    }

    return 0;
}