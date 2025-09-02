//# 烤鸡
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n;int sum=0;int a[11];bool flag[11];
void f(int x,int yu){
    if (x==11){
        if (yu==0)sum++;
        for (int i=1;i<=10;++i){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for (int i=1;i<=10;++i){
        for (int j=0;j<=2;++j){
            if (!flag[i]&&j<=yu){
                flag[i]=1;a[i]=j+1;
                f(x+1,yu-j);
                flag[i]=0;
            }
        }
    }
}
int main(){
    cin>>n;
    for (int i=1;i<=10;++i){ a[i]=1; flag[i]=false; }
    if (n<10||n>30){
        cout<<0;return 0;
    }
    else if (n==10){
        cout<<1<<endl;
        for (int i=1;i<=10;++i){
            cout<<1<<" ";
        }
        return 0;
    }
    else if (n==30){
        cout<<1<<endl;
        for (int i=1;i<=10;++i){
            cout<<3<<" ";
        }
        return 0;        
    }
    else{
        f(0,n-10);
    }





    return 0;
}