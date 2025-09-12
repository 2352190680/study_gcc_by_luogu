#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
const int MAXN = 1005;
int a[MAXN][MAXN],b[MAXN][MAXN];double zqd[MAXN];int ci=0;int cc[MAXN*MAXN][2];
int idx[MAXN]; 
int main(){
    int m,n;cin>>m>>n;
    for (int i=1;i<=n;++i)
        for (int j=1;j<=m;++j)
            cin >> a[i][j];
    for (int i=1;i<=n;++i)
        for (int j=1;j<=m;++j)
            cin >> b[i][j];    
    for (int i=1;i<=n;++i){
        idx[i] = i;
        double sum1=0;double c1=0;double sum2=0;double c2=0;
        for (int j=1;j<=m;++j){
            sum1+=a[i][j];
        }
        sum1/=m;
        for (int j=1;j<=m;++j){
            c1+=(a[i][j]-sum1)*(a[i][j]-sum1);
        }
        c1/=m;
        for (int j=1;j<=m;++j){
            sum2+=b[i][j];
        }
        sum2/=m;
        for (int j=1;j<=m;++j){
            c2+=(b[i][j]-sum2)*(b[i][j]-sum2);
        }
        c2/=m;
        zqd[i]=c1+c2;
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n-1;++j){
            if (zqd[j]>=zqd[j+1]){
                ci++;
                cc[ci][0]=j;cc[ci][1]=j+1;
                swap(zqd[j],zqd[j+1]);
                swap(idx[j], idx[j+1]);
            }
        }
    }
    cout<<ci<<endl;
    for (int i=1;i<=ci;++i){
        cout<<cc[i][0]<<" "<<cc[i][1]<<endl;
    }
    return 0;
}