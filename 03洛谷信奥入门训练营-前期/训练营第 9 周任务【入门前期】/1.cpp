#include<iostream>
using namespace std;
int main(){
    // int a,b,c;scanf("%d.%d.%d",&a,&b,&c);
    // printf("%02d%%%02d%%%02d",a,b,c);

    // int a,b;cin>>a>>b;double c=a,w=100-a,sum=0;
    // while (c<b){
    //     sum++;w=w*0.9;c=a/(a+w)*100;
    // }
    // cout<<sum;

    // int n,a,max=0;cin>>n>>a;int l[n+1];
    // for (int i=1;i<=n;++i){
    //     cin>>l[i];
    // }
    // for (int i=1;i<=n;++i){
    //     int sum=0;
    //     sum+=l[i];
    //     for (int j=i+1;j<=n;++j){
    //         sum+=l[j];
    //         if (sum>=max){
    //             if (sum<=a){
    //                 max=sum;
    //             }
    //         }
    //     }
    // }
    // cout<<max;

    double a,b,c,d,e;cin>>a>>b>>c>>d>>e;
    double v1,v2,v3,v4,v5,v6;cin>>v1>>v2>>v3>>v4>>v5>>v6;
    double n;cin>>n;
    if (n<=a){
        printf("%.4lf",v1*a);
    }
    else if(n>a&&n<=b){
        printf("%.4lf",v1*a+(n-a)*v2);
    }
    else if(n>b&&n<=c){
        printf("%.4lf",v1*a+(b-a)*v2+v3*(n-b));
    } 
    else if(n>c&&n<=d){
        printf("%.4lf",v1*a+(b-a)*v2+v3*(c-b)+v4*(n-c));
    }
    else if(n>d&&n<=e){
        printf("%.4lf",v1*a+(b-a)*v2+v3*(c-b)+v4*(d-c)+v5*(n-d));
    }   
    else if(n>e){
        printf("%.4lf",v1*a+(b-a)*v2+v3*(c-b)+v4*(d-c)+v5*(e-d)+v6*(n-e));
    }   
    return 0;
}