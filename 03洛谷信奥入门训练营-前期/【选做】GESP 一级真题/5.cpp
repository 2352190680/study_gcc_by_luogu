#include<iostream>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    for (int i=1;i<=a;++i){
        if (i%b==0)continue;
        else cout<<i<<endl;
    }

    return 0;
}