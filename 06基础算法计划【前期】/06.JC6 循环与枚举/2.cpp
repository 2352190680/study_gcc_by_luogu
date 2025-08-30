#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int d,n;cin>>d>>n;int a[n+1][4];int summax=0;int num=0;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=3;++j){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<129;++i){
        for (int j=0;j<129;++j){
            int sum=0;
            for (int k=1;k<=n;++k){
                if (abs(a[k][1]-i)<=d&&abs(a[k][2]-j)<=d){
                    sum+=a[k][3];
                }
            }
            if (sum>=summax){
                summax=sum;
            }
        }
    }
    for (int i=0;i<129;++i){
        for (int j=0;j<129;++j){
            int sum=0;
            for (int k=1;k<=n;++k){
                if (abs(a[k][1]-i)<=d&&abs(a[k][2]-j)<=d){
                    sum+=a[k][3];
                }
            }
            if (sum==summax)num++;       
        }
    }

    
    cout<<num<<" "<<summax;




    return 0;
}