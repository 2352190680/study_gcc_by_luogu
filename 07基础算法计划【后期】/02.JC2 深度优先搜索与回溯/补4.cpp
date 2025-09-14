//01背包问题解法
//P2392 kkksc03考前临时抱佛脚
#include<bits/stdc++.h>
using namespace std;
int s[5],a[21],f[1210],ans=0;
int main(){
    for(int i=1;i<=4;i++)
        cin>>s[i];
    for(int k=1;k<=4;k++){
        int sum=0;
        for(int j=1;j<=s[k];j++){
            cin>>a[j];
            sum+=a[j];//记录背包大小
        }
        memset(f,0,sizeof(f));//清空背包
        f[0]=1;//初始化
        for(int i=1;i<=s[k];i++){
            for(int j=sum;j>=0;j--){
                if(f[j]){
                    f[j+a[i]]=1;//记录所有数和可能的情况，共n!种
                }
            }
        }
        int tmp=sum,res;int ci=0;
        for(int i=0;i<=sum;i++){
            if(f[i]&&tmp>=abs(2*i-sum)){
                //可以来个剪枝,开始时2*i-sum为负的
                if (2*i-sum>=0)ci++;//从小到大知,开始为正数了，那只会偏差越来越远（离最佳平均值）
                if (ci==2)break;//直接提前结束，因为i是从小到大的

                tmp=abs(2*i-sum);//相当于分成两个包，这两个包和的差值最小最好
                res=max(i,sum-i);//再取大的那一个（即覆盖率）
            }
        }
        ans+=res;
    }
    cout<<ans<<endl;
    return 0;
}

