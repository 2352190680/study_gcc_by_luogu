// #include<iostream>
// using namespace std;
// double multi(double x,double y){
//     return (x*y);
// }
// int main(){
//     double a,b;
//     cin>>a>>b;
//     cout<<multi(a,b);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int is_prime(int x){
//     if (x==0||x==1)return 0;
//     for(int i=2;i*i<=x;++i){
//         if (x%i==0){return 0;}
//     }
//     return 1;
// }
// int main(){
//     int n;cin>>n;int a[n+1];
//     for (int i=1;i<=n;++i){
//         cin>>a[i];
//     }
//     for (int i=1;i<=n;++i){
//         if (is_prime(a[i]))
//        { cout<<a[i]<<" ";}
//     }
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int n,num,m;
// int a[25];
// void stat(int l[], int num){
//     int mins=100,maxs=0,sum=0;
//     for (int i=1;i<=num;++i){
//         maxs=max(l[i],maxs);mins=min(l[i],mins);sum+=l[i];
//     }
//     m=max(m,sum-maxs-mins);//两个中取更大那个
// }
// int main(){
//     cin>>n>>num;
//     for (int i=1;i<=n;++i){
//         for (int j=1;j<=num;++j){
//             cin>>a[j];
//         }
//             stat(a,num);
//     }
//     printf("%.2lf",double(m/(num-2)));
//     return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;
int n1,n2;
int main(){
    // cin>>n1>>n2;int a[n1+1];int b[n2+1];
    // for (int j=1;j<=n1;++j){
    //     cin>>a[j];
    // }
    // for (int j=1;j<=n2;++j){
    //     int x,y;cin>>x>>y;
    //     int t=pow(10,x),sum=0;
    //     for( int i=1;i<=n1;++i){
    //         if (a[i]%t==y){sum++;}
    //     }
    //     b[j]=sum;
    // }
    // for (int i=1;i<=n2;++i){
    //     cout<<b[i]<<endl;
    // }

    // int num,cost;cin>>num>>cost;int a[num+1], b[num+1],remain=0;
    // for (int i=1;i<=num;++i){cin>>a[i];}
    // for (int i=1;i<=num;++i){cin>>b[i];}
    // for (int i=1;i<=num;++i){
    //     if (a[i]<b[i]){remain+=b[i]-a[i];}
    // }
    // cout<<remain*cost;

    // int n;cin>>n;int a[n+1],b[n+1];
    // for (int i=1;i<=n;++i){cin>>a[i];}
    // for (int i=1;i<=n;++i){cin>>b[i];}
    // for (int i=1;i<=n;++i){
    //     cout<<b[a[i]]<<" ";
    // }

    int x,y;cin>>x>>y;int l[x+1][y+1],jiyi[x+1][y+1];
    for (int i=1;i<=x;++i){
        for (int j=1;j<=y;++j){
            cin>>l[i][j];
        }
    }
    for (int i=1;i<=x;++i){
        for (int j=1;j<=y;++j){
            int max=0;
            for (int k=1;k<=x;++k){
                for (int m=1;m<=y;++m){
                    if (l[i][j]==l[k][m]){
                        if ((pow(fabs(i-k),2)+pow(fabs(m-j),2))>=max){
                            max=(pow(fabs(i-k),2)+pow(fabs(m-j),2));jiyi[i][j]=max;
                        }
                    }
                }
            }
        }
    }
    for (int i=1;i<=x;++i){
        for (int j=1;j<=y;++j){
            cout<<jiyi[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
