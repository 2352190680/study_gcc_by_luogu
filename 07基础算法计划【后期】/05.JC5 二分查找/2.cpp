#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;long long c;long long a[200001];long long sum;long long ge[200001];
void chazhao(long long x,int end){
    int left=1,right=end;int g=0;
    while (left<=right){
        int mid=(left+right)/2;
        if (a[mid]>x){
            right=mid-1;
        }
        else if (a[mid]<x){
            left=mid+1;
        }
        if (a[mid]==x){
            g++;
            int z=mid-1,zz=mid+1;
            while (z>=1&&a[z]==x){
                g++;z--;
            }
            while (zz<=end&&a[zz]==x){
                g++;zz++;
            }
            sum+=g;
            ge[end]=g;
            return;
        }
    }
    return;
}
int main(){
    cin>>n>>c;
    for (int i=1;i<=n;++i)cin>>a[i];
    sort(a+1,a+n+1);
    for (int i=n;i>=1;--i){
        if (i!=n&&a[i]==a[i+1]){
            ge[i]=ge[i+1];sum+=ge[i];continue;//小小剪枝
        }
        long long x=a[i]-c;
        if (x>=0)chazhao(x,i);
    }
    cout<<sum;
    return 0;
}