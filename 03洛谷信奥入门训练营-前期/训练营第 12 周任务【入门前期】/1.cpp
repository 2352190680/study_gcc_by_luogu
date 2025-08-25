#include<iostream>
#include<cstring>
using namespace std;
struct dingdan{
    int a,b;
};
int main(){
    // int a[4];bool pd=false;
    // for (int i=1;i<=3;++i){
    //     cin>>a[i];
    // }
    // for (int i=1;i<=3;++i){
    //     if (a[1]%a[i]==0&&a[2]%a[i]==0&&a[3]%a[i]==0)pd=true;
    // }
    // if (pd==true)cout<<"yes";
    // else cout<<"no";

    // int n;cin>>n;
    // if (n%7==0){
    //     int x=n/7;int l[x+1][8];
    //     for (int i=1;i<=x;++i){
    //         for (int j=1;j<=7;++j){
    //             cin>>l[i][j];
    //         }
    //     }
    //     for (int i=1;i<=x;++i){
    //         int sum=0;
    //         for (int j=1;j<=7;++j){
    //             sum+=l[i][j];
    //         }
    //         cout<<sum<<" ";
    //     }        
    // }

    int n;cin>>n;dingdan l[n+1];int ll[4];memset(ll,0,sizeof(ll));
    for (int i=1;i<=n;++i){
        cin>>l[i].a>>l[i].b;
    } 
    for (int i=1;i<=n;++i){
        ll[l[i].a]+=l[i].b;
    } 
    int xu=ll[1];
    for (int i=ll[1];i<=100;++i){
        int cun=i;cun-=xu;cun+=i;
        if (cun>=ll[2]){
            cun-=xu;cun+=i;
            if (cun>=ll[3]){
                cout<<i;return 0;
            }
        }
    }
    return 0;
}