#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int num,n;cin>>num>>n;string title[n+1],answer[num+1][n+2];
    for (int i=0;i<n;++i)cin>>title[i];
    for (int i=0;i<num;++i){
        for (int j=0;j<n+1;++j){
            cin>>answer[i][j];
        }
    }
    for (int i=0;i<num;++i){
        for (int j=1;j<=n;++j){
            if (answer[i][0]+".zip/"+answer[i][0]+"/"+title[j-1]+"/"+title[j-1]+".cpp"==answer[i][j])cout<<"good"<<endl;
            else{cout<<"no"<<endl;}
        }
    }




    return 0;
}