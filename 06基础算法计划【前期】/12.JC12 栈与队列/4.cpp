// [COCI2010-2011#7] GITARA
// #include<iostream>
// #include<cstring>
// #include<string>
// #include<cmath>
// using namespace std;
// int n,p;int sum;long long l[7][300001];
// struct guitar{
//     int xian,duan;
// };
// int main(){
//     cin>>n>>p;guitar a[n+1];
//     for (int i=1;i<=n;++i){
//         cin>>a[i].xian>>a[i].duan;
//     }
//     for (int i=1;i<=n;++i){
//         if (l[a[i].xian][a[i].duan]==0){
//             sum++;
//             l[a[i].xian][a[i].duan]=1;
//         }
//         int num=0;
//         for (int j=a[i].duan+1;j<=p;++j){
//             if (l[a[i].xian][j]==1){
//                 num++;l[a[i].xian][j]=0;
//             }
//         }
//         sum+=num;
//     }
//     cout<<sum;
//     return 0;
// }
//TLE能做但会超时

//不妨用栈
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
using namespace std;
stack<int>s[7];
int main(){
    int n,p;int sum=0;
    cin>>n>>p;
    for (int i=1;i<=n;++i){
        int a,b;cin>>a>>b;
        while (!s[a].empty()&&s[a].top()>b){   //比较奇妙；&&这个不是同时判断，就如这里如果互换就会报错
            s[a].pop();sum++;
        }
        if (s[a].empty()||s[a].top()<b){
            sum++;s[a].push(b);
        }
    }
    cout<<sum;
    return 0;
}