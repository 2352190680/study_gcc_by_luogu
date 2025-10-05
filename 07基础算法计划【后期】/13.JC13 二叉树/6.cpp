#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int n;string s;
char dfs(string x){
    char a;
    int len=x.size();
    if (len==1){
        if (x=="1")a='I';
        else a='B';
    }
    else{
        char l=dfs(x.substr(0,len/2));
        char r=dfs(x.substr(len/2));
        if (l!=r)a='F';
        else a=l;
    }
    cout<<a;
    return a;
}
int main(){
    cin>>n>>s;
    dfs(s);
    return 0;
}