#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int a;cin>>a;int l[a+1][a+1],ti[a+1][a+1];
    // for (int i=1;i<=a;++i){
    //     for (int j=1;j<=a;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i<=a;++i){
    //     for (int j=1;j<=a;++j){
    //         ti[a-i+1][a-j+1]=l[i][j];
    //     }
    // }
    // for (int i=1;i<=a;++i){
    //     for (int j=1;j<=a;++j){
    //         cout<<ti[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // string s; cin >> s; int l1 = s.length();
    // string a; cin >> a; int l2 = a.length();
    // bool pd = false;
    // for (int i = 0; i <= l1 - l2; ++i) {
    //     if (a[0] == s[i]) {
    //         bool p = true;
    //         for (int j = 0; j < l2; ++j) {
    //             if (a[j] != s[i + j]) p = false;
    //         }
    //         if (p == true) { pd = true; }
    //     }
    // }
    // if (pd == true) cout << "yes";
    // else { cout << "no"; }

    string s;int num=0;
    while(cin>>s){
        try{num+=stoi(s);}catch(...){}   //stoi 是 C++11 标准库中的一个函数，作用是将字符串（string 类型）转换为整数（int 类型）。//只能是数字，故而需要异常处理，或者判断是否为数字（isdigit()）；
    }
    cout<<num;

    return 0;
}