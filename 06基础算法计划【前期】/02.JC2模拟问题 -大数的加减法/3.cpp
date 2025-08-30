#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    // int n;cin>>n;string s;int a=n+1;
    // while(cin>>s){
    //     a--;
    //     if (a==n){
    //         if (s=="1")cout<<"x^"<<a;
    //         else if (s=="0")continue;
    //         else if (s=="-1")cout<<"-x^"<<a;
    //         else{
    //             cout<<s<<"x^"<<a;
    //         }
    //     }
    //     else if (a==0){
    //         if (s=="1")cout<<"+x";
    //         else if (s=="0")continue;
    //         else if (s=="-1")cout<<"-x";
    //         else if (s[0]=='-')cout<<s<<"x";
    //         else {
    //             cout<<"+"<<s;
    //         }
    //     }
    //     else{
    //         if (s=="1")cout<<"+x^"<<a;
    //         else if (s=="0")continue;
    //         else if (s=="-1")cout<<"-x^"<<a;
    //         else if (s[0]=='-')cout<<s<<"x^"<<a;
    //         else{
    //             cout<<"+"<<s<<"x^"<<a;
    //         }            
    //     }
    // }

    // int n;cin>>n;string a,b;cin>>a>>b;
    // int l1=a.length(),l2=b.length();
    // int x[l1+1],y[l2+1];memset(x,0,sizeof(x));memset(y,0,sizeof(y));
    // for (int i=1;i<=l1;++i){
    //     x[i]=a[l1-i]-'0';
    // }
    // for (int i=1;i<=l2;++i){
    //     y[i]=b[l2-i]-'0';
    // }
    // int l=max(l1,l2)+1;int c[l+1];memset(c,0,sizeof(c));
    // for (int i=1;i<=l-1;++i){
    //     c[i]+=x[i]+y[i];
    //     c[i+1]+=c[i]/n;
    //     c[i]%=n;
    // }
    // if (c[l]==0)l--;
    // for (int i=l;i>=1;--i){
    //     cout<<c[i];
    // }

    // int n,m;cin>>n>>m;int faxiang[n+1];string name[n+1];int order[m+1][3];
    // for (int i=1;i<=n;++i){
    //     cin>>faxiang[i]>>name[i];
    // }
    // for (int i=1;i<=m;++i){
    //     for (int j=1;j<=2;++j){
    //         cin>>order[i][j];
    //     }
    // }
    // int space=1;//1->n
    // //总结：00顺时针变大；11顺时针变大；01逆时针变小//相同顺大，不同逆小
    // for (int i=1;i<=m;++i){
    //     if (order[i][1]==faxiang[space]){
    //         if (space-order[i][2]<1){
    //             space=(space-order[i][2]+n);
    //         }else{
    //             space-=order[i][2];
    //         }
    //     }else{
    //         if (space+order[i][2]>n){
    //             space=(space+order[i][2])%n;
    //         }else{
    //             space+=order[i][2];
    //         }
    //     }
    // }
    // cout<<name[space];

    char a[11][11];int xt,yt,xc,yc,dt=8,dc=8;
    //xt,yt:人TOM坐标；xc,yc:牛cow坐标；dt,dc:方向8246上下左右
    for (int i=1;i<=10;++i){
        for (int j=1;j<=10;++j){
            cin>>a[i][j];
            if (a[i][j]=='F')xt=i,yt=j;
            if (a[i][j]=='C')xc=i,yc=j; 
        }
    }
    int min=1;
    while (min<250){
    //人
        //上
        if (dt==8){
            if(a[xt-1][yt]=='*'||xt==1){
                dt=6;
            }else{
                xt--;
            }
        }
        //下
        else if (dt==2){
            if(a[xt+1][yt]=='*'||xt==10){
                dt=4;
            }else{
                xt++;
            }
        }
        //左
        else if (dt==4){
            if(a[xt][yt-1]=='*'||yt==1){
                dt=8;
            }
            else{
                yt--;
            }            
        }
        //右
        else if (dt==6){
            if(a[xt][yt+1]=='*'||yt==10){
                dt=2;
            }else{
                yt++;
            }            
        }
    //牛
        //上
        if (dc==8){
            if(a[xc-1][yc]=='*'||xc==1){
                dc=6;
            }else{
                xc--;
            }
        }
        //下
        else if (dc==2){
            if(a[xc+1][yc]=='*'||xc==10){
                dc=4;
            }else{
                xc++;
            }
        }
        //左
        else if (dc==4){
            if(a[xc][yc-1]=='*'||yc==1){
                dc=8;
            }else{
                yc--;
            }            
        }
        //右
        else if (dc==6){
            if(a[xc][yc+1]=='*'||yc==10){
                dc=2;
            }else{
                yc++;
            }            
        }
        if (xt==xc&&yt==yc){
            cout<<min;return 0;
        }
        min++;
    }
    cout<<0;
    return 0;
}