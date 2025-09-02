#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    // int n;cin>>n;string a[n+1];int b=0,c=0,d=0,e=0;
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    //     if (a[i][0]=='M'){
    //         b++;
    //     }
    //     else if (a[i][0]=='C'){
    //         c++;
    //     }
    //     else if (a[i][0]=='O'){
    //         d++;
    //     }
    //     else if (a[i][0]=='I'){
    //         e++;
    //     }
    // }
    // cout<<b*c*d+b*c*e+c*d*e+b*d*e;

    int n;
    scanf("%d",&n);
    int a[n+1][3];
    for (int i=1;i<=n;++i){
        for (int j=1;j<=2;++j){
            scanf("%d",&a[i][j]);
        }
    }
    int s[200][200];s[0][0]=1;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=a[i][1];++j){
            s[j][0]=1;
            for (int k=1;k<=j;++k){
                s[j][k]=s[j-1][k-1]+s[j-1][k];
            }
        }
    //    printf("%d\n",s[a[i][1]][a[i][2]]);
    if(s[a[i][1]][a[i][2]]%2==0)cout<<0;
    else cout<<1;
    cout<<endl;
    }


    return 0;
}