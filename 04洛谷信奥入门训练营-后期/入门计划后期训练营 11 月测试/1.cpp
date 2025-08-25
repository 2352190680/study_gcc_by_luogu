#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int a,b;cin>>a>>b;int max=0,min=0;
    // for (int i=a;i<=b;++i){
    //     int ci=0,t=i;
    //     while (t!=1){
    //         if (t%2==0)t=t/2;
    //         else if(t%2==1)t=t*3+1;
    //         ci++;
    //     }
    //     if (ci>=max){max=ci;
    //     if (i>=min)min=i;}
    // }
    // cout<<max<<" "<<min;

    // int x,y;cin>>x>>y;int l[x+1][y+1];int sum=0;
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=2;i<=x-1;++i){
    //     for (int j=2;j<=y-1;++j){
    //         int min=10;
    //         if (l[i][j]>l[i+1][j]||l[i][j]>l[i-1][j]||l[i][j]>l[i+1][j+1]||l[i][j]>l[i+1][j-1]||l[i][j]>l[i-1][j+1]||l[i][j]>l[i-1][j-1]||l[i][j]>l[i][j-1]||l[i][j]>l[i][j+1]){
    //             if (l[i+1][j]<=min)min=l[i+1][j];
    //             if (l[i+1][j-1]<=min)min=l[i+1][j-1];
    //             if (l[i+1][j+1]<=min)min=l[i+1][j+1];
    //             if (l[i][j-1]<=min)min=l[i][j-1];
    //             if (l[i][j+1]<=min)min=l[i][j+1];
    //             if (l[i-1][j]<=min)min=l[i-1][j];
    //             if (l[i-1][j-1]<=min)min=l[i-1][j-1];
    //             if (l[i-1][j+1]<=min)min=l[i-1][j+1];
    //         }
    //         sum+=min;
    //     }
    // }    
    // cout<<sum;

    int n;cin>>n;int l[n+1];int max=0;int num;cin>>num;
    for (int i=1;i<=n;++i){
        l[n-i+1]=num%10;num=num/10;
    }
    for (int i=2;i<=n-1;++i){
        int c=0;
        for (int j=i;j<=n;++j){
            c+=pow(10,i+n-j-1)*l[j];
        }
        for (int j=1;j<i;++j){
            c+=pow(10,i-j-1)*l[j];
        }
        if (c>=max)max=c;
    }
    cout<<max;

    return 0;
}