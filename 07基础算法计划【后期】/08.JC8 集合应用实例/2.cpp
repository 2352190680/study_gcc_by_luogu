#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
map<string,int>a;int n;
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        int x;cin>>x;
        if (x==1){
            string s;cin>>s;int score;cin>>score;
            a[s]=score;
            cout<<"OK";
        }
        else if (x==2){
            string s;cin>>s;
            if (a.find(s)!=a.end()){
                cout<<a[s];
            }else{
                cout<<"Not found";
            }
        }
        else if (x==3){
            string s;cin>>s;
            if (a.find(s)!=a.end()){
                cout<<"Deleted successfully";
                a.erase(s);
            }else{
                cout<<"Not found";
            }            
        }
        else{
            cout<<a.size();
        }
        cout<<endl;
    }


    return 0;
}