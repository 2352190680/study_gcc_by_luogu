#include<iostream>
using namespace std;
int main(){
    // int n,wei=0;cin>>n;int m=n;
    // while(m!=0){
    //     wei++;
    //     m=m/10;
    // }
    // if (wei==1)cout<<n;
    // else if(wei==2){
    //     int gewei=n%10,shiwei=n/10;cout<<gewei*10+shiwei;
    // }
    // else if(wei==3){
    //     int gewei=n%10,shiwei=n/10%10,baiwei=n/100;
    //     if ((gewei+shiwei+baiwei)%3==0)cout<<gewei*100+shiwei*10+baiwei;
    //     else{cout<<shiwei;}
    // }

    // int x,y;cin>>x>>y;
    // for (int j=1;j<=x;++j){
    //     for (int k=1;k<=y;++k){
    //         if (j%2==1){
    //             if(k%2==1)cout<<"*";
    //             else cout<<"_";
    //         }else{
    //             if(k%2==0)cout<<"*";
    //             else cout<<"_";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n;cin>>n;int l[n+1];int max=0;
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=n;++i){
    //         if (l[i]>max)max=l[i];
    // }
    // for (int i=1;i<=n;++i){
    //     if (l[i]==max)cout<<i<<" ";
    // }

    // char a,b;cin>>a>>b;
    // if (a>=b&&b>='a'||a>=b&&a<='Z')cout<<"error2";
    // else if (a<='Z'&&b>='a'||a>='a'&&b<='Z')cout<<"error1";
    // else{
    //     for(int i=a;i<=b;++i){
    //         cout<<char(i)<<" ";
    //     }
    // }

    // string s;int a=0;
    // while(cin>>s){
    //     for (int i=0;i<s.length();++i){
    //         if (i==0&&s[i]<='z'&&s[i]>='a'){s[0]-=32;}
    //         if (i!=0&&s[i]>='A'&&s[i]<='Z'){
    //             s[i]+=32;
    //         }
    //     }
    // cout<<s<<" ";a+=s.length()+1;
    // }
    // cout<<endl;cout<<a-1;

    // int n,m;cin>>n>>m;int l[n+1][4];
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=3;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // //金额排序
    // for (int i=1;i<=n;++i){
    //     for (int j=i+1;j<=n;++j){
    //         if (l[i][3]<l[j][3]){
    //             for (int k=1;k<=3;++k){
    //                 int tmp;tmp=l[i][k];l[i][k]=l[j][k];l[j][k]=tmp;
    //             }
    //         }
    //         else if (l[i][3]==l[j][3]){
    //             if (l[i][1]>l[j][1]){
    //                 for (int k=1;k<=3;++k){
    //                 int tmp;tmp=l[i][k];l[i][k]=l[j][k];l[j][k]=tmp;}
    //             }
    //             else if (l[i][1]==l[j][1]){
    //                 if (l[i][2]>l[j][2]){
    //                     for (int k=1;k<=3;++k){
    //                     int tmp;tmp=l[i][k];l[i][k]=l[j][k];l[j][k]=tmp;}
    //                 }
    //             }
    //         }
    //     }
    // }
    // for (int i=1;i<=m;++i){
    //     for (int j=1;j<=3;++j){
    //         cout<<l[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int n,sum=0;cin>>n;int l[n+1];
    for (int i=1;i<=n;++i){
        cin>>l[i];
    }
    for (int i=1;i<=n-1;++i){
        for (int j=i+1;j<=n;++j){
            int he=l[i]+l[j];bool pd=true;
            for (int k=2;k*k<=he;++k){
                if (he%k==0){pd=false;break;}
            }
            if (pd==true)sum++;
        }
    }
    cout<<sum;
    return 0;
}