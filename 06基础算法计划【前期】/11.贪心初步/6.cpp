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
            if (a[i]+ju>a[n-1]&&a[i]+ju<a[n]){
                sum+=n-2-i;
                cout<<sum;return 0;//ju=5,10,11,12,16情况
            }
            else if (j==n){
                sum+=j-i-1;
                cout<<sum;return 0;//1 2 3情况
            }
            else if (a[j]>a[i]+ju){
                sum+=j-i-2;i=j-1;
            }
        }
    }
    cout<<sum;
    return 0;
}