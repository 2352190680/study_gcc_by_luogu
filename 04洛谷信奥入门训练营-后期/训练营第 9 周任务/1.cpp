#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int x,y,n;cin>>x>>y>>n;int l[x+1][y+1];int cz[n+1][4];
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i<=n;++i){
    //     cin>>cz[i][1];
    //     if (cz[i][1]==1||cz[i][1]==2){cin>>cz[i][2]>>cz[i][3];}
    //     else if (cz[i][1]==3||cz[i][1]==4){cin>>cz[i][2];}
    // }
    // for (int i=1;i<=n;++i){
    //     if (cz[i][1]==1){
    //         for (int j=1;j<=y;++j){
    //             int ti=l[cz[i][2]][j];l[cz[i][2]][j]=l[cz[i][3]][j];l[cz[i][3]][j]=ti;
    //         }
    //     }
    //     else if (cz[i][1]==2){
    //         for (int j=1;j<=x;++j){
    //             int ti=l[j][cz[i][2]];l[j][cz[i][2]]=l[j][cz[i][3]];l[j][cz[i][3]]=ti;
    //         }
    //     }
    //     else if (cz[i][1]==3){
    //         int ll[y+1];
    //         for (int j=1;j<=y;++j){
    //             ll[j]=l[cz[i][2]][y-j+1];
    //         }
    //         for (int j=1;j<=y;++j){
    //             l[cz[i][2]][j]=ll[j];
    //         }
    //     }
    //     else if (cz[i][1]==4){
    //         int ll[x+1];
    //         for (int j=1;j<=x;++j){
    //             ll[j]=l[x+1-j][cz[i][2]];
    //         }
    //         for (int j=1;j<=y;++j){
    //             l[j][cz[i][2]]=ll[j];
    //         }
    //     }
    // }
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         cout<<l[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //# week9-[二维数组] 五子棋
    // int x,y;cin>>x>>y;char l[x+1][y+1];int sum1=0,sum2=0;
    // for (int i=0;i<x;++i){
    //     for (int j=0;j<y;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=0;i<x;++i){
    //     for (int j=0;j<y;++j){
    //         if (l[i][j]=='O'&&l[i+1][j]=='O'&&l[i+2][j]=='O'&&l[i+3][j]=='O'&&l[i+4][j]=='O'||l[i][j+1]=='O'&&l[i][j]=='O'&&l[i][j+4]=='O'&&l[i][j+2]=='O'&&l[i][j+3]=='O'||l[i+1][j+1]=='O'&&l[i][j]=='O'&&l[i+4][j+4]=='O'&&l[i+2][j+2]=='O'&&l[i+3][j+3]=='O'||l[i-1][j-1]=='O'&&l[i][j]=='O'&&l[i-4][j-4]=='O'&&l[i-2][j-2]=='O'&&l[i-3][j-3]=='O'){
    //             sum1++;
    //         }
    //         if (l[i][j]=='X'&&l[i+1][j]=='X'&&l[i+2][j]=='X'&&l[i+3][j]=='X'&&l[i+4][j]=='X'||l[i][j+1]=='X'&&l[i][j]=='X'&&l[i][j+4]=='X'&&l[i][j+2]=='X'&&l[i][j+3]=='X'||l[i+1][j+1]=='X'&&l[i][j]=='X'&&l[i+4][j+4]=='X'&&l[i+2][j+2]=='X'&&l[i+3][j+3]=='X'||l[i-1][j-1]=='X'&&l[i][j]=='X'&&l[i-4][j-4]=='X'&&l[i-2][j-2]=='X'&&l[i-3][j-3]=='X'){
    //             sum2++;
    //         }
    //     }
    // }
    // cout<<sum1<<" "<<sum2;

    // int n,x;cin>>n>>x;int l[n+1][3];int sum=0,p=0,ti=0;;
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=2;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=i+1;j<=n;++j){
    //         if (l[i][1]>l[j][1]||l[i][1]==l[j][1]&&l[i][2]>l[j][2]){
    //             int a=l[i][1],b=l[i][2];l[i][1]=l[j][1];l[i][2]=l[j][2];l[j][1]=a,l[j][2]=b;
    //         }
    //     }
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=2;++j){
    //         cout<<l[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for (int i=1;i<=n;++i){
    //     sum+=l[i][1];x-=l[i][1];
    //     if (x<=0)break;
    //     else {p+=sum+l[i][2]*20;ti++;}
    // }
    // cout<<ti<<" "<<p;

    //# week9-[模拟] 志愿分流
    /*
    int n,num;cin>>n>>num;int zy[num+1];int zyed[num+1];memset(zyed,0,sizeof(zyed));int xz[n+1][3];double mark[n+1]; int xzed[n+1][3];  //xzed[][2]选择专业，mark[][1]编号,zyed[]指[]已经录了[]个，zy[]为该专业只能录[]个，xz[]为选择报名的志愿
    for (int i=1;i<=num;++i)cin>>zy[i];
    for (int i=1;i<=n;++i){
        for (int j=1;j<=2;++j){
            cin>>xz[i][j];
        }
    }
    for (int i=1;i<=n;++i){cin>>mark[i];xzed[i][1]=i;}  //录入和！！！编号！！！
    //按分数排序
    for (int i=1;i<=n;++i){
        for (int j=i+1;j<=n;++j){
            if (mark[i]<mark[j]){
                double ma=mark[i];int xza=xz[i][1],xzb=xz[i][2];mark[i]=mark[j],xz[i][1]=xz[j][1],xz[i][2]=xz[j][2];mark[j]=ma,xz[j][1]=xza,xz[j][2]=xzb;int xzeda=xzed[i][1];xzed[i][1]=xzed[j][1];xzed[j][1]=xzeda;   //互换
            }
        }
    }
    //按分数录取中
    for (int i=1;i<=n;++i){
        if (zyed[xz[i][1]]<zy[xz[i][1]]){zyed[xz[i][1]]++;xzed[i][2]=xz[i][1];}  //志愿1
        else if (zyed[xz[i][1]]=zy[xz[i][1]]){
            if (zyed[xz[i][2]]<zy[xz[i][2]]){zyed[xz[i][2]]++;xzed[i][2]=xz[i][2];} //志愿2
            else{     //自动分
                for (int j=1;j<=num;++j){
                    if (zyed[j]<zy[j]){zyed[j]++;xzed[i][2]=j;break;}
                }
            }
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            if (xzed[j][1]==i){cout<<xzed[j][2]<<" ";break;}
        }
    }
    */

    // int n,q;cin>>n>>q;int l[n+1];int ll[q+1][3];
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=q;++i){
    //     for (int j=1;j<=2;++j){
    //         cin>>ll[i][j];
    //     }
    // }
    // for (int i=1;i<=q;++i){
    //     int sum=0;
    //     for (int j=1;j<=n;++j){
    //         if (l[j]>=l[ll[i][1]]&&ll[i][2]>=l[j]&&ll[i][1]!=j)sum++;
    //     }
    //     cout<<sum<<endl;
    // }

    int n;cin>>n;char s[1002];cin>>s;int l[n+1][3];
    for (int i=1;i<=n;++i){
        for (int j=1;j<=2;++j){
            cin>>l[i][j];
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=l[i][1]-1;j<=l[i][2]-1;++j){
            s[j]=s[j]+1;
        }
    }
    for (int i=0;i<=strlen(s)-1;++i){
        cout<<s[i];
    }




    return 0;
}