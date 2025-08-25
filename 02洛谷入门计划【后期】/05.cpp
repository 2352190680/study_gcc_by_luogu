#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;
int main(){
    // cout<<'M'-'A'+1;

    //char a;cin>>a;a=a-'a'+'A';cout<<a;   //小写与大写相隔32

    /*char a[110]; //能存a[0]-a[108]共109个，a[109]类似于终止子结束；
    int n;scanf("%s",a);  //不需要&,%c只能输入单个字符，%s多个
    n=strlen(a);printf("%c %d",a[0],n);*/

    // char a[110];scanf("%s",a);int n;n=strlen(a);//不放在下面原因时每次循环都会重新计算
    // for (int b=0;b<=n;++b){
    //     if (a[b]>='a'&&a[b]<='z'){a[b]-=32;}
    // }
    // printf("%s",a);

    //char ch;ch=getchar();putchar(ch);          //速度更快

    // int n,c=0,b;cin>>n;char l[n+2][55];int m[n+1];   //注意，一个组只能存入1个数据；故用二维；n+2为行；55为单行接纳的字符串长度
    // for (int a=1;a<=n;a++){
    //     scanf("%s%d",l[a],&m[a]);
    //     if (m[a]>=c){b=a;c=m[a];}
    // }
    // printf("%s",l[b]);

    // char a[55];cin>>a;int n,c=0;n=strlen(a);
    // for (int x=0;x<=n-3;++x){
    //         if (a[x]=='l'&&a[x+1]=='u'&&a[x+2]=='o'&&a[x+3]=='g'&&a[x+4]=='u')c++;
    // }
    // cout<<c;

    /*int x,y,t,sum=0;cin>>x>>y;int a[x+1][y+1];memset(a,0,sizeof(a));
    for (int m=1;m<=x;++m){
        for (int n=1;n<=y;++n){
            cin>>a[m][n];
        }
    }
    cin>>t;
    if (t>0)
   { for (int i=1;i<=t;++i)
    { int o,p,j,k,v;cin>>o>>p>>j>>k;
    v=a[o][p];
    a[o][p]=a[j][k];
    a[j][k]=v;}} 
    for (int m=1;m<=x;++m){
        for (int n=1;n<=y;++n){
            if (a[m][n]>a[m-1][n]&&a[m][n]>a[m+1][n]&&a[m][n]>a[m][n+1]&&a[m][n]>a[m][n-1]){sum++;}
        }
    }
    cout<<sum<<endl;
    for (int m=1;m<=x;++m){
        for (int n=1;n<=y;++n){
            if (a[m][n]>a[m-1][n]&&a[m][n]>a[m+1][n]&&a[m][n]>a[m][n+1]&&a[m][n]>a[m][n-1]){cout<<m<<" "<<n<<endl;}
        }
    }*/

//     int n;cin>>n;int a[n+1];
//     for (int i=1;i<=n;++i){
//         cin>>a[i];
//     }
//     for (int b=1;b>=0;--b){
//         for (int i=1;i<=n;++i){
//         if (a[i]%2==b){cout<<a[i]<<" ";}
//     }
//         cout<<endl;
// }

    int n,c=0,b;cin>>n;char s[25];
    for (int m=1;m<=n;++m){
        cin>>s;
        if (s[0]>='a'&&s[0]<='z'){s[0]-=32;}
        cout<<s<<endl;
    }

    // int a;cin>>a;
    // cout<<char(a);

    // char a;cin>>a;cout<<int(a);
    return 0;
}