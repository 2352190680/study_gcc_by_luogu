#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
// struct mark{
//     string name;
//     int score;
// };
// struct com{
//     int hao;
//     int score;
// };
// struct student{
//     string name;
//     int mox;
//     int banji;
//     string ganbu;
//     string xibu;
//     int num;
//     int z;
// };
// int jisuan(int a,int b,string c,string d,int e){
//     int sum=0;
//     if(a>80&&e>=1)sum+=8000;
//     if(b>80&&a>85)sum+=4000;  
//     if(a>90)sum+=2000; 
//     if(a>85&&d=="Y")sum+=1000; 
//     if(b>80&&c=="Y")sum+=850; 
//     return sum;
// }
// struct sn{
//     int num;
//     int l[num+1];
// };
int main(){
    // int n;cin>>n;int a[10];memset(a,0,sizeof(a));
    // for (int i=1;i<=n;++i){
    //     int x;cin>>x;a[x]++;
    // }
    // for (int i=0;i<=10;++i){
    //     for (int j=1;j<=a[i];++j){
    //         cout<<i<<" ";
    //     }
    // }

    // int n;cin>>n;int a[n+1];int ci=0;
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=i+1;j<=n;++j){
    //         if (a[i]>a[j]){
    //             int t=a[i];a[i]=a[j];a[j]=t;ci++;
    //         }
    //     }
    // }
    // for (int i=1;i<=n;++i){
    //     cout<<a[i]<<" ";
    // }cout<<"\n"<<ci;

    // int n;cin>>n;
    // mark a[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>a[i].name>>a[i].score;
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=i+1;j<=n;++j){
    //         if (a[i].score<a[j].score){
    //             mark t=a[i];a[i]=a[j],a[j]=t;
    //         }
    //     }
    // }
    // for (int i=1;i<=n;++i){
    //     cout<<a[i].name<<" "<<a[i].score<<endl;
    // }

    // int n,m;cin>>n>>m;com a[n+1];m=ceil(m*1.5);
    // for (int i=1;i<=n;++i){
    //     cin>>a[i].hao>>a[i].score;
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=i+1;j<=n;++j){
    //         if (a[i].score<a[j].score||a[i].score==a[j].score&&a[i].hao>a[j].hao){
    //             com t=a[i];a[i]=a[j],a[j]=t;
    //         }
    //     }
    // }
    // cout<<a[m].score<<" "<<m<<endl;
    // for (int i=1;i<=m;++i){
    //     cout<<a[i].hao<<" "<<a[i].score<<endl;
    // }

    // int n,m;cin>>n>>m;int a[n+1];int bank[n+1];memset(a,0,sizeof(a));memset(bank,0,sizeof(bank));
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=i;++j){
    //         for (int k=j+1;k<=i;++k){
    //             if (a[j]<a[k]){
    //                 int t=a[j];a[j]=a[k],a[k]=t;
    //             }
    //         }
    //     }
    //     for (int j=1;j<=i;++j){
    //         bank[j]=j;
    //         if (a[j]==a[j-1])bank[j]=bank[j-1];
    //     }
    //     int c=floor(i*m*0.01);
    //     if (c==0)c=1;
    //     cout<<a[bank[c]]<<" ";
    // }

    // int n;cin>>n;student s[n+1];int sum=0;
    // for (int i=1;i<=n;++i){
    //     cin>>s[i].name>>s[i].mox>>s[i].banji>>s[i].ganbu>>s[i].xibu>>s[i].num;
    //     s[i].z=jisuan(s[i].mox,s[i].banji,s[i].ganbu,s[i].xibu,s[i].num);
    //     sum+=s[i].z;
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=i+1;j<=n;++j){
    //         if (s[i].z<s[j].z){
    //             student t=s[i];s[i]=s[j],s[j]=t;
    //         }
    //     }
    // }
    // cout<<s[1].name<<endl;
    // cout<<s[1].z<<endl;
    // cout<<sum;

    // int n;cin>>n;int a[n+1];int b[n];memset(b,0,sizeof(b));
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // for (int i=1;i<=n-1;++i){
    //     if (abs(a[i]-a[i+1])<=n-1&&abs(a[i]-a[i+1])>=1){
    //         b[abs(a[i]-a[i+1])]++;
    //     }
    // }
    // bool p=true;
    // for (int i=1;i<=n-1;++i){
    //     if (b[i]==0)p=false;
    // }
    // if (p==true)cout<<"jelly";
    // else{
    //     cout<<"no jelly";
    // }

    // int n;cin>>n;string a[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // for (int i=1;i<=n;++i){
    //     bool p=true;int l=a[i].length();
    //     for (int j=0;j<l-2;++j){
    //         if ((a[i][j]=='2'&&a[i][j+1]!='0')
    //             ||(a[i][j]=='0'&&a[i][j+1]!='1')
    //             ||(a[i][j]=='1'&&a[i][j+1]!='9')
    //             ||(a[i][j]=='9'&&a[i][j+1]!='2')){p=false;break;}
    //     }
    //     if (p==true)cout<<"yes"<<endl;
    //     else cout<<"no"<<endl;
    // }

    int num;cin>>num;int l[num+1];int b=0;
    while(b<num){
        ++b;
        int n;cin>>n;int a[n+1];int sum=0;
        for (int i=1;i<=n;++i){
            cin>>a[i];
        }
        for (int i=1;i<=n;++i){
            for (int j=i+1;j<=n;++j){
                if (a[i]>a[j])sum++;
            }
        }
        l[b]=sum;
    }
    for (int i=1;i<=num;++i){
        cout<<l[i]<<endl;
    }
    return 0;
}