//鸿山洞的灯
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
long long n,ju;long long a[100001];long long sum=0;
int main(){
    cin>>n>>ju;
    for (int i=1;i<=n;++i)cin>>a[i];
    sort(a+1,a+n+1);
    int i=1;
    for (int j=i+1;j<=n;++j){
        if (a[j]==a[i]+ju){
            if (j==n){
                sum+=j-i-1;
                cout<<sum;return 0;
            }
            else {sum+=j-i-1;i=j;}
        }else{
            if (j==n-1&&a[j]<a[i]+ju){
                cout<<sum;return 0;
            }
            else if (j==n){
                sum+=j-i-1;
                cout<<sum;return 0;
            }
            else if (a[j]>a[i]+ju){
                sum+=j-i-2;i=j-1;
            }
        }
    }
    cout<<sum;
    return 0;
}