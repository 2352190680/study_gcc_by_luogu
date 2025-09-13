//做错了，会重复计数，去看06.10.4
// #include<iostream>
// #include<cmath>
// #include<string>
// #include<cstring>
// #include<algorithm>
// using namespace std;
// int k,n;long long sum;long long he;int a[21];int flag[21];
// void puanduan(long long x){
//     if (x==1||x==2)sum++;
//     else{
//         bool pd=true;
//         for (int i=2;i*i<=x;++i){
//             if (x%i==0){
//                 pd=false;break;
//             }
//         }
//         if (pd==true)sum++;
//     }
//     return;
// }
// void dfs(int x){
//     if (x==n+1){
//         puanduan(he);
//         return;
//     }
//     for (int i=1;i<=k;++i){
//         if (flag[i]==0){
//             he+=a[i];flag[i]=1;
//             dfs(x+1);
//             he-=a[i];flag[i]=0;
//         }
//     }
// }
// int main(){
//     cin>>k>>n;
//     for (int i=1;i<=k;++i){
//         cin>>a[i];
//     }
//     dfs(1);
//     cout<<sum;
//     return 0;
// }