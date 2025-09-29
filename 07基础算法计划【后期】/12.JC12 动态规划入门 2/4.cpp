#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long f[41][41][41];
long long w(long long a,long long b,long long c){
    if (a>=0&&b>=0&&c>=0&&a<=40&&b<=40&&c<=40){
        if (f[a][b][c]){
            return f[a][b][c];
        }        
    }
    if (a<=0||b<=0||c<=0)return 1;
    else if (a>20||b>20||c>20){
        return w(20,20,20);
    }
    else if (a<b&&b<c){
        return f[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    }
    else return f[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}
int main(){
    long long a,b,c;
    while(cin>>a>>b>>c){
        if (a==-1&&b==-1&&c==-1)break;
        long long res=w(a,b,c);
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,res);
    }
    return 0;
}