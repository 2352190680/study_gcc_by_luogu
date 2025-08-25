#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    //const int a=1e4;   //加上const意为这定义为常量，不可更改

    // int n,b;
    // cin>>n>>b;int l[205];memset(l,0,sizeof(l));
    // for(int c=1;c<=n;++c){
    //     cin>>l[c];}
    // for (int c=1;c<=b;++c){
    //     int e;cin>>e;
    //     if (e==1){
    //         int f,g;cin>>f>>g;
    //         for (int h=n;h>=f+1;--h){l[h+1]=l[h];}
    //         l[f+1]=g;
    //         n++;
    //     }
    //     else if (e==2){
    //         int f;cin>>f;
    //         for (int h=f;h<n;++h){l[h]=l[h+1];}
    //         n--;
    //     }
    //     for (int h=1;h<=n;++h){cout<<l[h]<<" ";}
    //     cout<<endl;
    // }

    // int x,y,sum=0;
    // cin>>x>>y;int z[x+1];
    // for (int i=1;i<=x;++i){
    //     cin>>z[i];
    // }
    // for (int a=1;a<=x;++a){
    //     if (z[a]<=y)sum+=z[a];
    // }
    // cout<<sum;

    // int a,b,c,e;cin>>a>>b>>c;e=c-b+1;int l[a+1],d[e];
    // for (int i=1;i<=a;++i){
    // cin>>l[i];
    // }
    // int x=1;
    // for (int i=c;i>=b;--i){
    //     d[x]=l[i];++x;
    // }
    // x=1;
    // for (int i=b;i<=c;++i){
    //     l[i]=d[x];++x;
    // }
    // for (int i=1;i<=a;++i){
    //     cout<<l[i]<<" ";
    // }

    // int a,b=0;cin>>a;int l[a+1];memset(l,0,sizeof(l));
    // for (int i=1;i<=a;++i){
    //     cin>>l[i];
    // }
    // for (int i=2;i<=a;++i){
    //     for (int j=1;j<=i-1;++j){
    //         for (int k=j+1;k<=i;++k){
    //             if (abs(l[j]-l[k])>=b){b=abs(l[j]-l[k]);}
    //         }
    //     }
    //     cout<<b<<" ";}    

    // int a,b,sum=0;
    // cin>>a>>b;a++;int l[a];memset(l,0,sizeof(l));
    // for (int i=1;i<=b;++i){
    //     int x,y;cin>>x>>y;
    //     for (int i=x;i<=y;++i){
    //         l[i]=1;
    //     }
    // }
    // for (int i=1;i<=a;++i){
    //     if (l[i]==0)sum++;
    // }
    // cout<<sum;

    // int n,a,s=1000;cin>>n>>a;int l[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=n-a+1;++i){
    //     int sum=0;
    //     for (int j=i;j<=i+a-1;++j){
    //         sum+=l[j];
    //     }
    //     if (sum<=s)s=sum;
    // }
    // cout<<s;

    int n;cin>>n;int l[n+1];memset(l,0,sizeof(l));//偶数为开启状态，赋值列表1-n号元素都为0
    for (int i=1;i<=n;++i){   //外层循环，1-n作为因数
        for (int j=1;j<=n;++j){    //内层循环，判断序号1-n的是否以i为因数
            if (j%i==0)l[j]++;}   //满足条件即加1
    }
    for (int i=1;i<=n;++i){
        if(l[i]%2==1)cout<<i<<" ";    //易知，奇数时为关
    }

    // int x,y,sum=0;cin>>x>>y;int l[x+1][y+1];
    // for (int j=1;j<=x;++j){
    //     for (int k=1;k<=y;++k){
    //         int a;cin>>a;
    //         l[j][k]=a;
    //     }
    // }
    // for (int j=1;j<=y;++j){
    //     sum=l[1][j]+l[x][j]+sum;
    // }
    // for (int j=1;j<=x;++j){
    //     sum=l[j][1]+l[j][y]+sum;
    // }
    // sum=sum-l[1][1]-l[x][y]-l[1][y]-l[x][1];
    // cout<<sum;
    
    // int n,s=0;cin>>n;int l[n+1];
    // for(int i=1;i<=n;++i){
    //     int b;cin>>b;
    //     l[i]=b;}
    // for (int i=1;i<=n;++i){
    //     int sum=1;
    //     for (int j=i+1;j<=n;++j){
    //         if (l[i]==l[j])sum++;
    //     }
    //     if (sum>=s)s=sum;
    // }
    // cout<<s;

    /*     int m,n,max=0,profit=0,price=0;cin>>m>>n;int l[n+1];
    for (int i=1;i<=n;++i){
    cin>>l[i];if (l[i]>=max)max=l[i];
    }
    for (int i=1;i<=max;++i){
        int num=0;
        for (int j=1;j<=n;++j){
            if (l[j]>=i){num++;}}
        if (num*i>=profit){
            if (num<=m){profit=num*i;price=i;}
            else {profit=m*i;price=i;}
        }
    }
    cout<<price<<" "<<profit;          */

    // int x,y;cin>>x>>y;int l1[x+1][y+1],l2[x+1][y+1];double sum=0;
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         cin>>l1[i][j];
    //     }
    // }
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         cin>>l2[i][j];
    //     }
    // }
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         if (l1[i][j]==l2[i][j]){sum++;}
    //     }
    // }
    // printf("%.2lf",sum/(x*y)*100);

//     int p[8],n;cin>>n;memset(p,0,sizeof(p));
//     int mark[8],page[n+1][8];
//     for (int i=1;i<=7;++i){
//         cin>>mark[i];
//     }
//     for (int i=1;i<=n;++i){
//         for (int j=1;j<=7;++j){
//             cin>>page[i][j];
//         }
//     }
//     for (int i=1;i<=n;++i){  //张数
//         for (int k=1;k<=7;++k){   //奖次换算
//             int sum=0;
//             for (int j=1;j<=7;++j){   //遍历此张所有号码
//                 for (int m=1;m<=7;++m){  //遍历中奖号码
//                     if (page[i][j]==mark[m]){  //判断几个相同号码
//                         sum++;}
//             }
//         }
//             if (sum==8-k)p[k]++;  //奖次换算
//     }
// }
//     for (int i=1;i<=7;++i){
//         cout<<p[i]<<" ";
//     }
    return 0;
}
