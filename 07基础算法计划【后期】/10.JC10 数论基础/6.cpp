#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long x,y;long long sum;
void gcd(long long a,long long b){
    if (a==b||a==0||b==0){
        cout<<sum+4*min(a,b);return;
    }
    else{
        if (a>b){
            long long ci=a/b;
            sum+=b*4*ci;a-=b*ci;
            gcd(a,b);
        }
        else{
            long long ci=b/a;
            sum+=a*4*ci;b-=a*ci;
            gcd(a,b);
        }
    }
}
int main(){
    cin>>x>>y;
    gcd(x,y);
    return 0;
}