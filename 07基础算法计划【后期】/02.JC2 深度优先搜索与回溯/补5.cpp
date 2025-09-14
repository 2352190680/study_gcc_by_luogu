#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int y,x;int a[20][20];
int main(){
    cin>>y>>x;x++,y++;a[1][1]=1;
    for (int j=1;j<=x;++j){//注意这里内外循环顺序，因为已知只能向右（x不断增大），先处理y再推进x,所以x外层
        for (int i=1;i<=y;++i){
            if (j>=3&&i>=2)a[i][j]+=a[i-1][j-2];
            if (j>=3&&i<=y-1)a[i][j]+=a[i+1][j-2];
            if (j>=2&&i>=3)a[i][j]+=a[i-2][j-1];
            if (j>=2&&i<=y-2)a[i][j]+=a[i+2][j-1];
        }
    }
    cout<<a[y][x];
    return 0;
}