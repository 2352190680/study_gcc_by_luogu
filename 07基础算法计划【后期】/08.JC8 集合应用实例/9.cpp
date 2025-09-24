#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
int n;map<string,int>m;long long sum;
int main(){
    cin>>n;string a[n+1],b[n+1];
    for (int i=1;i<=n;++i){
        cin>>a[i]>>b[i];
        string c;c+=a[i][0];c+=a[i][1];
        a[i]=c;
        m[c+b[i]]++;
    }
    for (int i=1;i<=n;++i){
        string s=b[i]+a[i];
        if (m.find(s)!=m.end()&&b[i]!=a[i]){
            sum+=m[s];
        }
    }
    cout<<sum/2;
    return 0;
}
/*7
MIAMI FL
MIAMII FL
DALLAS TX
FLINT MI
CLEMSON SC
BOSTON MA
ORLANDO FL
*/
// #include<iostream>
// #include<string>
// #include<map>
// using namespace std;

// int n;
// string city[100005], state[100005];
// map<string, string> city_state;

// int main() {
//     cin >> n;
//     for (int i = 1; i <= n; ++i) {
//         cin >> city[i] >> state[i];
//         city[i] = city[i].substr(0, 2); // 城市前两位
//         city_state[city[i] + state[i]] = "1"; // 标记存在
//     }

//     long long ans = 0;
//     for (int i = 1; i <= n; ++i) {
//         string a = city[i], b = state[i];
//         string key = b + a; // 互为州名
//         // 查找是否有城市的前两位等于当前城市的州名，且州名等于当前城市的前两位，且不是同一个州
//         if (city_state.find(key) != city_state.end() && a != b) {
//             ans++;
//         }
//     }
//     cout << ans / 2 << endl; // 每对统计了两次，除以2
//     return 0;
// }