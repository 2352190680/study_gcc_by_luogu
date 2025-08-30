#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    // int n;cin>>n;int l[n+1];int x,sum=0;int pai[14];
    // for (int i=1;i<=13;++i)pai[i]=4;
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];sum+=l[i];pai[l[i]]--;
    // }
    // x=21-sum;int small=0,big=0;
    // for (int i=1;i<=13;++i){
    //     if (x>=i)small+=pai[i];
    // }big=52-small-n;
    // if (big<small)cout<<"continue";
    // else cout<<"break";

    // int pk[5][5]={{0,0,1,1,0},
    //                      {1,0,0,1,0},
    //                      {0,1,0,0,1},
    //                      {0,0,1,0,1},
    //                      {1,1,0,0,0}};
    // int n,x1,x2;cin>>n>>x1>>x2;int l1[x1+1],l2[x2+1];int s1=0,s2=0;int t1=1,t2=1;
    // for (int i=1;i<=x1;++i)cin>>l1[i];
    // for (int i=1;i<=x2;++i)cin>>l2[i];
    // for (int i=1;i<=n;++i){
    //     s1+=pk[l1[t1]][l2[t2]];
    //     s2+=pk[l2[t2]][l1[t1]];
    //     t1++;t2++;
    //     if (t1>x1)t1/=x1;
    //     if (t2>x2)t2/=x2;
    // }cout<<s1<<" "<<s2;

    // int wei[6]={2,3,5,7,11,13};
    // string s;cin>>s;int a[7],b[7];int l=s.length();bool qiehuan=true;int c[8];memset(c,0,sizeof(c));memset(b,0,sizeof(b));memset(a,0,sizeof(a));
    // for (int x=0,i=l-1;i>=0;--i){
    //     if (qiehuan==true){
    //         if (s[i]<='9'&&s[i]>='0'){
    //             if (i!=0){
    //                 if (s[i-1]<='9'&&s[i-1]>='0'){
    //                     b[++x]=(s[i]-'0')+10*(s[i-1]-'0');i--;
    //                 }else{
    //                     b[++x]=s[i]-'0';
    //                 }
    //             }
    //             else{
    //                 b[++x]=s[i]-'0';
    //             }
    //         }
    //         if (s[i]=='+'){qiehuan=false;x=0;}
    //     }
    //     else if (qiehuan==false){
    //         if (s[i]<='9'&&s[i]>='0'){
    //             if (i!=0){
    //                 if (s[i-1]<='9'&&s[i-1]>='0'){
    //                     a[++x]=(s[i]-'0')+10*(s[i-1]-'0');i--;
    //                 }else{
    //                     a[++x]=s[i]-'0';
    //                 }
    //             }
    //             else{
    //                 a[++x]=s[i]-'0';
    //             }
    //         }          
    //     }
    // }
    // for (int i=1;i<=6;++i){
    //     c[i]+=a[i]+b[i];
    //     c[i+1]+=c[i]/wei[i-1];
    //     c[i]%=wei[i-1];
    // }
    // int len=7;
    // while(c[len]==0){
    //     len--;
    // }
    // for (int i=len;i>=2;--i){
    //     cout<<c[i]<<",";
    // }cout<<c[1];

    // int n;cin>>n;int a[n+1][3];
    // for (int i=1;i<=n;++i){
    //     cin>>a[i][1]>>a[i][2];
    // }
    // for (int i=1;i<=n;++i){
    //     int sum=0;
    //     int s[10001];memset(s,0,sizeof(s));s[1]=1;int l=1;
    //     for (int j=1;j<=a[i][1];++j){
    //         for (int k=1;k<=l;++k){
    //             s[k]*=j;
    //         }
    //         for (int k=1;k<=l;++k){
    //             s[k+1]+=s[k]/10;
    //             s[k]%=10;
    //         }
    //         while(s[l+1]!=0)l++;
    //     }
    //     for (int j=1;j<=l;++j){
    //         if (s[j]==a[i][2])sum++;
    //     }
    //     cout<<sum<<endl;
    // }

    int n;cin>>n;string m;cin>>m;int l=m.length();int c[l+1];
    for (int i=1;i<=l;++i){
        c[i]=m[i-1]-'0';////记住了，字符转数字要减去‘0’啊啊啊啊啊
    }
    for (int i=1;i<=l;++i){
        c[i+1]+=c[i]%n*10;
        c[i]%=n;
    }
    cout<<c[l];
    return 0;
}