#include<iostream>
using namespace std;
int main(){
    // int a,b;cin>>a>>b;
    // for (int i=1;i<=b-a+1;++i){
    //     int sum=0,t=i;
    //     for (int c=1;c<=i;++c){
    //         sum+=a+c-1;      
    //     }
    //     cout<<sum<<endl;
    // }

    // char a;cin>>a;
    // cout<<a<<char(a+1);

    // int a1,a2,a3,b1,b2,b3;cin>>a1>>a2>>a3>>b1>>b2>>b3;
    // if (a1+a2+a3>b1+b2+b3)cout<<a3<<" "<<a2<<" "<<a1;
    // else if (a1+a2+a3<b1+b2+b3)cout<<b3<<" "<<b2<<" "<<b1;
    // else{
    //     if (a1>b1)cout<<a3<<" "<<a2<<" "<<a1;
    //     else if(a1<b1)cout<<b3<<" "<<b2<<" "<<b1;
    //     else{
    //         if (a2>b2)cout<<a3<<" "<<a2<<" "<<a1;
    //         else if(a2<b2)cout<<b3<<" "<<b2<<" "<<b1;
    //         else{
    //             if (a3>b3)cout<<a3<<" "<<a2<<" "<<a1;
    //             else if(a3<b3)cout<<b3<<" "<<b2<<" "<<b1;                
    //         }
    //     }
    // }
    // int a[4],b[4];
    // for (int i=1;i<=3;++i){
    //     cin>>a[i];
    // }
    // for (int i=1;i<=3;++i){
    //     cin>>b[i];
    // }
    // if (a[1]+a[2]+a[3]>b[1]+b[2]+b[3]){
    //     for (int i=1;i<=3;++i){
    //         cout<<a[4-i];
    //     }
    // }
    // else if (a[1]+a[2]+a[3]<b[1]+b[2]+b[3]){
    //     for (int i=1;i<=3;++i){
    //         cout<<b[4-i];
    //     }        
    // }
    // else{
    //     for (int i=1;i<=3;++i){
    //         if (a[i]>b[i]){
    //         for (int i=1;i<=3;++i){
    //             cout<<a[4-i]<<" ";
    //             }   
    //         return 0;             
    //         }
    //         else if (a[i]<b[i]){
    //         for (int i=1;i<=3;++i){
    //             cout<<b[4-i]<<" ";
    //             } 
    //         return 0;                
    //         }           
    //     }
    // }

    int n,a,sum=0,ci=0;cin>>n>>a;int l[a+1];
    for (int i=1;i<=n;++i)cin>>l[i];
    for (int i=1;i<=n;++i){
        sum+=l[i];ci++;
        if (sum%a==0)break;
    }
    cout<<ci;
    return 0;
}