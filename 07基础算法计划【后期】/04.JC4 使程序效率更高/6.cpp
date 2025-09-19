#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=200005;
int n,r,q;
struct player{
    int num;
    long long mark;
    long long ability;
};player a[maxn];
player win[100001];
player lose[100001];
bool cmp(player a,player b){
    if (a.mark==b.mark)return a.num<b.num;
    return a.mark>b.mark;
}
void merge(){//归并，只会执行2n次O(2n)，原本就是有顺序的输入（高分对高分,低对低），用sort浪费计算
    int i=1,j=1,k=1;
    while (i<=n&&j<=n){//滑动k
        if (win[i].mark>lose[j].mark||(win[i].mark==lose[j].mark&&win[i].num<lose[j].num)){
            //顶替,妙啊
            a[k].mark=win[i].mark;
            a[k].ability=win[i].ability;
            a[k++].num=win[i++].num;
        }else{
            a[k].mark=lose[j].mark;
            a[k].ability=lose[j].ability;
            a[k++].num=lose[j++].num;           
        }
    }
    //读完一方，剩下的全部录入
    while (i<=n){
        a[k].mark=win[i].mark;
        a[k].ability=win[i].ability;
        a[k++].num=win[i++].num;  
    }
    while (j<=n){
        a[k].mark=lose[j].mark;
        a[k].ability=lose[j].ability;
        a[k++].num=lose[j++].num; 
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);//快读快写
    cin>>n>>r>>q;
    for (int i=1;i<=2*n;++i){
        a[i].num=i;
        cin>>a[i].mark;
    }
    for (int i=1;i<=2*n;++i){
        cin>>a[i].ability;
    }
    sort(a+1,a+2*n+1,cmp);
    for (int i=1;i<=r;++i){
        int ge=1;
        for (int j=1;j<=2*n;j+=2){
            if (a[j].ability>a[j+1].ability){
                win[ge].mark=a[j].mark+1;
                win[ge].num=a[j].num;
                win[ge].ability=a[j].ability;
                lose[ge].mark=a[j+1].mark;
                lose[ge].num=a[j+1].num;
                lose[ge].ability=a[j+1].ability;
            }
            else {
                win[ge].mark=a[j+1].mark+1;
                win[ge].num=a[j+1].num;
                win[ge].ability=a[j+1].ability;
                lose[ge].mark=a[j].mark;
                lose[ge].num=a[j].num;
                lose[ge].ability=a[j].ability;
            }
            ge++;
        }
        merge();
    }
    cout<<a[q].num;
    return 0;
}