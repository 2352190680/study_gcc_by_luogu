//# 烤鸡
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n;int sum=0;int a[11];int b[10000][11];
void dfs(int k){
    if (k==11){
        if (n==0){
            sum++;
            for (int i=1;i<=10;++i){
                b[sum][i]=a[i];
            }
            return;
        }
        else return;
    }
    for (int j=1;j<=3;++j){
        a[k]=j;
        n-=j;
        dfs(k+1);
        n+=j;
    }
}
int main(){
    cin>>n;
    for (int i=1;i<=10;++i){ a[i]=1;}
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
        dfs(1);
    }
    cout<<sum<<endl;
    // for (int i=1;i<=sum;++i){
    //     for (int j=1;j<=10;++j){
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }





    return 0;
}