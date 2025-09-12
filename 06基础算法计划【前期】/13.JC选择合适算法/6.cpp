#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int a[1005][1005],b[1005][1005];
int main(){
    int x,y,a1,a2;cin>>x>>y>>a1>>a2;//又是这个输入顺序
    for (int i=1;i<=y;++i){
        for (int j=1;j<=x;++j){
            scanf("%d",&a[i][j]); scanf("%d",&b[i][j]);
        }
    }
    while (a[a1][a2]!=0&&b[a1][a2]!=0){
        printf("%d ",a1);printf("%d\n",a2);
        int n=a[a1][a2];int m=b[a1][a2];//小心直接变，有执行先后之分，a1改变会影响后面的a2;
        a1=n,a2=m;
    }
    cout<<a1<<" "<<a2<<endl;
    return 0;
}