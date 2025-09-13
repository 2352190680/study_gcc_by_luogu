#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
void jieya(int x){
    string a;int ge=0;
    while (x!=0){
        a+=x%2+'0';
        if (x%2==1)
            ge++;
        }
        x/=2;
    }
    // cout<<a;
    int l[ge+1];int k=1;
    int len=a.length();
    // cout<<len;
    for (int i=0;i<len;++i){
        // cout<<a[i];
        if (a[i]=='1'){
            l[k++]=i;
            // cout<<l[k-1];
        }
    }
    for (int i=ge;i>=1;--i){
        if (l[i]==0){
            cout<<"2(0)";
        }
        else if (l[i]==1){
            cout<<"2";
        }
        else{
            cout<<"2(";
            jieya(l[i]);
            cout<<")";
        }
        if (i!=1){
            cout<<"+";
        }
    }
}
int main(){
    int n;cin>>n;
    jieya(n);
    return 0;
}