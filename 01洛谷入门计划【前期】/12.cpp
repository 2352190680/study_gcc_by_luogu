#include<iostream>
using namespace std;
#include<cmath>
#include<vector>
int main (){
    // int n,k,c;
    // cin>>n>>k;
    // c=n;
    // while(n>=k){
    //     int d=0;
    //     c+=(n/k);
    //     d=(n/k);
    //     n=(n%k);
    //     n+=d;
    // }
    // cout<<c;

    // int a;
    // cin>>a;
    // if(a>0){
    //     for(int b=1;b<=a;++b){
    //         if (b<=a){cout<<b<<endl;a-=b;}
    //         else break;
    //     }}

    // int n,r,c=0;
    // cin>>n>>r;
    // for(int x=1;x<=n;++x){
    //     int k,p;
    //     cin>>k>>p;
    //     if(p<=r){
    //         if (k>c)c=k;
    //     }
    // }
    // cout<<c;

    // int n,x,sum=0;
    // cin>>n>>x;
    // for(int a=1;a<=n;++a){
    //     int b;
    //     cin>>b;
    //     if(b%x==0)sum+=b;
    // }
    // cout<<sum;

    // int p,x1,y1,x2,y2;
    // cin>>p>>x1>>y1>>x2>>y2;
    // if (p==1){
    //     if (x1==x2||y1==y2)cout<<"YES";
    //     else cout<<"NO";
    // }
    // if (p==2)cout<<"NO";
    // if (p==3){
    //     if ((x1==x2+2&&y1==y2+1)||(x1==x2+2&&y1==y2-1)||(x1==x2-2&&y1==y2+1)||(x1==x2-2&&y1==y2-1)||(x1==x2+1&&y1==y2+2)||(x1==x2+1&&y1==y2-2)||(x1==x2-1&&y1==y2+2)||(x1==x2-1&&y1==y2-2))cout<<"YES";
    //     else cout<<"NO";
    // }
    // if (p==4){
    //     if ((x1==x2+2&&y1==y2+2)||(x1==x2+2&&y1==y2-2)||(x1==x2-2&&y1==y2+2)||(x1==x2-2&&y1==y2-2))cout<<"YES";
    //     else cout<<"NO";
    // }

    // int n;
    // cin>>n;
    // for(int a=1;a<=n;++a){
    //     for(int b=1;b<=a;++b)cout<<a<<"**"<<b<<"="<<pow(a,b)<<" ";
    //     cout<<endl;
    // }

    // int t;
    // cin>>t;
    // // 储存结果
    // vector<string>results;
    // for (int a=1;a<=t;a++){
    //     int c;
    //     cin>>c;
    //     bool f=false;
    //     for (int d=1;d<=c;d++){
    //         int e;
    //         cin>>e;
    //         if (e==0){f=true;}}
    //     results.push_back(f?"yes":"no");}
    // for (const string& res:results){cout<<res<<endl;}

    // int t;
    // cin>>t;
    // for (int a=1;a<=t;++a){
    //     int sum=0;
    //     for (int b=1;b<=a;++b){
    //         sum+=b;
    //     }
    //     cout<<sum<<"\n";
    // }

    // int a,b,sum=0;
    // cin>>a>>b;
    // for (int c=1;c<=a;++c){
    //     int d;
    //     cin>>d;
    //     if (c==b){d=-d;}
    //     sum+=d;
    // }
    // cout<<sum;

    // int e,d=0;
    // for (int a=1;a<=7;++a){
    //     int b,c;
    //     cin>>b>>c;
    //     if (b+c>d){d=b+c;e=a;}
    // }
    // cout<<e;

    // int a;
    // double sum=0;
    // cin>>a;
    // for (int b=1;b<=a;++b){
    //     double c,d;
    //     cin>>c>>d;
    //     sum=sum+c*d*0.85;
    // }
    // printf("%.1lf",(sum-0.05));

    int a,sum1=0,sum2=0,sum3=0;
    cin>>a;
    for (int b=1;b<=a;++b){
        int c;
        cin>>c;
        if (c>=80){sum1+=1;}
        else if (c>=60){sum2+=1;}
        else {sum3+=1;}
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3;
    return 0;
}