#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // double a;int b;cin>>a>>b;
    // if (b==0){
    //     if (a<12)cout<<0;
    //     else if(a>=12&&a<=(12+17*2.5)){
    //         cout<<floor(3+(a-12)/2.5);
    //     }
    //     else if(a>(12+17*2.5)){
    //         cout<<floor(20+(a-12-17*2.5)/3.5);
    //     }
    // }else{
    //     if (a<12*1.3)cout<<0;
    //     else if(a>=12*1.3&&a<=(12+17*2.5)*1.3){
    //         cout<<floor(3+(a-12*1.3)/(2.5*1.3));
    //     }
    //     else if(a>(12*1.3+17*2.5*1.3)){
    //         cout<<floor(20+(a-(12*1.3+17*2.5*1.3))/(3.5*1.3));
    //     }
    // }

    int n;cin>>n;int l[n+1];
    for (int i=1;i<=n;++i){
        cin>>l[i];
    }
    bool pd=true;
    for (int i=1;i<=n;++i ){
        for (int j=i+1;j<=n;++j){
            if (l[i]>=l[j])pd=false;
        }
    }
    if (pd==true)cout<<"yes";
    else{cout<<"no";}

    return 0;
}