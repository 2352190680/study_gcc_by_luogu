#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;int a[100010];
int main(){
    cin>>n;int xu=1;int max=1;
    for (int i=1;i<=n;++i){
        cin>>a[i];
        if (a[i]>0)xu+=a[i];
        else{
            if (xu+a[i]<=0){
                max+=abs(xu-1+a[i]);
                xu=1;
            }else{
                xu+=a[i];
            }
        }
    }
    cout<<max;
    return 0;
}