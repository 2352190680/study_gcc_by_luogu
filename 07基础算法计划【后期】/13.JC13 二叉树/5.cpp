#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
string a,b;
void dfs(string x,string y){
    if (x.size()==0)return;
    int len=y.length();
    int n=x.find(y[len-1]);
    cout<<y[len-1];
    dfs(x.substr(0,n),y.substr(0,n));
    dfs(x.substr(n+1),y.substr(n,x.length()-1-n));
    return;
}
int main(){
    cin>>a>>b;
    dfs(a,b);
    return 0;
}