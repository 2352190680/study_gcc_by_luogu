#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    //D:
    // int n,q;cin>>n>>q;int l[n+1];int ll[q+1][5];memset(l,0,sizeof(l));
    // for (int i=1;i<n;++i){
    //     int a,b,x;cin>>a>>b>>x;
    //     l[a]^=x;l[b]^=x;  //偶数相当于无变化，在下面的l[u]的异或和同样不会发生任何变化；如果是奇数，相当于提前完成了所要求的计算该点位的异或和
    // }
    // for (int i=1;i<=q;++i){
    //     int u,v,x;
    //     cin>>ll[i][1]>>u;
    //     if (ll[i][1]==1){
    //         cin>>v>>x;
    //         l[u]^=x;l[v]^=x;
    //     }else{
    //         cout<<l[u]<<endl;
    //     }
    // }

    /*
    int x,y,k;cin>>x>>y>>k;char a[x+2][y+2];int l[x+1][y+1][k+1];memset(l,0,sizeof(l));
    for (int i=1;i<=x;++i){
        cin>>(a[i]+1);
    }
    for (int i=1;i<=x;++i){
        for (int j=1;j<=y;++j){
            for (int q=k;q>=0;--q){
                l[i][j][q]=max(l[i-1][y][q],l[i][y-1][q]);
                if (a[i][j]=='1')l[i][j][q]++;
                if (a[i][j]=='?'&&q!=k)l[i][j][q+1]=max(l[i][j][q+1],l[i][j][q]+1);//l[i][j][q+1]:在i，j前用了魔法，但不能保证分加到了在必经之路上；l[i][j][q]+1意为着前面少用一次，在这格使用魔法得到的分。比较来确定前面是否使用魔法
            }
        }
    }
    cout<<*max_element(l[x][y],l[x][y]+k+1)<<endl;//看不懂,,,,烦
    */

    
    return 0;
}