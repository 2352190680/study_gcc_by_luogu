#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long t;int n;int a[50009];int da[50009],xiao[50009];int sum;int dg;int xg;
int main(){
    cin>>t>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];
        if (a[i]==0)sum++;
        else if (a[i]<0){
            xiao[++xg]=a[i];
        }
        else if (a[i]>0){
            da[++dg]=a[i];
        }
    }
    sort(da+1,da+dg+1);
    sort(xiao+1,xiao+xg+1);
    int last=0;
    while (t>=0){
        
    }



    return 0;
}