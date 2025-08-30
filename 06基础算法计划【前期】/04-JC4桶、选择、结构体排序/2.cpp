#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int num;cin>>num;
    while(num>0){
        num--;
        int n;cin>>n;double a[n+1][3];
        for (int i=1;i<=n;++i){
            cin>>a[i][1];
        }
        for (int j=1;j<=n;++j){
            cin>>a[j][2];
        }
        for (int i=1;i<=n;++i){
            for (int j=i+1;j<=n;++j){
                if (a[i][1]==a[j][1]){
                    if (a[i][2]>a[j][2]){
                        double t=a[i][2];a[i][2]=a[j][2],a[j][2]=t;
                    }
                }
            }
        }
        for (int i=1;i<=n;++i){
            if (a[i][1]==0){
                cout<<a[i][2]<<" ";
            }
        }
        cout<<endl;
        for (int i=1;i<=n;++i){
            if (a[i][1]==1){
                cout<<a[i][2]<<" ";
            }
        }
    }
    return 0;
}