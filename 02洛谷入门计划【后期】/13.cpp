#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // int n,i;cin>>n>>i;int l[n+1];memset(l,0,sizeof(l));int m[i+1],sum=0;
    // for (int a=1;a<=i;++a){
    // cin>>m[a];
    // }
    // for (int a=1;a<=i;++a){
    //     if (m[a]>=3&&m[a]<=n-2){l[m[a]]=1;l[m[a]+1]=1;l[m[a]+2]=1;l[m[a]-1]=1;l[m[a]-2]=1;}
    //     if (m[a]==1){l[m[a]]=1;l[m[a]+1]=1;l[m[a]+2]=1;}
    //     if (m[a]==n){l[m[a]]=1;l[m[a]-1]=1;l[m[a]-2]=1;}
    //     if (m[a]==2){l[m[a]]=1;l[m[a]+1]=1;l[m[a]+2]=1;l[1]=1;}
    //     if (m[a]==n-1){l[m[a]]=1;l[m[a]-1]=1;l[m[a]-2]=1;l[n]=1;}      
    // }
    // for(int a=1;a<=n;++a){
    //     if (l[a]==1)sum++;
    // }
    // cout<<sum;

    // int n;cin>>n;
    // for (int i=n-1;i>=1;--i){
    //     if (n%i==0){
    //         int a=n/i;bool pd1=true,pd2=true;
    //         for (int q=2;q<=i;++q){
    //             if (i%q==0)pd1=false;break;
    //         }
    //         for (int q=2;q<=a;++q){
    //             if (a%q==0)pd2=false;break;
    //         } 
    //         if (pd1==true&&pd2==true){
    //             cout<<i;return 0;
    //         }
    //     }
    // }

    // int a,b,c,max=0;cin>>a>>b>>c;
    // for (int i=b;i<=c;++i){
    //     if (i%a>=max)max=i%a;
    // }
    // cout<<max;
    //更巧妙之方法
    int a,b,c;cin>>a>>b>>c;
        if (b/a==c/a)cout<<c%a;
        else cout<<a-1;


    // int pk[5][5]={{0,0,1,1,0},
    //                      {1,0,0,1,0},
    //                      {0,1,0,0,1},
    //                      {0,0,1,0,1},
    //                      {1,1,0,0,0}};
    // int ju,x1,x2,mark1=0,mark2=0;cin>>ju>>x1>>x2;int l1[x1+1],l2[x2+1];
    // for (int i=1;i<=x1;++i){
    //     cin>>l1[i];
    // }
    // for (int i=1;i<=x2;++i){
    //     cin>>l2[i];
    // }
    // int now1=1,now2=1;
    // for (int i=1;i<=ju;++i){
    //     mark1+=pk[l1[now1]][l2[now2]];
    //     mark2+=pk[l2[now2]][l1[now1]];
    //     if(now1>=x1)now1=0;
    //     if(now2>=x2)now2=0;
    //     now1++;now2++;       
    // }
    // cout<<mark1<<" "<<mark2;
    return 0;
}