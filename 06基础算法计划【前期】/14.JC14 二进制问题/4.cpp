//波浪数
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int l,r;cin>>l>>r;int L,R,k;cin>>L>>R>>k;

    for (int i=L;i<=R;++i){
        int n=0;
        for (int j=l;j<=r;++j){
            //如果连j都小（意味着一位数），那么后面的肯定都小（都为一位数），所以直接加上然后结束循环，减少运算
            if (i<j){
                n+=(r-j+1);
                break;
            }
            else{
                int t=i;
                string s;
                bool pd=true;

                //拆分数字->字符串（存在进制大于10的情况）
                while (t!=0){
                    if (t%j<10){
                        s+=t%j-'0';
                    }
                    else{
                        s+=t%j+'a'-10;
                    }
                    int len=s.length();
                    if (len>=2){
                        if (s[len-1]==s[len-2]){
                            pd=false;break;
                        }
                        if (len>=3){
                            if (s[len-1]!=s[len-3]){
                                pd=false;break;
                            }
                        }
                    }
                    t/=j;
                }
                //满足波浪数加1；
                if (pd==true){
                    n++;
                }

                //判断剩余数和目前的n，减少运算
                if (n>k||r-j<k-n){
                    break;
                }
            }
        }
        if (n==k){
            cout<<i<<endl;
        }
    }
    return 0;
}