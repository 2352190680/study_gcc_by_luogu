#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int n,q;vector<int>v[100009];//vector嵌套声明时，两个> >要加空格，否则为右移
int main(){
    cin>>n>>q;
    for (int i=1;i<=q;++i){
        int a,b,c,d;
        cin>>a;
        if (a==1){
            cin>>b>>c>>d;
            if (v[b].size()<c+1){
                v[b].resize(c+1);
            }
            v[b][c]=d;
        }
        else {
            cin>>b>>c;
            cout<<v[b][c]<<endl;
        }
    }
    return 0;
}