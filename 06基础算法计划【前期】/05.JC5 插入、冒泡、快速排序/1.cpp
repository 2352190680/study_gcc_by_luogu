#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
// struct stu{
//     int id;
//     int chi;
//     int sum;
// };
// bool cmp(stu a,stu b){
//     if (a.sum!=b.sum){
//         return a.sum>b.sum;
//     }else{
//         if (a.chi!=b.chi){
//             return a.chi>b.chi;
//         }else{
//             return a.id>b.id;
//         }
//     }
// }
// void s(int a[],int j,int k){
//     int b=j,c=k,flag=a[(b+c)/2];
//     do{
//         while (a[b]<flag)b++;
//         while (a[c]>flag)c--;
//         if (b<=c){
//             swap(a[b],a[c]);b++,c--;
//         }
//     }while(b<=c);
//     if (j<c)s(a,j,c);
//     if (b<k)s(a,b,k);
// }
int main(){
    // int n;cin>>n;stu a[n+1];
    // for (int i=1;i<=n;++i){
    //     int ma,en;
    //     cin>>a[i].chi>>ma>>en;a[i].sum=a[i].chi+ma+en;
    //     a[i].id=i;
    // }
    // sort(a+1,a+n+1,cmp);
    // for (int i=1;i<=5;++i){
    //     cout<<a[i].id<<" "<<a[i].sum<<endl;
    // }

    // int n;cin>>n;int a[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // s(a,1,n);
    // for (int i=1;i<=n;++i){
    //     cout<<a[i]<<" ";
    // }

    // int n;cin>>n;int a[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>a[i];
    // }
    // sort(a+1,a+n+1);int s=1;
    // for (int i=1;i<=n;++i){
    //     if (a[i]==a[i+1])s++;
    //     else{
    //         cout<<a[i]<<" "<<s<<endl;
    //         s=1;
    //     }
    // }


    return 0;
}