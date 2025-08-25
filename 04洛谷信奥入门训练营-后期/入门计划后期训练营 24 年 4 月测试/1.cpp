#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int n;string str;int max=0;
    cin>>n;cin>>str;
    for (int i=0;i<=n-2;++i){
        for (int j=i+1;j<=n-1;++j){    //区间
            bool pd=true;
            for (int p=i;p<=j-1;++p){
                for (int q=p+1;q<=j;++q){   //检验
                    if (str[p]==str[q])pd=false;
                }
            }
            int a;
            if (pd==true)a=j-i+1;
            if (a>=max)max=a;
        }
    }
    cout<<max;

    return 0;
}