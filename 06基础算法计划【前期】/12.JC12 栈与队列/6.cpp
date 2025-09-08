#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<stack>
using namespace std;
long long n;stack<int>s;long long a[500001][4];
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i][1];
        if (a[i][1]==1)cin>>a[i][2]>>a[i][3];
        else if (a[i][1]==2)cin>>a[i][2];
    }
    for (int i=1;i<=n;++i){
        if (a[i][1]==1){
            s.push(a[i][2]);
            s.push(a[i][3]);//很妙，不用存多个数据也能处理；原因：数字加一的规律性
        }
        else if (a[i][1]==2){
            long long sum=0;//注意k<=10e12,sum的类型要设为long long
            while (a[i][2]!=0){
                long long x=s.top();s.pop();int y=s.top();
                if (a[i][2]>=x-y+1){
                    s.pop();a[i][2]=a[i][2]-(x-y+1);sum+=(x+y)*(x-y+1)/2;
                }
                else{
                    sum+=(x+x-a[i][2]+1)*a[i][2]/2;s.push(x-a[i][2]);a[i][2]=0;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}