#include <iostream>
using namespace std;
// int f(int x){
//     if (x==1||x==2){return 1;}
//     return f(x-2)+f(x-1);
// }
int akm(int x,int y){
    if (x==0){return y+1;}
    if (x>0&&y==0){return akm(x-1,1);}
    return akm(x-1,akm(x,y-1));
    }
// int x(int q,int w,int e,int r){
//     return q*w+e*r;
// }
int main(){
    // int n;cin>>n;
    // cout<<f(n);

    // int n;cin>>n;int a[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // int t=a[1];
    // for (int j=1;j<=n-1;++j){
    //     a[j]=a[j+1];
    // }
    // a[n]=t;
    // for (int i=1;i<=n;++i){
    //     cout<<a[i]<<" ";
    // }

    // int x,y;cin>>x>>y;int l[x+1][y+1],ll[y+1][x+1];
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         ll[j][i]=l[i][j];
    //     }
    // }
    // for (int i=1;i<=y;++i){
    //     for (int j=1;j<=x;++j){
    //         cout<<ll[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int a,b;cin>>a>>b;
    cout<<akm(a,b);
    return 0;

    // int a,b,c,d;cin>>a>>b>>c>>d;
    // cout<<x(a,b,c,d);
}
