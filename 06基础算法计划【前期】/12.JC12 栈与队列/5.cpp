#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int m,n;int a[1001];int l[101];int weizhi;int sum=0;int r;
void push(int x){
    l[r]=x;++r;
}
void pop(){
    weizhi++;
}
int main(){
    cin>>m>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];bool pd=false;
        for (int j=weizhi;j<r;++j){
            if (a[i]==l[j]){
                pd=true;break;
            }
        }
        if (pd==false){
            sum++;
            if (r-weizhi>=m){
                pop();
            }
            push(a[i]);            
        }
    }
    cout<<sum;
    return 0;
}