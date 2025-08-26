#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int n;cin>>n;int l[n+1][n+1];int x,y;cin>>x>>y;int ci=1;
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=n;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // while (l[x][y]>l[x-1][y]||l[x][y]>l[x+1][y]||l[x][y]>l[x][y+1]||l[x][y]>l[x][y-1]){
    //     ci++;int min=l[x][y];int a,b;
    //     if (l[x-1][y]<min){min=l[x-1][y];a=x-1;b=y;}
    //     if (l[x+1][y]<min){min=l[x+1][y];a=x+1;b=y;}
    //     if (l[x][y+1]<min){min=l[x][y+1];a=x;b=y+1;}
    //     if (l[x][y-1]<min){min=l[x][y-1];a=x;b=y-1;}
    //     x=a;y=b;
    // }cout<<ci;

    // int n;cin>>n;int l[101];int k;cin>>k;int q[k+1][3];memset(l,0,sizeof(l));
    // for (int i=1;i<=n;++i){
    //     l[i]=i;
    // }
    // for (int i=1;i<=k;++i){
    //     for (int j=1;j<=2;++j){
    //         cin>>q[i][j];
    //     }
    // }
    // for (int i=1;i<=k;++i){
    //     int ge=0;
    //     for (int j=1;j<=100;++j){
    //         if (l[j]!=0)ge++;
    //     }
    //     if (q[i][1]==1){
    //         for (int j=1;j<=n-q[i][2];++j){
    //             l[j]=l[j+q[i][2]];l[j+q[i][2]]=0;
    //         }
    //         for (int j=1;j<=100;++j){
    //             if (l[j]!=0)cout<<l[j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     else if (q[i][1]==2){
    //         l[ge+1]=q[i][2];
    //         for (int j=1;j<=100;++j){
    //             if (l[j]!=0)cout<<l[j]<<" ";
    //         }
    //         cout<<endl;            
    //     }
    // }

    // int c,a;cin>>c>>a;int l[c+1];int p[c+1];//l 为限制，p为实际
    // for (int i=1;i<=c;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=c;++i){
    //     cin>>p[i];
    // }
    // p[1]+=a;
    // for (int i=1;i<=c;++i){
    //     if (p[i]>l[i]){
    //         if (i!=c){
    //             p[i+1]+=p[i]-l[i];
    //         }
    //         p[i]=l[i];
    //     }
    // }
    // for (int i=1;i<=c;++i){
    //     cout<<p[i]<<" ";
    // }

    string s;cin>>s;int l=s.length();
    for (int i=0;i<l;++i){
        if (s[i]<='z'&&s[i]>='a'){
            cout<<char(toupper(s[i]));
        }
        else if (s[i]<='Z'&&s[i]>='A'){
            cout<<char(tolower(s[i]));
        }
    }
    return 0;
}