#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
map<string,int>a;
int main(){
    int n;cin>>n;int sum=0;
    for (int i=1;i<=n;++i){
        string s;cin>>s;
        if (a.find(s)!=a.end()){
            if (a[s]>i-a[s]-1)sum++;
        }
        a[s]++;
    }
    cout<<sum;
    return 0;
}