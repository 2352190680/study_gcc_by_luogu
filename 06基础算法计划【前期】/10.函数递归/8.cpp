#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
string jieya(){
    int n;
    string a="",b="";char input;
    while(cin>>input){
        if (input=='['){
            cin>>n;
            a=jieya();
            while(n--){
                b+=a;
            }
        }
        else if (input==']'){
            return b;
        }
        else{
            b+=input;
        }
    }
    return b;
}
int main(){
    cout<<jieya();
    return 0;
}