// #include<iostream>
// #include<cstring>
// #include<string>
// #include<cmath>
// using namespace std;
// int main(){
//     int n,q;cin>>n>>q;string s[n+2];int l[q+1][5];int ch[n+1];
//     for (int i=1;i<=n;++i){
//         cin>>s[i];
//     }
//     for (int i=1;i<=n;++i){
//         ch[i]=s[i].length();
//     }
//     for (int i=1;i<=q;++i){
//         cin>>l[i][1];
//         if (l[i][1]==1){
//             cin>>l[i][2]>>l[i][3]>>l[i][4];
//         }
//         else if (l[i][1]==2){
//             cin>>l[i][2];
//         }
//     }
//     for (int i=1;i<=q;++i){
//         if (l[i][1]==1){
//             for (int j=l[i][4]+ch[l[i][2]];j<=ch[l[i][3]]+ch[l[i][2]]-1;++j){
//                 s[l[i][3]][j]=s[l[i][3]][j-ch[l[i][2]]];
//             }
//             for (int j=0;j<=ch[l[i][2]]-1;++j){
//                 s[l[i][3]][l[i][4]+j]=s[l[i][2]][j];
//             }
//             ch[l[i][3]]+=ch[l[i][2]];
//         }
//         else if (l[i][1]==2){
//             for (int j=0;j<=ch[l[i][2]]-1;++j){
//                 cout<<s[l[i][2]][j];
//             }
//         }
//     }



//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s[n + 2]; // 字符串数组，索引从1开始使用

    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
    }

    for (int i = 1; i <= q; ++i) {
        int op;
        cin >> op;
        if (op == 1) {
            int a, b, c;
            cin >> a >> b >> c;
            // 使用string的insert函数在指定位置插入字符串
            s[b].insert(c, s[a]);
        } else if (op == 2) {
            int a;
            cin >> a;
            // 直接输出整个字符串
            cout << s[a] << endl;
        }
    }

    return 0;
}