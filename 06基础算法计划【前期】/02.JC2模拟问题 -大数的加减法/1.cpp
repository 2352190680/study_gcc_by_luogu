#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    // int a[25*2500+1];char c;int result[2]={11,21};int n=0;
    // while (1){
    //     cin>>c;
    //     if (c=='E')break;
    //     if (c=='W'){n++;a[n]=1;}
    //     else if (c=='L'){n++;a[n]=0;}
    // }
    // for (int i=0;i<2;++i){
    //     int w=0,l=0;
    //     for (int j=1;j<=n;++j){
    //         w+=a[j];l+=1-a[j];
    //         if (max(w,l)>=result[i]&&abs(w-l)>=2){
    //             cout<<w<<":"<<l<<endl;w=l=0;
    //         }
    //     }
    //     cout<<w<<":"<<l<<endl;
    // }

    // string a,b;cin>>a>>b;int l1=a.length(),l2=b.length();int z1[l1+1],z2[l2+1],c[100];memset(c,0,sizeof(c));
    // for (int i=l1-1;i>=0;--i){
    //     z1[l1-1-i]=a[i]-'0';
    // }
    // for (int i=l2-1;i>=0;--i){
    //     z2[l2-1-i]=b[i]-'0';
    // }int l=max(l1,l2);
    // for (int i=0;i<l;++i){
    //     c[i]+=z1[i]+z2[i];
    //     c[i+1]+=c[i]/10;
    //     c[i]=c[i]%10;
    // }
    // if (c[l]==1)l++;
    // for (int i=l-1;i>=0;--i){
    //     cout<<c[i];
    // }

    // string a,b,c;cin>>a>>b>>c;int l1=a.length(),l2=b.length(),l3=c.length();
    // int z1[l1+1],z2[l2+1],z3[l3+1];int e[100];memset(e,0,sizeof(e));memset(z1,0,sizeof(z1));memset(z2,0,sizeof(z2));memset(z3,0,sizeof(z3));
    // for (int i=1;i<=l1;++i){
    //     z1[i]=a[l1-i]-'0';
    // }
    // for (int i=1;i<=l2;++i){
    //     z2[i]=b[l2-i]-'0';
    // }
    // for (int i=1;i<=l3;++i){
    //     z3[i]=c[l3-i]-'0';
    // }
    // int ll=max(l1,l2);int l=max(ll,l3);
    // for (int i=1;i<=l;++i){
    //     e[i]+=z1[i]+z2[i]-z3[i];
    //     if (e[i]<0){
    //         e[i]+=10+z1[i]+z2[i]-z3[i];e[i+1]--;
    //     }
    //     if (e[i]>=10){
    //         e[i+1]=e[i]/10;
    //         e[i]=e[i]%10;
    //     }
    // }
    // if (e[l]==0)l--;
    // for (int i=l;i>=1;--i)cout<<e[i];
    // cout<<endl;    
    // cout<<l;

    // string a,b;cin>>a>>b;int l1=a.length(),l2=b.length();int z1[l1+1],z2[l2+1],c[100];memset(z1,0,sizeof(z1));memset(z2,0,sizeof(z2));memset(c,0,sizeof(c));
    // if (a==b){
    //     cout<<0;return 0;
    // }
    // else if(l1<l2||l1==l2&&a<b){
    //     string d=a;a=b;b=d;int l=l1;l1=l2;l2=l;
    //     cout<<"-";    
    // }   
    // for (int i=1;i<=l1;++i){
    //     z1[i]=a[l1-i]-'0';
    // }
    // for (int i=1;i<=l2;++i){
    //     z2[i]=b[l2-i]-'0';
    // }
    // for (int i=1;i<=l1;++i){
    //     c[i]+=z1[i]-z2[i];
    //     if (c[i]<0){
    //         c[i]+=10;
    //         c[i+1]--;
    //     }
    // } 
    // int ll=l1;
    // for (int i=ll;i>=1;--i){
    //     if (c[i]==0)l1--;
    // }     
    // for (int i=l1;i>=1;--i){
    //     cout<<c[i];
    // }   

    // int x,y;cin>>x>>y;int l[x+1][y+1];
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         int max=0;
    //         for (int m=1;m<=x;++m){
    //             for (int n=1;n<=y;++n){
    //                 if (l[i][j]==l[m][n]){
    //                     int d=pow(abs(m-i),2)+pow(abs(n-j),2);
    //                     if (d>=max){max=d;}
    //                 }
    //             }
    //         }
    //         cout<<max<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n;cin>>n;int l[n+1][5];int a[101][101];memset(a,0,sizeof(a));int x,y;
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=4;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // cin>>x>>y;
    // for (int i=1;i<=n;++i){
    //     for (int j=l[i][1];j<=l[i][1]+l[i][3];++j){
    //         for (int k=l[i][2];k<=l[i][2]+l[i][4];++k){
    //             a[j][k]=i;
    //         }
    //     }
    // }
    // if (a[x][y]==0){
    //     cout<<-1;
    // }else{
    //     cout<<a[x][y];
    // }

    // int x,y;cin>>x>>y;char l[x+2][y+2];
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         if (l[i][j]=='*')cout<<'*';
    //         else{
    //             int sum=0;
    //             if (l[i-1][j]=='*')sum++;
    //             if (l[i+1][j]=='*')sum++;
    //             if (l[i][j+1]=='*')sum++;
    //             if (l[i][j-1]=='*')sum++;
    //             if (l[i-1][j+1]=='*')sum++;
    //             if (l[i-1][j-1]=='*')sum++;
    //             if (l[i+1][j-1]=='*')sum++;
    //             if (l[i+1][j+1]=='*')sum++;
    //             cout<<sum;
    //         }
    //     }
    //     cout<<endl;
    // }

    //由于数字过大而采用字符串的记录方式
    int n;cin>>n;string l[n+1];string max="0";int maxnum=0;
    for (int i=1;i<=n;++i){
        cin>>l[i];
        if (l[i].size()>max.size()||l[i].size()==max.size()&&l[i]>max){
            maxnum=i;max=l[i];
        }
    }
    cout<<maxnum<<endl;
    cout<<max;
    return 0;
}