#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int n;cin>>n;int a[4],b[4];int sum=0;
    for (int i=1;i<=3;++i){
        cin>>a[i];
    }
    for (int i=1;i<=3;++i){
        cin>>b[i];
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            for (int k=1;k<=n;++k){
                int jiejin=0;bool p=true;
                if (abs(i-a[1])<=2||abs(i+n-a[1])<=2||abs(-i+n+a[1])<=2)jiejin++;
                if (abs(j-a[2])<=2||abs(j+n-a[2])<=2||abs(-j+n+a[2])<=2)jiejin++;
                if (abs(k-a[3])<=2||abs(k+n-a[3])<=2||abs(-k+n+a[3])<=2)jiejin++;
                // min(abs(i-a[1]), n-abs(i-a[1]))直接搞定
                if (jiejin==3){
                    sum++;p=false;
                }
                else{
                    jiejin=0;
                }
                if (p==true){
                    if (abs(i-b[1])<=2||abs(i+n-b[1])<=2||abs(-i+n+b[1])<=2)jiejin++;
                    if (abs(j-b[2])<=2||abs(j+n-b[2])<=2||abs(-j+n+b[2])<=2)jiejin++;
                    if (abs(k-b[3])<=2||abs(k+n-b[3])<=2||abs(-k+n+b[3])<=2)jiejin++;
                    if (jiejin==3){
                        sum++;
                    }
                }
            }
        }
    }
    cout<<sum;


    return 0;
}