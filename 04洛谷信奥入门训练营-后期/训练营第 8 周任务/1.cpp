#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
struct fen{
    int m1,m2,m3;string name;
};
int main(){
    // int x,y,n;cin>>x>>y>>n;int l[x+1][y+1];int globalmin=10e4;
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i+n-1<=x;++i){
    //     for (int j=1;j+n-1<=y;++j){   //生成一个坐标
    //         int min=100,max=0;
    //         for (int q=i;q<=n+i-1;++q){
    //             for (int p=j;p<=n+j-1;++p){    //小正方形
    //                 if (l[q][p]>=max)max=l[q][p];
    //                 if (l[q][p]<=min)min=l[q][p];
    //             }
    //         }
    //         if ((max-min)<=globalmin){globalmin=max-min;}
    //     }
    // }
    // cout<<globalmin;

    int n;cin>>n;fen a[n+1];
    for (int i=1;i<=n;++i){
        cin>>a[i].m1>>a[i].m2>>a[i].m3>>a[i].name;
    }
    for (int i=1;i<=n;++i){
        for (int j=i+1;j<=n;++j){
            if ((a[i].m1*0.3+a[i].m2*0.4+a[i].m3*0.3)<(a[j].m1*0.3+a[j].m2*0.4+a[j].m3*0.3)||(a[i].m1*0.3+a[i].m2*0.4+a[i].m3*0.3)==(a[j].m1*0.3+a[j].m2*0.4+a[j].m3*0.3)&&a[i].m1<a[i].m1||(a[i].m1*0.3+a[i].m2*0.4+a[i].m3*0.3)==(a[j].m1*0.3+a[j].m2*0.4+a[j].m3*0.3)&&a[i].m1==a[i].m1&&a[i].m2<a[j].m2||(a[i].m1*0.3+a[i].m2*0.4+a[i].m3*0.3)==(a[j].m1*0.3+a[j].m2*0.4+a[j].m3*0.3)&&a[i].m1==a[i].m1&&a[i].m2==a[j].m2&&a[i].m3==a[j].m3&&a[i].name>a[j].name){
                int x,y,z;x=a[i].m1,y=a[i].m2,z=a[i].m3;a[i].m1=a[j].m1,a[i].m2=a[j].m2;a[i].m3=a[i].m3;string ti=a[i].name;a[i].name=a[j].name;a[j].name=ti;
            }
        }
    }
    for (int i=1;i<=n;++i){
        cout<<a[i].name<<endl;
    }
    return 0;
}