#include<iostream>
#include<string>
// #define n 2000;    //定义常数
using namespace std;
// struct mark{
//     int yu,shu;
// };
int main(){
    // int a;cin>>a;int sum=0;
    // while(a!=0){
    //     sum+=a%10;
    //     a=a/10;
    // }
    // cout<<sum;

    // int goal;cin>>goal;int l[goal+1];
    // for (int i=1;i<=goal;++i){
    //     cin>>l[i];
    // }
    // do{
    //     int tmp=l[goal];
    //     for (int i=goal;i>=2;--i){
    //         l[i]=l[i-1];
    //     }
    //     l[1]=tmp;
    //     for (int i=1;i<=goal;++i){
    //         cout<<l[i]<<" ";
    //     }
    //     cout<<endl;
    // }while(l[goal]!=goal);

    // int m,n,sum=0;cin>>m>>n;
    // for (int i=m;i<=n;i++){
    //     int a=i;
    //     while (a!=0){
    //         if (a%10==2){sum++;}
    //         a=a/10;
    //     }
    // }
    // cout<<sum;

    // int n;cin>>n;mark a[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>a[i].yu>>a[i].shu;
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=i+1;j<=n;++j){
    //         if ((a[i].yu+a[i].shu)<(a[j].yu+a[j].shu)||((a[i].yu+a[i].shu)==(a[j].yu+a[j].shu))&&a[i].yu<a[j].yu){
    //             mark tmp=a[i];a[i]=a[j];a[j]=tmp;
    //         }
    //     }
    // } 
    // for (int i=1;i<=n;++i) {
    //     cout<<a[i].yu<<" "<<a[i].shu<<" "<<endl;
    // }

    // string a;cin>>a;int len=a.length(),sum=0;
    // for (int i=0;i<=len;++i){
    //     if (a[i]=='c'&&a[i+1]=='h'&&a[i+2]=='u'&&a[i+3]=='a'&&a[i+4]=='n'&&a[i+5]=='z'&&a[i+6]=='h'&&a[i+7]=='i'){
    //         sum++;
    //     }
    // }
    // cout<<sum;

    // int n,v,m,a,sum=0,num=0;cin>>n>>v>>m>>a;
    // for (int i=1;i<=n;++i){
    //     num++;sum+=v;
    //     if (num==m){v+=a;num=0;}
    // }
    // cout<<sum;

    // int n,sum=0;cin>>n;
    // for (int i=1;i<=n;++i){
    //     int b=i;
    //     while(b!=0){
    //         if (b%10==1||b%10==0||b%10==2||b%10==9){sum+=i;break;}
    //         b=b/10;
    //     }
    // }
    // cout<<sum;

    // int x,y;cin>>x>>y;char l[x+1][y+1];
    // for (int j=1;j<=x;j++){
    //     for (int k=1;k<=y;k++){
    //         cin>>l[j][k];
    //     }
    // }
    // for (int j=1;j<=x;j++){
    //     for (int k=1;k<=y;k++){      //定位一个数
    //         int sum=0;
    //         if (l[j][k]=='?'){
    //             if (l[j-1][k]=='*')sum++;
    //             if (l[j-1][k-1]=='*')sum++;
    //             if (l[j-1][k+1]=='*')sum++;
    //             if (l[j][k-1]=='*')sum++;
    //             if (l[j][k+1]=='*')sum++;
    //             if (l[j+1][k-1]=='*')sum++;
    //             if (l[j+1][k]=='*')sum++;
    //             if (l[j+1][k+1]=='*')sum++;
    //             cout<<sum;
    //         }else{
    //             cout<<l[j][k];
    //         }
    //     }
    //     cout<<endl;
    // }

    
    return 0;
}