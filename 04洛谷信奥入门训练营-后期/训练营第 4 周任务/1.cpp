#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // bool pd=true;int n;cin>>n;int l[n+1][n+1];
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=n;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // int sum=0;
    // for (int j=1;j<=n;++j){
    //     sum+=l[1][j];
    // }
    // for (int i=1;i<=n;++i){
    //     int he=0;
    //     for (int j=1;j<=n;++j){
    //         he+=l[i][j];
    //     }
    //     if (he!=sum)pd=false;
    // }
    // for (int i=1;i<=n;++i){
    //     int he=0;
    //     for (int j=1;j<=n;++j){
    //         he+=l[j][i];
    //     }
    //     if (he!=sum)pd=false;
    // }
    // int he1=0;
    // for (int i=1;i<=n;++i){
    //     he1+=l[i][i];
    // }if (he1!=sum)pd=false;
    // int he2=0;
    // for (int i=1;i<=n;++i){
    //     he2+=l[i][n-i+1];
    // }if (he2!=sum)pd=false;
    // if (pd==true)cout<<"yes";
    // else cout<<"no";

    // int n;cin>>n;int l[n+1][3];int max=0,x[n+1];memset(x,0,sizeof(x));
    // for (int i=1;i<=n;++i){
    //     for (int j=1;j<=2;++j){
    //         cin>>l[i][j];
    //     }
    // }
    // for (int i=1;i<=n;++i){
    //     int ci=1;
    //     for (int j=i+1;j<=n;++j){
    //         if (l[i][1]==l[j][1]&&l[i][2]==l[j][2]){ci++;}
    //     }
    //     if (ci>=max){max=ci;x[i]=i;}
    // }
    // cout<<max<<"\n";
    // for (int i=1;i<=n;++i){
    //     for (int j=i+1;j<=n;++j){
    //         if (l[x[i]][1]>l[x[j]][1]||l[x[i]][1]==l[x[j]][1]&&l[x[i]][2]>l[x[j]][2]){
    //             int t=x[i];x[i]=x[j],x[j]=t;
    //         }
    //     }
    // }
    // for (int i=1;i<=n;++i){
    //     if (x[i]!=0)cout<<l[x[i]][1]<<" "<<l[x[i]][2]<<endl;
    // }

    // int n,a;cin>>n>>a;int l[n+1];int sum=0;
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=n;++i){
    //     for (int j=i;j<=n;++j){
    //         int he=0;
    //         for (int k=i;k<=j;++k){
    //             he+=l[k];
    //         }
    //         if (he%a==0)sum++;
    //     }
    // }
    // cout<<sum;

    // char a[155],b[155];
    // cin.getline(a, 155);
    // int l=strlen(a);
    // for (int i=0;i<=l;++i){
    //     if (a[i]==' '&&a[i+1]==' ')continue;
    //     else b[i]=a[i];
    // }
    // int ll=strlen(b);
    // cout<<(l-ll);   //     错误示范(：

    // char a[155],b[155];
    // cin.getline(a, 155);
    // int l = strlen(a);
    // int j = 0;
    // for (int i = 0; i < l; ++i) {
    //     if (a[i] == ' ' && a[i + 1] == ' ') continue;
    //     b[j++] = a[i];
    // }
    // b[j] = '\0';
    // int ll = strlen(b);
    // cout << (l - ll);

    int l[4][2];
    for (int i=1;i<=3;++i){
        for (int j=1;j<=2;++j){
            cin>>l[i][j];
        }
    }int sum=0;
    for (int i=l[1][1];i<=l[1][2];++i){
        for (int j=l[2][1];j<=l[2][2];++j){
            for (int k=l[3][1];k<=l[3][2];++k){
                if (i==j&&i==k){sum++;}
                else if (i==j&&i!=k){sum++;}
                else if (i==k&&i!=j){sum++;}
                else if (k==j&&i!=k){sum++;}
            }
        }
    }
    cout<<sum;
    return 0;
}