#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
// bool a(int x){
//     bool pd=true;
//     for (int i=2;i*i<=x;++i){
//         if (x%i==0)pd=false;
//     }
//     int t=x;int wei=0;
//     while(t!=0){
//         wei++;
//         t=t/10;
//     }int l[wei+1];
//     for (int i=1;i<=wei;++i){
//         l[i]=x%10;x=x/10;
//     }
//     if (wei%2==0){
//         for (int i=1;i<=wei/2;++i){
//             if (l[i]!=l[wei-i+1])pd=false;
//         }
//     }
//     else if (wei%2==1){
//         for (int i=1;i<=(wei-1)/2;++i){
//             if (l[i]!=l[wei-i+1])pd=false;
//         }
//     }
//     if (pd==true)return 1;
//     else return 0;
// }
int main(){
    // int x,y;cin>>x>>y;int l[x+1][y+1],ll[y+1][x+1];
    // for (int i=1;i<=x;++i){
    //     for (int j=1;j<=y;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i<=y;++i){
    //     for (int j=1;j<=x;++j){
    //         ll[i][j]=l[x-j+1][i];
    //     }
    // }
    // for (int i=1;i<=y;++i){
    //     for (int j=1;j<=x;++j){
    //         cout<<ll[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }  

    // int p,q;cin>>p>>q;int sum=0;
    // for (int i=p;i<=q;++i){
    //     if (a(i)==1)sum++;
    // }
    // cout<<sum;

    // string a,b;cin>>a>>b;int la=a.length(),lb=b.length();int limit;
    // if (la<=lb)limit=la;else limit=lb;int max=0;
    // for(int i=limit;i>=0;--i){
    //     bool pd=true;
    //     for (int j=la-i;j<la;++j){
    //         if (a[j]!=b[j-la+i])pd=false;
    //     }
    //     if (pd==true){
    //         if (i>=max)max=i;
    //     }
    // }
    // cout<<max;

    string a;cin>>a;int l=a.length();int max=0,sum=0;
    for (int i=0;i<l;++i){
        if (a[i]>='a'&&a[i]<='z'){
            sum++;
            if (sum>=max)max=sum;
        }else sum=0;      
    }
    cout<<max;
    return 0;
}