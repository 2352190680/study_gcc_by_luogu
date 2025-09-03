//小 E 与美食
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;
int n,a[300001];double bffeel,mzfeel,com,cun;
bool cmp(int x,int y){
    return x>y;
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);
    for (int i=1;i<=n;++i){
        bffeel++;mzfeel+=a[i];
        com=max(com,mzfeel/bffeel*mzfeel);com*=1.0;//小巧思，原本为和的平方除种类，但平方可能会爆，所以先除再乘自己
        if (i!=1){
            if (com<=cun){
                printf("%.8lf",com);return 0;
            }
        }
        if (i==n){
            printf("%.8lf",com);return 0;
        }
        cun=com;
    }
    return 0;
}