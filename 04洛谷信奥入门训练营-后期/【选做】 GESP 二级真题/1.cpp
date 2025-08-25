#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
    // int x,y,z,n,m,sum=0;cin>>x>>y>>z>>n>>m;
    // for (int i=0;i<=m;++i){
    //     int mm=m;int nn=n-i*x;mm-=i;
    //     if (mm>=0&&nn>=0){
    //         for (int j=0;j<=mm;j++){
    //             int nnn=nn-j*y;int mmm=mm-j;
    //             if (nnn==mmm*(1.0/z)){sum++;}
    //         }
    //     }
    // }
    // cout<<sum;

    // int n;cin>>n;char num='A';
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=i;++j){
    //         if (num>'Z'){num-=26;cout<<char(num);}
    //         else{
    //            cout<<char(num); 
    //         }
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // int n;cin>>n;int l[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=n;++i){
    //     int wei=0;int ti=l[i];int pd=ti;
    //     while (ti!=0){
    //         wei++;ti=ti/10;
    //     }
    //         int sum=0;int ll[wei+1];
    //         for (int j=1;j<=wei;++j){
    //             ll[j]=l[i]%10;l[i]=l[i]/10;
    //         }
    //         for (int j=1;j<=wei;++j){
    //             sum+=pow(ll[j],wei);
    //         }
    //         if (sum==pd)cout<<"T"<<endl;
    //         else cout<<"F"<<endl;
    //     }

//     int n,ci=0;cin>>n;int l[4];
//     while (n!=495){
//     for (int i=1;i<=3;++i){
//         l[i]=n%10;n=n/10;
//     }
//     for (int i=1;i<=2;++i){
//         for (int j=i+1;j<=3;++j){
//             if (l[i]<l[j]){
//                 int ti=l[i];l[i]=l[j];l[j]=ti;
//             }
//         }
//     }int max=100*l[1]+10*l[2]+l[3];
//     for (int i=1;i<=2;++i){
//         for (int j=i+1;j<=3;++j){
//             if (l[i]>l[j]){
//                 int ti=l[i];l[i]=l[j];l[j]=ti;
//             }
//         }
//     }int min=100*l[1]+10*l[2]+l[3];    
//     n=max-min;
//     ci++;
// }cout<<ci;

    // int n;cin>>n;int l[n+1][n+1];memset(l,0,sizeof(l));
    // for (int i=1;i<=n;++i){
    //     l[i][i]=1;l[i][n+1-i]=1;
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=n;++j){
    //         if (l[i][j]==0)cout<<"-";
    //         else if (l[i][j]==1)cout<<"+";
    //     }
    //     cout<<endl;
    // }

    int a,b,m,n,sum=0;cin>>a>>b>>m>>n;int l[n+1];l[1]=a;l[2]=b;
    for (int i=3;i<=n;++i){
        l[i]=l[i-1]+l[i-2];
    }
    for (int i=1;i<=n;++i){
        sum+=l[i];
        if (l[i]>=m)break;
    }
    cout<<sum;
    return 0;
}