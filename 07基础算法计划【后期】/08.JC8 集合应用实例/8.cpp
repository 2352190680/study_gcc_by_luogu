#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int m,n;
struct ex{
    vector<int>a;
};
map<string,ex>mapp;
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        int x;cin>>x;
        for (int j=1;j<=x;++j){
            string s;cin>>s;
            mapp[s].a.push_back(i);
        }
    }
    cin>>m;
    for (int i=1;i<=m;++i){
        string s;cin>>s;int last=0;
        if (mapp.find(s)!=mapp.end()){
            int l=mapp[s].a.size();
            for (int j=0;j<l;++j){
                if (last!=mapp[s].a[j])cout<<mapp[s].a[j]<<" ";
                last=mapp[s].a[j];
            }
        }
        cout<<endl;
    }
    return 0;
}