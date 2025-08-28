#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    // string A,B;cin>>A>>B;int l1=A.length(),l2=B.length();int a[l1+1],b[l2+1];int c[4001];memset(c,0,sizeof(c));
    // for (int i=1;i<=l1;++i){
    //     a[i]=A[l1-i]-'0';
    // }
    // for (int i=1;i<=l2;++i){
    //     b[i]=B[l2-i]-'0';
    // }
    // for (int i=1;i<=l1;++i){
    //     for (int j=1;j<=l2;++j){
    //         c[i+j-1]+=a[i]*b[j];
    //     }
    // }
    // int l=l1+l2;
    // for (int i=1;i<=l;++i){
    //     c[i+1]+=c[i]/10;
    //     c[i]%=10;
    // }
    // while (c[l]==0){
    //     l--;
    // }
    // for (int i=max(1,l);i>=1;--i){
    //     cout<<c[i];
    // }

    // string A;cin>>A;int l1=A.length();int a[l1+1];int c[4001];memset(c,0,sizeof(c));
    // int b;cin>>b;
    // for (int i=1;i<=l1;++i){
    //     a[i]=A[i-1]-'0';
    // }
    // for (int i=1;i<=l1;++i){
    //     a[i+1]+=a[i]%b*10;a[i]=a[i]/b;
    // }
    // for (int i=1;i<=l1;++i){
    //     if (a[i]==0)continue;
    //     else{
    //         cout<<a[i];
    //     }
    // }

    // int n;cin>>n;string a[n+2];a[1]='1';int c[120];memset(c,0,sizeof(c));c[1]=1;int max=0;
    // if (n==1){cout<<1;return 0;}
    // else {
    //     for (int i=2;i<=n;++i){
    //         //string->int
    //         int l=a[i-1].length();int b[l+3];memset(b,0,sizeof(b));
    //         for (int j=1;j<=l;++j){
    //             b[j]=a[i-1][j-1]-'0';
    //         }
    //         //int 实现乘法
    //         for (int j=1;j<=l;++j){
    //             b[j]=i*b[j];
    //         }
    //         int ll=l+2;
    //         for (int j=1;j<=ll;++j){
    //             b[j+1]+=b[j]/10;
    //             b[j]%=10;
    //         }
    //         while (b[ll]==0)ll--;
    //         //相加
    //         for (int j=1;j<=ll;++j){
    //             c[j]+=b[j];
    //             c[j+1]+=c[j]/10;
    //             c[j]%=10;
    //         }
    //         max=ll;
    //         if (c[ll+1]==1)max++;//确定位数
    //         //int->string
    //         a[i].resize(max);
    //         for (int j=0;j<=max-1;++j){
    //             a[i][j]=b[j+1]+'0';//下个a[i]字符串准备
    //         }
    //     }
    //     for (int i=max;i>=1;--i){
    //         cout<<c[i];
    //     }
    // } 
    
    /*
    int n;cin>>n;string s="2";int ll;int a[n+1];memset(a,0,sizeof(a));
    if (n==1){
        cout<<1;
    }
    else {
        for (int i=2;i<=n;++i){
            int l=s.length();
            //string->int
            // for (int j=1;j<=l;++j){
            //     a[j]=s[j-1]-'0';
            // }//见下
            for (int j=1;j<=l;++j){
                a[j]=s[l-j]-'0';
            }//正确做法
            for (int j=1;j<=l;++j){
                a[j]*=2;
            }
            ll=l+1;
            for (int j=1;j<ll;++j){
                a[j+1]+=a[j]/10;
                a[j]%=10;
            }//奇妙的这里(本题特性喵)，无需倒位也可实现倒序乘法(原因，刚开始数字小于十，在大于十的瞬间完成了带颠倒，故而后续的字符串均为倒序，小于十无需考虑)
            if (a[ll]==0)ll--;
            //int->string
            s.resize(ll);
            // for (int j=0;j<ll;++j){
            //     s[j]=a[j+1]+'0';
            // }//见上
            for (int j=0;j<ll;++j){
                s[j]=a[ll-j]+'0';
            }//正确做法，确保字符串始终为正，而读入数组的为反方向
        }
        for (int j=ll;j>1;--j){
            cout<<a[j];
        }cout<<a[1]-1;
    }*/

    // string a;cin>>a;int l[11];int len=a.length();int sum=0;
    // for (int j=1,i=0;i<len;++i){
    //     if (a[i]!='-')l[j++]=a[i]-'0';
    // }
    // for (int i=1;i<=9;++i){
    //     sum+=l[i]*i;
    // }
    // if (sum%11==l[10]){cout<<"right";}
    // else{
    //     for (int i=0;i<len-1;++i){
    //         cout<<a[i];
    //     }
    //     cout<<sum%11;
    // }

    int n,m;cin>>n>>m;int l[m+1][5];int a[n+1][n+1];
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            a[i][j]=(i-1)*n+j;
        }
    }
    for (int i=1;i<=m;++i){
        for (int j=1;j<=4;++j){
            cin>>l[i][j];
        }
    }
    for (int i=1;i<=m;++i){
        if (l[i][4]==0){
            int la[n+1][n+1];
            for (int j=l[i][1]-l[i][3];j<=l[i][1]+l[i][3];++j){
                for (int k=l[i][2]-l[i][3];k<=l[i][2]+l[i][3];++k){
                    la[j][k]=a[l[i][2]-l[i][3]+l[i][2]+l[i][3]-k][j];
                }
            }
            for (int j=l[i][1]-l[i][3];j<=l[i][1]+l[i][3];++j){
                for (int k=l[i][2]-l[i][3];k<=l[i][2]+l[i][3];++k){
                    a[j][k]=la[j][k];
                }
            }
        }
        else if (l[i][4]==1){
            int la[n+1][n+1];
            for (int j=l[i][1]-l[i][3];j<=l[i][1]+l[i][3];++j){
                for (int k=l[i][2]-l[i][3];k<=l[i][2]+l[i][3];++k){
                    la[j][k]=a[k][l[i][1]+l[i][3]-j+l[i][1]-l[i][3]];
                }
            }
            for (int j=l[i][1]-l[i][3];j<=l[i][1]+l[i][3];++j){
                for (int k=l[i][2]-l[i][3];k<=l[i][2]+l[i][3];++k){
                    a[j][k]=la[j][k];
                }
            }
        }            
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
