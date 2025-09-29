#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
string a,b;
void dfs(string x,string y){
    if (y.size()==0)return;
    int n=x.find(y[0]);
    dfs(x.substr(0,n),y.substr(1,n));
    dfs(x.substr(n+1),y.substr(n+1));
    cout<<y[0];
    return;
}
int main(){
    cin>>a>>b;
    dfs(a,b);
    return 0;
}