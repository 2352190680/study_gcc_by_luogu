#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;long long m;int a[100001];int sum=1;long long cun;
int main(){
    cin>>n>>m;
    for (int i=1;i<=n;++i){
        cin>>a[i];
        if (a[i]>=m)sum++;
        else if (a[i]<m){
            cun+=a[i];
            if (cun>m){
                sum++;cun=a[i];
            }
            else if (cun==m&&i!=n){
                sum++;cun=0;
            }
        }
    }
    cout<<sum;
    return 0;
}