#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include <iomanip>
using namespace std;
double f(double x,int n){
    if (n==1){
        return sqrt(1+x);
    }else{
        return sqrt(n+f(x,n-1));
    }
}
int main(){
    double x;int n;cin>>x>>n;
    cout<<fixed<<setprecision(2)<<f(x,n);



    return 0;
}