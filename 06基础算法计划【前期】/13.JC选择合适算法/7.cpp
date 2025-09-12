#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    //暴力试试
    int m;cin>>m;
    // for (int i=1;i<=m/2;++i){
    //     for (int j=i;j<m;++j){
    //         if ((i+j)*(j-i+1)/2>=m){
    //             if ((i+j)*(j-i+1)/2==m)cout<<i<<" "<<j<<endl;
    //             break;
    //         }
    //     }
    // }
    //另类
    for (int i=sqrt(2*m);i<=m;++i){
        if (2*m%i==0&&(i+2*m/i)%2==1){//一奇数一偶数
            int j=2*m/i;
            cout<<(i-j+1)/2<<" "<<(i+j-1)/2<<endl;
        }
    }
    return 0;
}