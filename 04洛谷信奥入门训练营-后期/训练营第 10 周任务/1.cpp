#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<set>
using namespace std;
int main(){
    // int n,m;cin>>n>>m;int sum=0;int l[n+1][m+1];
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=m;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i<=m;++i){
    //     int max=0;
    //     for (int j=1;j<=n;++j){
    //         if (l[j][i]>=max){max=l[j][i];}
    //     }
    //     sum+=max;
    // }
    // cout<<sum;

    /*
    int n,k,a,b,c;cin>>n>>k>>a>>b>>c;int l[n+1][4];int money[n+1];int bank[n+1];memset(money,0,sizeof(money));//l[][1]编号
    for (int i=1;i<=n;++i){
        for (int j=2;j<=3;++j){
            cin>>l[i][j];l[i][1]=i;
        }
    }
    //确认排位(语文优先)
    for (int i=1;i<=n;++i){
        for (int j=i+1;j<=n;++j){
            if (l[i][2]<l[j][2]){
                int ya=l[i][2],sha=l[i][3],ba=l[i][1];l[i][2]=l[j][2],l[j][2]=ya;l[i][3]=l[j][3],l[j][3]=sha;l[i][1]=l[j][1],l[j][1]=ba;
            }
        }
    }
    //调序以实现并列情况
    for (int i=1;i<=n;++i){
        bank[i]=i;
        if (l[i][2]==l[i-1][2]&&i>1){
            bank[i]=bank[i-1];
        }
        if (bank[i]<=k)money[l[i][1]]+=a;
    }
    //数学
    for (int i=1;i<=n;++i){
        for (int j=i+1;j<=n;++j){
            if (l[i][3]<l[j][3]){
                int ya=l[i][2],sha=l[i][3],ba=l[i][1];l[i][2]=l[j][2],l[j][2]=ya;l[i][3]=l[j][3],l[j][3]=sha;l[i][1]=l[j][1],l[j][1]=ba;
            }
        }
    }
    for (int i=1;i<=n;++i){
        bank[i]=i;
        if (l[i][3]==l[i-1][3]){
            bank[i]=bank[i-1];
        }
        if (bank[i]<=k)money[l[i][1]]+=b;
    }
    //总分
    for (int i=1;i<=n;++i){
        for (int j=i+1;j<=n;++j){
            if (l[i][3]+l[i][2]<l[j][3]+l[j][2]){
                int ya=l[i][2],sha=l[i][3],ba=l[i][1];l[i][2]=l[j][2],l[j][2]=ya;l[i][3]=l[j][3],l[j][3]=sha;l[i][1]=l[j][1],l[j][1]=ba;
            }
        }
    }
    for (int i=1;i<=n;++i){
        bank[i]=i;
        if (l[i][3]+l[i][2]==l[i-1][3]+l[i-1][2]){
            bank[i]=bank[i-1];
        }
        if (bank[i]<=k)money[l[i][1]]+=c;
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            if (l[j][1]==i){cout<<money[i]<<endl;break;}
        }
    }*/

    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        set<char> st;  //set<char> st; 的意思是：定义一个存储字符类型（char）的集合变量 st。
        for (int j = i; j < n; ++j) {
            st.insert(s[j]);
            ans += st.size();   //妙啊
        }
    }
    cout << ans << endl;


    return 0;
}