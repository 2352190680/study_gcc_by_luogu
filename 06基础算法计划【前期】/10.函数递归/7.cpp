//# 三连击（升级版）
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int a,b,c;double l[10];int lst[1000][4],sum=0;int flag[11];
void dfs(int k){
    if (k==10){
        if ((l[1]*100+l[2]*10+l[3])/a==(l[4]*100+l[5]*10+l[6])/b&&(l[7]*100+l[8]*10+l[9])/c==(l[1]*100+l[2]*10+l[3])/a){
            sum++;
            for (int i=1;i<=3;++i){
                lst[sum][i]=l[3*i-2]*100+l[3*i-1]*10+l[3*i];
            }
            return;
        }
        else return;
    }
    for (int i=1;i<=9;++i){
        if (flag[i]==0){
            flag[i]=1;l[k]=i;
            dfs(k+1);
            flag[i]=0;
        }
    }
}
int main(){
    cin>>a>>b>>c;
    if (a==0||b==0||c==0){
        cout<<"No!!!";return 0;
    }
    else{
        dfs(1);
        if (sum==0){
            cout<<"No!!!";return 0;
        }
        else{
            for (int i=1;i<=sum;++i){
                for (int j=1;j<=3;++j){
                    cout<<lst[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}