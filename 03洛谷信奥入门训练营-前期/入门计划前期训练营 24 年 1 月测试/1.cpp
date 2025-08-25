#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // double da=0;double s[5];
    // double a1,a2,a3;cin>>a1>>a2>>a3;double p=(a1+a2+a3)/2;
    // s[1]=sqrt(p*(p-a1)*(p-a2)*(p-a3));
    // double b1,b2;cin>>b1>>b2;s[2]=b1*b2;
    // double c1,c2,c3;cin>>c1>>c2>>c3;
    // s[3]=(c1+c2)*c3/2;
    // double d1;cin>>d1;s[4]=3.14*pow(d1,2);
    // for (int i=1;i<=4;++i){
    //     if (s[i]>=da)da=s[i];
    // }
    // if (s[1]==da)cout<<"sanjiaoxing";
    // if (s[2]==da)cout<<"changfangxing";
    // if (s[3]==da)cout<<"tixing";
    // if (s[4]==da)cout<<"yuanxing";

    // int a[5],b[5];bool pd=true;
    // for (int i=1;i<=4;++i)cin>>a[i];
    // for (int i=1;i<=4;++i)cin>>b[i];
    // for (int i=1;i<=4;++i){
    //     if (b[i]>=a[i]){
    //         if ((b[i]-a[i])>=3){
    //             b[i+1]+=(b[i]-a[i])/3;
    //         }
    //     }else{
    //         pd=false;cout<<"no";return 0;
    //     }
    // }
    // if (pd==true)cout<<"yes";

    int n,sum=0,s;cin>>n;
    for (int i=1;i<n-8;i++){
        int sum=5*i+20;sum=sum/10%10;
        if (sum==3){
            s++;
        }
    }
    cout<<s;
    return 0;
}