#include<iostream>  
#include<cstdio>  
#include<cstdlib>  
#include<cmath>  
#include<algorithm>  
#include<cstring>  
#include<map>  
#include<vector>  
using namespace std;  
const int maxn=201;  
bool adja[maxn][maxn]={false};  
int nodeData[maxn]={0},pre[maxn]={0},f[maxn]={0},n=0;  
int main()  
{  
    scanf("%d",&n);  
    for (int i=1;i<=n;i++)  
    {  
        scanf("%d",&nodeData[i]);  
        f[i]=nodeData[i];  //记录当前地方的地雷数目
    }     
    for (int i=1;i<n;i++)  
        for (int j=i+1;j<=n;j++)  
            scanf("%d",&adja[i][j]);  //能否链接
    for (int i=n-1;i>=1;i--)  
    {  
        int fj=0,path=0;  
        for (int j=i+1;j<=n;j++)  
            if (adja[i][j]&&f[j]>fj)  
            {  
                fj=f[j];  //决出最大值
                path=j;  //记录最大时链接的编号
            }  
        f[i]=fj+nodeData[i];  
        pre[i]=path;  //第i位置开始最大值的保存
    }
    int k=1;  
    for (int i=2;i<=n;i++)  
        if (f[i]>f[k])  
           k=i;  
    int _max=f[k];  
    printf("%d",k);  
    k=pre[k];  
    while(k)  
    {  
        printf(" %d",k);  
        k=pre[k];  
    }  
    puts("");  
    printf("%d",_max);  
    return 0;  
}  