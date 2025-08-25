#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // freopen("road.in","r",stdin);
    // freopen("road.out","w",stdout);

    // int a;cin>>a;
    // for (double x=1;x<=1000;++x){
    //     for (double y=1;y<=1000;++y){
    //         int b=(x-y)/a;
    //         int sum1=1,sum2=1;
    //         for (int i=1;i<=b;++i){sum2=sum2*i;}
    //         for (int i=1;i<=a;++i){sum1=sum1*i;}
    //         if (x-(y/sum2)==sum1&&(x-y)/sum2==a){
    //             cout<<x<<" "<<y<<" "<<b;
    //             return 0;
    //             }
    //         }
    //     }

    // string s[6];
    // for (int i=0;i<=4;++i){cin>>s[i];}
    // for (int j=0;j<=3;++j){
    //     for (int k=j+1;k<=4;++k){
    //         if (s[j]==s[k]){
    //             for (int i=j;i<k;++i){
    //                 cout<<s[i];
    //             }
    //             return 0;
    //         }
    //     }
    // }

    // int a[30000],sum=0;
    // for (int i=2;i<=30000;++i){
    //     bool p=true;
    //     for (int k=2;k*k<=i;++k){
    //         if (i%k==0){
    //             p=false;
    //         }
    //     }
    //     if (p==true)
    //     {sum++;a[sum]=i;}
    // }
    // int n;cin>>n;cout<<a[n];

    // int n;cin>>n;int l[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=n;++i){
    //     if (l[i]%4==0){
    //         cout<<"yes"<<endl;
    //     }else{
    //         if (l[i]<=10){
    //         cout<<"no"<<endl;
    //         }
    //         else if (l[i]<=99){
    //             if (l[i]%10%4==0){
    //                     cout<<"yes"<<endl;
    //                 }
    //             else if (l[i]/10%4==0){
    //                     cout<<"yes"<<endl;                    
    //             }
    //             else{
    //                 cout<<"no"<<endl;
    //             }
    //         }
    //         else{
    //             int wei=0;//判断位数
    //             int tihuan=l[i];
    //             while(tihuan!=0){
    //                 tihuan=tihuan/10;
    //                 wei++; //得出位数
    //             }
    //             int k=1;
    //             bool panduan=true,panduan2=false;
    //             while(k<wei&&panduan==true){
    //                 int z=pow(10,k);
    //                 if (l[i]/z%4==0){
    //                     cout<<"yes"<<endl;panduan=false,panduan2=true;
    //                 }
    //                 k++;
    //             }//倒数第一位开始删
    //             k=1;
    //             while(k<(wei-1)&&panduan==true){
    //                 int gewei=l[i]%10;
    //                 if (gewei%4==0){
    //                     cout<<"yes"<<endl;panduan=false,panduan2=true;
    //                 }
    //                 int z=pow(10,k);
    //                 if ((((l[i])-gewei)/z+gewei)%4==0){
    //                     cout<<"yes"<<endl;panduan=false,panduan2=true;
    //                 }
    //                 k++;                        
    //             }//倒数第二位开始删
    //             while(panduan2==false){
    //                 cout<<"no"<<endl;break;
    //             }
    //         }
    //     }
    // }


    return 0;
}