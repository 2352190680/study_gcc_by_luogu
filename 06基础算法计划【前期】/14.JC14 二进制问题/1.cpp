#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int a[100];
int main(){
    // int k;cin>>k;int l=1;
    // for (int i=1;i<=100;++i){
    //     l+=2;a[1]++;
    //     for (int j=1;j<=l;++j){
    //         a[j+1]+=a[j]/k;
    //         a[j]%=k;
    //     }
    //     while(a[l]==0)l--;
    //     for (int j=l;j>=1;--j){
    //         cout<<a[j];
    //     }
    //     cout<<endl;
    // }

    //k进制转10
    string s;int k;cin>>k>>s;
    int l=s.length();
    long long sum=0;
    for (int i=l-1;i>=0;--i){
        if (s[i]<='9'&&s[i]>='0')sum+=pow(k,l-i-1)*(s[i]-'0');
        else{
            sum+=pow(k,l-i-1)*(s[i]-'A'+10);
        }
    }
    // cout<<sum;

    int c;cin>>c;string ss;
    while(sum!=0){
        if (sum%c<=9)ss+=sum%c+'0';
        else{
            ss+='A'+sum%c-10;
        }
        sum/=c;
    }
    int ll=ss.length();
    for (int i=ll-1;i>=0;--i){
        cout<<ss[i];
    }

    //10转k进制
    // long long n;cin>>n;int k;cin>>k;string s;
    // while(n!=0){
    //     if (n%k<=9)s+=n%k+'0';
    //     else{
    //         s+='A'+n%k-10;
    //     }
    //     n/=k;
    // }
    // int l=s.length();
    // for (int i=l-1;i>=0;--i){
    //     cout<<s[i];
    // }
    return 0;
}