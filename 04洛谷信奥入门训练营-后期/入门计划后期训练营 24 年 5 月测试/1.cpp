#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    int m,n;cin>>n>>m;int lst[n+1];int caozuo[m+1][5];memset(caozuo,0,sizeof(caozuo));
    for (int i=1;i<=n;++i)cin>>lst[i];
    for (int i=1;i<=m;++i){
        cin>>caozuo[i][1];
        if (caozuo[i][1]==1||caozuo[i][1]==2){
            cin>>caozuo[i][2]>>caozuo[i][3]>>caozuo[i][4];
        }
        else {
            cin>>caozuo[i][2]>>caozuo[i][3];
        }
    }
    for (int i=1;i<=m;++i){
        if (caozuo[i][1]==1){
            for (int j=caozuo[i][2];j<=caozuo[i][3];++j){
                lst[j]+=caozuo[i][4];
            }
        }
        else if (caozuo[i][1]==2){
            for (int j=caozuo[i][2];j<=caozuo[i][3];++j){
                if (lst[j]<=caozuo[i][4])lst[j]=caozuo[i][4];
            }
        }
        else if (caozuo[i][1]==3){
            int min=100;
            for (int j=caozuo[i][2];j<=caozuo[i][3];++j){
                if (lst[j]<=min);min=lst[j];
            }
            cout<<min<<endl;
        }
        else if (caozuo[i][1]==4){
            int max=0;
            for (int j=caozuo[i][2];j<=caozuo[i][3];++j){
                if (lst[j]>=max)max=lst[j];
            }
            cout<<max<<endl;
        }
    }


    return 0;
}