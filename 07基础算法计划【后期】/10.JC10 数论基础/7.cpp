#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long a,b;
int main(){
    cin>>a>>b;
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    if (a%2==0)a++;
    if (b%2==0)b--;
    for (int i=a;i<=b;i+=2){
        int n=0;
        int t=i,tt=i;
        while (t!=0){
            n=n*10+t%10;
            t/=10;
        }
        if (n==i){
            bool pd=true;
            for (int k=2;k*k<=tt;++k){
                if (tt%k==0){
                    pd=false;break;
                }
            }
            if (pd==true){
                cout<<i<<" \n";
            }
            else{
                continue;
            }
        }
        else{
            continue;
        }
    }
    return 0;
}