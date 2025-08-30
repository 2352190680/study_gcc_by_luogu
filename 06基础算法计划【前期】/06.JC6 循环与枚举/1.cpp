#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include <algorithm>
using namespace std;
int main(){
    // int n,m;cin>>n>>m;int a[m+1];int max=0;int p;
    // for (int i=1;i<=m;++i){
    //     cin>>a[i];
    // }
    // sort(a+1,a+m+1);
    // for (int i=m;i>=1;--i){
    //     if (i>m-n){
    //         if (a[i]*(m-i+1)>=max){max=a[i]*(m-i+1);p=a[i];}
    //     }
    //     else break;
    // }
    // cout<<p<<" "<<max;
    
    // int n,m;cin>>n>>m;int s1=0,s2=0;
    // for (int i=0;i<n;++i){
    //     for (int j=0;j<m;++j){
    //         for (int k=i+1;k<=n;++k){
    //             for (int l=j+1;l<=m;++l){
    //                 if (k-i==l-j)s1++;
    //                 else s2++;
    //             }
    //         }
    //     }
    // }
//另一种
    // for (int i=1;i<=n;++i){//长
    //     for (int j=1;j<=m;++j){//宽
    //         if (i==j)s1+=(n-i+1)*(m-j+1);
    //         else s2+=(n-i+1)*(m-j+1);
    //     }
    // }
    // cout<<s1<<" "<<s2;//更好

    // int n;cin>>n;string s[n+1];
    // string jp[]={ {'*','*','*','A','B','C','D','E'},
    //                     {'F','G','H','I','J','K','L','M'},
    //                     {'N','O','P','Q','R','S','T','U'},
    //                     {'V','W','X','Y','Z','*','*','*'}};
    // string th[]={ {'*','*','*','*','*','*','*','*'},
    //                     {'*','*','*','*','*','*','*','*'},
    //                     {'*','*','*','*','*','*','*','*'},
    //                     {'*','*','*','*','*','*','*','*'}};
    // for (int i=1;i<=n;++i){
    //     cin>>s[i];
    // }
    // string t;cin>>t;int l=t.length();string c[n+1];
    // for (int i=0;i<=n;++i){
    //     c[i]='0';
    // }
    // for (int i=1;i<=n;++i){
    //     bool p=true;
    //     for (int j=0;j<l;++j){
    //         if (s[i][j]!=t[j])p=false;
    //     }
    //     if (p==true){
    //         c[i]=s[i][l];
    //     }
    // }
    // for (int i=0;i<=3;++i){
    //     for (int j=0;j<=7;++j){
    //         for (int k=1;k<=n;++k){
    //             if (jp[i][j]==c[k][0]){
    //                 th[i][j]=c[k][0];
    //             }
    //         }
    //     }
    // }
    // for (int i=0;i<=3;++i){
    //     for (int j=0;j<=7;++j){
    //         cout<<th[i][j];
    //     }
    //     cout<<endl;
    // }



    int n,c;cin>>n>>c;int a[n+1][3],b[c+1][4];
    for (int i=1;i<=n;++i){
        cin>>a[i][2];a[i][1]=i;
    }
    for (int i=1;i<=c;++i){
        cin>>b[i][1];
        if (b[i][1]==1){
            cin>>b[i][2]>>b[i][3];
        }
        else if (b[i][1]==2){
            cin>>b[i][2];
        }
    }
    for (int i=1;i<=c;++i){
        if (b[i][1]==1){
            a[b[i][2]][2]=b[i][3];
        }
        else if (b[i][1]==2){
            int t[n+1][2];
            for (int j=1;j<=n;++j){
                t[j][2]=a[j][2];t[j][1]=a[j][1];
            }


            //一种解法      
            // for (int j=1;j<=n;++j){
            //     for (int k=j;k>=2;--k){
            //         if (t[k][2]<t[k-1][2]){
            //             // int d=t[k-1][2];
            //             // t[k-1][2]=t[k][2];
            //             // t[k][2]=d;
            //             // int dd=t[k-1][1];
            //             // t[k-1][1]=t[k][1];
            //             // t[k][1]=dd;
            //             swap(t[k][1],t[k-1][1]);
            //             swap(t[k][2],t[k-1][2]);
            //         }
            //     }
            // }


            //第二种解法
            for (int j=2;j<=n;++j){
                int e[3];e[2]=t[j][2];e[1]=t[j][1];
                int k=j-1;
                while (t[k][2]>e[2]){
                    t[k+1][2]=t[k][2];t[k+1][1]=t[k][1];k--;
                }
                t[k+1][2]=e[2];t[k+1][1]=e[1];
            }
            


            for (int j=1;j<=n;++j){
                if (t[j][1]==a[b[i][2]][1]){
                    cout<<j<<endl;break;
                }
            }
        }
    }


    return 0;
}