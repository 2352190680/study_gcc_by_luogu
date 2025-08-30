#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int n;cin>>n;int sum=0;
    //了解n内质数个数
    for (int i=3;i<=n;++i){
        bool p=true;
        for (int j=2;j*j<=i;++j){
            if (i%j==0){
                p=false;
            }
        }
        if (p==true)sum++;
    }
    //录入所有质数
    int a[sum+2];a[1]=2;int k=2;
    for (int i=3;i<=n;++i){
        bool p=true;
        for (int j=2;j*j<=i;++j){
            if (i%j==0){
                p=false;
            }
        }
        if (p==true){
            a[k]=i;k++;
        }
    }    
    //从小相加，成立立刻停止
    for (int i=1;i<=k;++i){
        for (int j=i;j<=k;++j){
            for (int l=j;l<=k;++l){
                if (a[i]+a[j]+a[l]==n){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[l];return 0;
                }
            }
        }
    }




    return 0;
}