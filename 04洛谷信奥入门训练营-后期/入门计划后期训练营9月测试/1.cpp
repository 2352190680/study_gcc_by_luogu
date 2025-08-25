#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // char a[4][10];
    // for (int i=1;i<=3;++i){
    //     cin>>a[i];
    // }
    // for (int i=1;i<=3;++i){
    //     if (a[i][0]=='2'){cout<<"no";return 0;}
    // }
    // if (a[1][0]+1==a[2][0]&&a[2][0]+1==a[3][0]||a[1][0]=='9'&&a[2][0]=='1'&&a[2][1]=='0'&&a[3][0]=='J'||a[1][0]=='J'&&a[2][0]=='Q'&&a[3][0]=='K'||a[1][0]=='Q'&&a[2][0]=='K'&&a[3][0]=='A'||a[1][0]=='1'&&a[1][1]=='0'&&a[2][0]=='J'&&a[3][0]=='Q'||a[1][0]=='8'&&a[2][0]=='9'&&a[3][0]=='1'&&a[3][1]=='0'||a[1][0]=='Q'&&a[2][0]=='K'&&a[3][0]=='A'){
    //     cout<<"yes";
    // }else cout<<"no";

    // int a,b;cin>>a>>b;
    // for (int i=1;i<=b;++i){
    //     for (int j=1;j<=b-i;++j){
    //         cout<<" ";
    //     }
    //     for (int j=1;j<=a+i-1;++j){
    //         cout<<1<<" ";
    //     }
    //     cout<<endl;
    // }

    int n,m,k;cin>>n>>m>>k;int l[k+1];int sum=k;
    for (int i=1;i<=k;++i){
        cin>>l[i];
    }
    for (int i=1;i<=k-1;++i){
            if ((l[i+1]-l[i])>m+1){
                sum+=(l[i+1]-l[i]-1)/(m+1);
            }
    }
    sum+=(l[1]-1)/(m+1);
    sum+=(n-l[k])/(m+1);
    cout<<sum;
    return 0;
}