#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
// int s[10]={6,2,5,5,4,5,6,3,7,6};int sum=0;
// int get_s(int x){
//     if (x==0)return s[0];
//     int z=0;
//     while (x){
//         z+=s[x%10];
//         x/=10;
//     }
//     return z;
// }
int main(){
    // int n;cin>>n;int a;
    // for (int i=1;i<=1e7;++i){
    //     if ((1+i)*i/2>=n){a=i;break;}
    // }
    // int b=n-a*(a-1)/2;
    // cout<<a-b+1<<"/"<<b;

    // int n;cin>>n;n-=4;
    // for (int i=0;i<=999;++i){
    //     for (int j=0;j<=999;++j){
    //         int k=i+j;
    //         if (get_s(i)+get_s(j)+get_s(k)==n){
    //             sum++;
    //         }
    //     }
    // }
    // cout<<sum;//太妙了，直接用k=i+j；无需再嵌入循环以条件判断，大于十的处理

    // int n,k;cin>>n>>k;int a[k+1];memset(a,0,sizeof(a));
    // int b=pow(10,n-1),c=pow(10,n)-1;
    // for (int i=b;i<=c;++i){
    //     for (int j=1;j<=k;++j){
    //         if (i%k==j-1)a[j]++;
    //     }
    // }
    // for (int i=1;i<=k;++i){
    //     cout<<a[i]<<" ";
    // }

    int n;
    cin >> n;
    bool is_prime[10010];
    memset(is_prime, true, sizeof(is_prime));
    // 筛质数并直接统计
    for (int p = 2; p <= n; ++p) {
        if (is_prime[p]) {
            // 筛掉p的倍数
            for (int j = p * 2; j <= n; j += p)
                is_prime[j] = false;
            // 统计p在n!中的幂次
            int cnt = 0;
            for (long long k = p; k <= n; k *= p)
                cnt += n / k;
            cout << p << " " << cnt << endl;
        }
    }

    return 0;
}
