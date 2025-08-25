#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
    int n,m;cin>>n>>m;int a[n+1][m+1],b[n+1][m+1],hang[n+1];int fangchat[n+1];int fangcha[n+1];memset(fangchat,0,sizeof(fangchat));int c[n+1][m+1],d[n+1][m+1];
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            cin>>a[i][j];c[i][j]=a[i][j];
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=m;++j){
            cin>>b[i][j];d[i][j]=b[i][j];
        }
    }
    for (int i=1;i<=n;++i){
        int sum1=0,sum2=0;double f1=0,f2=0;
        for (int k=1;k<=m;++k){
            sum1+=a[i][k];  sum2+=b[i][k];          
        }
        double x1=sum1/m,x2=sum2/m;
        for (int k=1;k<=m;++k){
            f1+=pow(abs(x1-a[i][k]),2);
            f2+=pow(abs(x2-b[i][k]),2);
        }
        fangchat[i]+=(f1+f2)/m;fangcha[i]=fangchat[i];
    }
    int ci=0;
    for (int i=1;i<=n;++i){
        for (int j=i+1;j<=n;++j){
            if (fangcha[i]>=fangcha[j]){
                ci++;
                int tmp=fangcha[i];fangcha[i]=fangcha[j];fangcha[j]=tmp;
                //两行互换
                for (int k=1;k<=m;++k){
                    int huhaun1=c[i][k];c[i][k]=c[j][k];c[j][k]=huhaun1;
                    int huhaun2=d[i][k];d[i][k]=d[j][k];d[j][k]=huhaun2;
                }
            }
        }
    }   
    cout<<ci<<endl;int cishu=0;
while(cishu<ci){
    for (int i=1;i<=n;++i){
        for (int j=i+1;j<=n;++j){
            if (fangchat[i]>=fangchat[j]){
                int tmp=fangchat[i];fangchat[i]=fangchat[j];fangchat[j]=tmp;
                cout<<i<<" "<<j<<endl;
                //两行互换
                for (int k=1;k<=m;++k){
                    int huhaun1=c[i][k];c[i][k]=c[j][k];c[j][k]=huhaun1;
                    int huhaun2=d[i][k];d[i][k]=d[j][k];d[j][k]=huhaun2;
                }
                i=j;cishu++;if (cishu==ci)return 0;
            }
        }
    }   
}
    return 0;
}