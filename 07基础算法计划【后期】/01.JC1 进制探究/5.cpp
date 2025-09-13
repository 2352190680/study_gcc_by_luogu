//P1017 [NOIP 2000 提高组] 进制转换
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int n,r;cin>>n>>r;string s;
    printf("%d=",n);
    while (n!=0){
        int t=n%r;
        n/=r;

        //重中之重，余数为复数的情况显然不合常理
        //所以：余数=-r，使余数正常；
        //n old=n⋅r+t
        //n old=(n+1)⋅r+(t−r)=n⋅r+t
        //所以：t-=r,n++;
        //本质仍然是10->k进制；
        if (t<0){
            t-=r;n++;
        }//牛而逼之！！！

        if (t>9){
            s+=t+'A'-10;
        }else{
            s+=t+'0';
        }
    }
    int l=s.length();
    for (int i=l-1;i>=0;--i){
        cout<<s[i];
    }
    printf("(base%d)",r);
    return 0;
}