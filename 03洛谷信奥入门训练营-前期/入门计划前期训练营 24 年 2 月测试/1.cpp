#include<iostream>
using namespace std;
int main(){
    // int a,b,c;cin>>a>>b>>c;
    // if (a+b+c>1000)cout<<0;
    // else cout<<a+b+c;

    // double a,b;float c;cin>>a>>b;scanf("%f%%",&c);
    // printf("%.2lf",b*c);

    int a,b,sum=0;cin>>a>>b;
    for (int i=a;i<=b;i++){
        int wei=0,t=i,tt=i;
        while(t!=0){
            wei++;
            t=t/10;
        }
        if (wei==1)sum++;
        else{
        int l[wei+1];
        for (int j=1;j<=wei;++j){
            l[j]=tt%10;tt=tt/10;
        }
        bool pd=true;
        for (int j=1;j<=wei;++j){
            for (int k=j+1;k<=wei;++k){
                if (l[j]<=l[k])pd=false;
            }
        }
        if (pd==true)sum++;
        }
    }
    cout<<sum;
    return 0;
}