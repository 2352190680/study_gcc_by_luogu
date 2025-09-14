//LGR133 洛谷 3 月月赛 I
//P9149 串串题
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
const long long N=1e9+7;
int jilu[1000001];
struct zu{
    int n,m,w,d;
    string a,b;
};
int t;
int shanchu(int x,int d,int w,string a,string b){
    long long sum=0;long long mini=0;
    
    
    
    
    if (sum>=mini)mini=sum;
    
    
    
    return sum;
}
using namespace std;
int main(){
    cin>>t;zu a[t+1];
    for (int i=1;i<=t;++i){
        cin>>a[i].n>>a[i].m>>a[i].w>>a[i].d;
        for (int j=1;j<=a[i].n;++j){
            cin>>a[i].a;
        }
        for (int j=1;j<=a[i].m;++j){
            cin>>a[i].b;
        }
        cout<<shanchu(1,a[i].d,a[i].w,a[i].a,a[i].b);      
    }
    return 0;
}