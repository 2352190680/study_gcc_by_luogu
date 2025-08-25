#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
    // int n;cin>>n;
    // string a;cin>>a;int l=a.length();bool pd=true;
    // if (l%2==0){
    //     for (int i=0;i<l/2;++i){
    //         if (tolower(a[i])!=tolower(a[l-i-1]))pd=false;
    //     }
    // }
    // else if (l%2==1){
    //     for (int i=0;i<(l-1)/2;++i){
    //         if (tolower(a[i])!=tolower(a[l-i-1]))pd=false;
    //     }
    // }
    // if (pd==true)cout<<"yes";
    // else cout<<"no";

    // int n;cin>>n;int l[n+1][3];string a[n+2];
    // for (int i=1;i<=n;++i){
    //     cin>>l[i][1]>>l[i][2]>>a[i];
    // }
    // for (int i=1;i<=n-1;++i){
    //     for (int j=i+1;j<=n;++j){
    //         if ((1.0*l[i][1]/l[i][2]>1.0*l[j][1]/l[j][2])||(1.0*l[i][1]/l[i][2]==1.0*l[j][1]/l[j][2])&&(a[i]>a[j])){
    //             int x,y;x=l[i][1],y=l[i][2];l[i][1]=l[j][1];l[i][2]=l[j][2];l[j][1]=x;l[j][2]=y;
    //             string z;z=a[i];a[i]=a[j];a[j]=z;
    //         }
    //     }
    // }
    // for (int i=1;i<=n;++i){
    //     cout<<a[i]<<endl;
    // }

    string a;cin>>a;int x=0,y=0,z=0;int l=a.length();int max1=0,max2=0,max3=0;
    for (int i=0;i<l;++i){
        if (a[i]=='a'){
            x++;
            if (x>=max1){
                max1=x;
            }
        }else x=0;
        if (a[i]=='A'){
            y++;
            if (y>=max2){
                max2=y;
            }
        }else y=0;
        if (tolower(a[i])=='a'){
            z++;
            if (z>=max3){
                max3=z;
            }
        }else z=0;
    }
    cout<<max1<<" "<<max2<<" "<<max3;

    return 0;
}