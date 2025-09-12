#include <string>
#include<iostream>
#include <stack>
using namespace std;
int main(){
        string str;cin>>str;
        stack<long long>a;
        int len=str.length();
        for (int i=0;i<len;++i){
            if (str[i]<='9'&&str[i]>='0'){
                if (i!=0){
                    if (str[i-1]<='9'&&str[i-1]>='0'){
                        long long t=a.top();a.pop();t*=10;
                        long long tt=str[i]-'0';tt+=t;
                        a.push(tt);
                    }else{
                        a.push(str[i]-'0');
                    }
                }
                else{
                    a.push(str[i]-'0');
                }
            }
            else if (str[i]=='+'){
                long long n=a.top();a.pop();
                long long m=a.top();a.pop();
                long long c=n+m;
                a.push(c);
            }
            else if (str[i]=='-'){
                long long n=a.top();a.pop();
                long long m=a.top();a.pop();
                long long c=m-n;
                a.push(c);
            }
            else if (str[i]=='*'){
                long long n=a.top();a.pop();
                long long m=a.top();a.pop();
                long long c=n*m;
                a.push(c);
            }
        }
        cout<< a.top();
    }