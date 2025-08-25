#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int a,b;cin>>a>>b;int shuzi=1;
    // for (int i=1;i<=a;++i){
    //     for (int j=1;j<=b;++j){
    //         if (i%2==1){
    //             cout<<shuzi<<"\t";shuzi++;
    //         }else{
    //             cout<<b+1-2*j+shuzi<<"\t";shuzi++;
    //         }
    //     }
    //     cout<<endl;
    // }

    int a,b;cin>>a>>b;int l[a+1];
    for (int i=1;i<=a;++i){
        cin>>l[i];
    }
    int c=l[b];
    for (int i=1;i<=a;++i){
        l[b]=l[l[b]];
        if (l[b]==b){cout<<"yes";return 0;}
    }
    if (l[b]==c){cout<<"no";}
    return 0;
}