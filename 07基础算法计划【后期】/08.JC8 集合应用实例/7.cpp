#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    string s;cin>>s;int k,kk;int a[4]={0};
    int l=s.length();
    for (int i=0;i<l;++i){
        if (s[i]=='='){
            k=s[i+1]-'a'+1;kk=s[i-2]-'a'+1;
            if (s[i+1]>='0'&&s[i+1]<='9'){
                a[kk]=s[i+1]-'0';
            }
            else{
                a[kk]=a[k];
            }
        }
    }
    cout<<a[1]<<" "<<a[2]<<" "<<a[3];
    return 0;
}
//a:=1;b:=a;c:=b;c:=b;c:=2;
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	string s;
// 	map<char,char>m;
// 	cin>>s;
// 	m['a']=m['b']=m['c']='0';
// 	for (int i=0; i<s.size();i+= 5) {
// 		if (s[i+3]>='0'&&s[i+3]<='9'){
//             m[s[i]] =s[i+3];
//         }
// 		else{
//             m[s[i]]=m[s[i+3]];
//         }
// 	}
// 	cout <<m['a']<<" "<<m['b']<<" "<<m['c'];
// 	return 0;
// }