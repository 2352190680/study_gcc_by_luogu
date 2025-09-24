#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int a,b,c,d,e,f;int flag[20001];long long sum;
int main(){
    cin>>a>>b>>c>>d>>e>>f;flag[0]=1;
    sum=a+2*b+3*c+5*d+10*e+20*f;
    for (int i=1;i<=a;++i){
        flag[i]=1;
    }
    for (int i=1;i<=b;++i){
        for (int j=sum;j>=0;--j){
            if (flag[j]==1&&j+2<=1000){
                flag[j+2]=1;
            }
        }
    }
    for (int i=1;i<=c;++i){
        for (int j=sum;j>=0;--j){
            if (flag[j]==1&&j+3<=1000){
                flag[j+3]=1;
            }
        }
    }
    for (int i=1;i<=d;++i){
        for (int j=sum;j>=0;--j){
            if (flag[j]==1&&j+5<=1000){
                flag[j+5]=1;
            }
        }
    }
    for (int i=1;i<=e;++i){
        for (int j=sum;j>=0;--j){
            if (flag[j]==1&&j+10<=1000){
                flag[j+10]=1;
            }
        }
    }
    for (int i=1;i<=f;++i){
        for (int j=sum;j>=0;--j){
            if (flag[j]==1&&j+20<=1000){
                flag[j+20]=1;
            }
        }
    }
    int g=0;
    for (int i=1;i<=sum;++i){
        if (flag[i]==1)g++;
    }
    cout<<"Total="<<g;
    return 0;
}