#include<iostream>
using namespace std;
int main(){
    int s;cin>>s;int sum=0;
    for (int i=1;i*i<=s;++i){
        if (s%i==0)sum++;
    }
    cout<<sum;

    return 0;
}