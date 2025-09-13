#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;string s[12];
void dfs(int x){
    if (x==n+1){
        for (int i=1;i<=n;++i){
            cout<<s[i];
        }
        cout<<endl;
        return;
    }
    for (int i=1;i<=2;++i){
        if (i==1){
            s[x]='N';
        }else{
            s[x]='Y';
        }
        dfs(x+1);
    }
}
int main(){
    cin>>n;
    dfs(1);
    return 0;
}