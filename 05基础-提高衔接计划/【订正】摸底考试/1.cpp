#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    // int n,c;cin>>n>>c;string s;cin>>s;char l[c+1][5];
    // for (int i=1;i<=c;++i){
    //     cin>>l[i][1]>>l[i][2]>>l[i][3];
    // }
    // for (int i=1;i<=c;++i){
    //     if (l[i][1]=='1')s[int(l[i][2]-'0')-1]=l[i][3];
    //     else if (l[i][1]=='2'){
    //         for (int j=int(l[i][2]-'0')-1;j<=int(l[i][3]-'0')-1;++j){
    //             cout<<s[j];
    //         }
    //         cout<<endl;
    //     }
    // }
    /*小巧思：含有字母类型设为string /char形式时，要提取相应数字有两种做法
    1.int(char[][]-'0')即可等于对应数字了
    2.atoi(s.substr(a,b).c_str())   切割，将s从a开始切出长度为b的字符串//有维度的时候
    3.当然，若没有维度，可直接用atoi(s)//缺陷：必须保证s全为数字，故而判断是否为数字(isdigit(s))或者使用切割方法犹为重要
    */



    //不会，交给未来的自己(有思路，但没有能力)
    /*int x,y,k;cin>>x>>y>>k;char l[x+1][y+1];int summax=0;int r[x*y+1][3];memset(r,0,sizeof(r));//记录为？的坐标
    for (int i=0;i<=x;++i){
        for (int j=0;j<=y;++j){
            cin>>l[i][j];
        }
    }
    int a=1;//辅助记录为第几个坐标
    for (int i=0;i<=x;++i){
        for (int j=0;j<=y;++j){
            if(l[i][j]=='?'){
                r[1][1]=i;r[1][2]=j;a++;
            }
        }
    }
    //ok,知道有a个可以换，a个里面选k个
    int sum1=1,sum2=1,sum3=1;
    for (int i=1;i<=a;++i){
        sum1=sum1*i;
    }
    for (int i=1;i<=k;++i){
        sum2=sum2*i;
    }
    for (int i=1;i<=(a-k);++i){
        sum3=sum3*i;
    }
    int kind=sum1/(sum2*sum3);
    int set[kind+1][k+1];




    //修复为大体
    for (int i=1;i<=kind;++i){
        for (int j=1;j<=k;++j){
            set[i][j]='1';
        }
        int sum=0;
        int xingdong=0;
        for (int j=1;j<=x+y;++j){
            for (int z=1;z<=2;++z){

            }
        }
    }*/

    // int n,q;cin>>n>>q;int l[n+1];int a[q+1][3];
    // for (int i=1;i<=n;++i){
    //     l[i]=1;
    // }
    // for (int i=1;i<=q;++i){
    //     for (int j=1;j<=2;++j){
    //         cin>>a[i][j];
    //     }
    // }
    // int jishu=0;
    // for (int i=1;i<=q;++i){
    //     int num=0;
    //     for (int j=1;j<=n;++j){
    //         if (l[j]!=0)num++;
    //     }
    //     if (a[i][1]>num)a[i][1]=a[i][1]%num;
    //     int ge=0,weizhi=jishu;
    //     while (ge<a[i][1]){
    //         weizhi++;
    //         if (weizhi>n)weizhi=weizhi-n;
    //         if (l[weizhi]!=0)ge++;
    //     }
    //     jishu=weizhi;
    //     if (a[i][2]==1)l[jishu]++;
    //     else if (a[i][2]==-1)l[jishu]--;
    //     if (l[jishu]==0)cout<<jishu<<" ";
    // }


    
    // int n,q;cin>>n>>q;int l[n][4];int a[q+1][5];
    // for (int i=1;i<n;++i){
    //     cin>>l[i][1]>>l[i][2]>>l[i][3];
    // }
    // for (int i=1;i<=q;++i){
    //     cin>>a[i][1];
    //     if (a[i][1]==1){
    //         cin>>a[i][2]>>a[i][3]>>a[i][4];
    //     }
    //     else if (a[i][1]==2){
    //         cin>>a[i][2];
    //     }
    // }
    // for (int i=1;i<=q;++i){
    //     if (a[i][1]==1){
    //         for (int j=1;j<n;++j){
    //             if (a[i][2]==l[j][1]&&a[i][3]==l[j][2]){
    //                 l[j][3]^=a[i][4];
    //             }
    //         }
    //     }
    //     else if (a[i][1]==2){
    //         int b;
    //         for (int j=1;j<n;++j){
    //             if (a[i][2]==l[j][1]){
    //                 b=l[j][3];break;
    //             }
    //         }
    //         for (int j=2;j<n;++j){
    //             if (a[i][2]==l[j][1]){
    //                 b=b^l[j][3];
    //             }
    //              else if (a[i][2]==l[j][2]){
    //                  b=b^l[j][3];
    //              }
    //         }
    //         cout<<b<<endl;
    //     }
    // }


    return 0;
}