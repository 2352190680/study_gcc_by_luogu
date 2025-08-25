#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int n;cin>>n;int l[n+1];int max=0,min=100;int q[101];memset(q,0,sizeof(q));
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int j=1;j<=n;++j){
    //     q[l[j]]++; 
    // }
    // for (int i=1;i<=100;++i){
    //     if (q[i]>=max)max=q[i];
    //     if (q[i]<=min&&q[i]!=0)min=q[i];
    // }
    // cout<<max<<" "<<min;

    int n,p;cin>>n>>p;int l[n+1],max=-1;
    for (int i=1;i<=n;++i){
        cin>>l[i];
    }
    for (int i=1;i<=n-2;++i){
        for (int j=i+1;j<=n-1;++j){
            for (int k=j+1;k<=n;++k){
                if ((l[i]+l[k]+l[j])<=p&&(l[i]+l[k]+l[j])>=max){
                    max=l[i]+l[j]+l[k];
                }
            }
        }
    }
    cout<<max;


    return 0;
}