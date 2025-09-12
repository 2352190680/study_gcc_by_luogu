#include <iostream>
#include<stack>
using namespace std;
long long n;
string s;
stack<char>a;
int main() {
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        if (a.empty()){
            a.push(s[i]);
        }else{
            if (a.size()==1){
                if (s[i]=='o'){
                    if (a.top()=='o'){
                        a.pop();a.push('O');
                    }else{
                        a.push(s[i]);
                    }
                }else{
                    if (a.top()=='O'){
                        a.pop();
                    }else{
                        a.push(s[i]);
                    }                    
                }
            }else{
                if (s[i]=='o'){
                    if (a.top()=='o'){
                        a.pop();
                        if (a.top()!='O')a.push('O');
                        else a.pop();
                    }else{
                        a.push(s[i]);
                    }
                }else if(s[i]=='O'){
                    if (a.top()=='O'){
                        a.pop();
                    }else{
                        a.push(s[i]);
                    }                    
                }
            }
        }
    }
    if (a.size()==0){
        return 0;
    }else{
        int len=a.size();
        char str[len+2];
        for (int i=len-1;i>=0;--i){
            str[i]=a.top();
            a.pop();
        }
        for (int i=0;i<len;++i){
            cout<<str[i];
        }
    }
}