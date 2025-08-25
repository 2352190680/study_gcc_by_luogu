#include <iostream>
#include<cmath>
using namespace std;
int main(){
    // int x,y;
    // cin>>x>>y;
    // int lst[x][y];
    // for (int a=1;a<=x;++a){
    //     for (int b=1;b<=y;++b){
    //         int c;
    //         cin>>c;
    //         lst[a][b]=c;
    //     }
    // }
    // int m,n;
    // cin>>m>>n;
    // cout<<lst[m][n];

    // int lst[6][6],l[6][6];
    // for (int a=1;a<=5;++a){
    //     for (int b=1;b<=5;++b){
    //         int c;
    //         cin>>c;
    //         lst[a][b]=c;}}
    // int m,n;
    // cin>>m>>n;
    // for (int a=1;a<=5;++a){
    //     l[m][a]=lst[m][a];
    //     lst[m][a]=lst[n][a];
    //     lst[n][a]=l[m][a];}
    // for(int a=1;a<=5;++a){
    //     for (int b=1;b<=5;++b){cout<<lst[a][b]<<" ";}cout<<"\n";}

    //abs无法计算浮点数的绝对值

    // int a,sum=0;cin>>a;
    // int lst[a+1][4];
    // for (int z=1;z<=a;++z){
    //     for (int b=1;b<=3;++b){
    //     int c;cin>>c;
    //     lst[z][b]=c;
    // }}
    // for (int b=1;b<=a;++b){
    //     for (int c=b+1;c<=a;++c){
    //             if ((abs(lst[b][1]-lst[c][1])<=5)&&
    //             (abs(lst[b][2]-lst[c][2])<=5)&&
    //             (abs(lst[b][3]-lst[c][3])<=5)&&
    //             (abs(lst[b][1]+lst[b][2]+lst[b][3]-(lst[c][1]+lst[c][2]+lst[c][3]))<=10))
    //             {sum++;}
    //     }
    // }
    // cout<<sum;

    // int n,x,y;cin>>n;
    // int lst[n+1][n+1];
    // for (int a=1;a<=n;++a){
    //     for(int b=1;b<=n;++b){lst[a][b]=(a,b);}
    // }
    // cin>>x>>y;
    // for (int a=1;a<=n;++a){printf(" (%d,%d) ",x,a);}
    // cout<<endl;
    // for (int a=1;a<=n;++a){printf(" (%d,%d) ",a,y);}

    int a,b;cin>>a>>b;
    for (int n=0;n<=9;n++){
        int sum=0;
        for (int m=a;m<=b;m++){int t=m;  //重中之重：此时的局部变量m无法直接放于下面的while中进行数据的运算，自设一个新变量
            while(t>0){
                if (t%10==n){sum++;}
                t=t/10;}
        }
        cout<<sum<<" ";
    }

    return 0;
}