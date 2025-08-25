#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int n;cin>>n;int l[n+1];int sum=0;
    for (int i=1;i<=n;++i){
        cin>>l[i];
    }
    for (int i=1;i<=n;++i){
        for (int j=i;j<=n;++j){
            int ci=0;
            for (int k=i;k<=j;++k){
                if (l[k]==1){ci++;}
            }
            if (ci%2==1){sum++;}
        }
    }
    cout<<sum;

    return 0;
}