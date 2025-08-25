#include<iostream>
#include<string>
using namespace std;
// string del(string s){
//     int l=s.size();
//     if(s.substr(l-2,2)=="er")return s.substr(0,l-2);
//     if(s.substr(l-2,2)=="ly")return s.substr(0,l-2);
//     if(s.substr(l-3,3)=="ing")return s.substr(0,l-3);
//     return s;
// }
// int shu(int x){
//     int ge=x%10;
//     int shi=x/10%10;
//     int bai=x/100%10;
//     int qian=x/1000;
//     if (ge-qian-bai-shi>0)return 1;
//     else return 0;
// }
int main(){
    // string s;cin>>s;
    // cout<<del(s);

    // int n,sum=0;cin>>n;int l[n+1];
    // for(int i=1;i<=n;i++){
    //     cin>>l[i];
    // }
    // for(int i=1;i<=n;i++){
    //     int m=shu(l[i]);
    //     if (m==1)sum++;
    // } 
    // cout<<sum; 
    
    // int l,s,t;cin>>l>>s>>t;
    // for (int i=1;i<=t;++i){
    //     cout<<i*s%l<<endl;
    // }

    int n,ren=0;cin>>n;int l[n+1];double sum=0;
    for (int i=1;i<=n;++i){
        cin>>l[i];ren+=l[i];sum+=i*l[i];
    }
    printf("%.2lf",sum/ren);

    return 0;
}