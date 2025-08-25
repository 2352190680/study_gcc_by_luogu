#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s;
    // getline(cin,s);
    // cout<<s;

    // string s;
    // int n=0;
    // while (cin>>s){
    //     n+=s.length();
    // }     //按CTRL+Z
    //cout<<n;

    // string s;getline(cin,s);
    // int n=0,l=s.length();
    // for (int i=0;i<l;++i){
    //     if (s[i] !=' '){n++;}
    // }cout<<n;

    // int n;cin>>n;string s[25];
    // for (int i=1;i<=n;++i){
    //     cin>>s[i];
    // }
    // for (int m=1;m<=n-1;++m){
    //     for (int n=m+1;m<=n;++m){
    //         if (s[m]>s[n]){
    //             string b;
    //             b=s[m];
    //             s[m]=s[n];
    //             s[n]=b;
    //         }
    //     }
    // }
    // for (int m=1;m<=n;++m){
    //     cout<<s[m]<<endl;
    // }

    int n,f,sum=0;cin>>n>>f;int l[3][n+1];
    for (int b=1;b<=2;++b){
        for (int i=1;i<=n;++i){
            cin>>l[b][i];
    }
}
    for (int i=1;i<=n;++i){
        if (l[1][i]<=f){f+=l[2][i];sum++;}
    }
    cout<<sum;


    return 0;
}