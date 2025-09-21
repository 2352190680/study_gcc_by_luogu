#include<bits/stdc++.h>
using namespace std;
vector<int>l(100009);//数组，给录入的数字放进对应的桶
int main(){
    int q;cin>>q;
    for (int i=1;i<=q;++i){
        int n;cin>>n;int a[n+1]={0};
        bool p=true;
        for (int j=1;j<=n;++j){
            int t;cin>>t;
            l[t]=j;//输入栈，标定顺序
        }
        for (int j=1;j<=n;++j){
            int t;cin>>t;//输出的
            if (l[t]==0){
                p=false;
            }
            else{
                a[j]=l[t];//记录编号
            }
        }
        if (p==true){
            int max=a[1],min=a[1];int maxs=1,mins=1;//max，min那个数所在的位置
            for (int j=2;j<=n;++j){
                if (j!=2&&a[j]<max&&a[j]>min&&maxs<mins){
                    p=false;break;
                }
                if (a[j]>max){max=a[j];maxs=j;}
                if (a[j]<min){min=a[j];mins=j;}
                //编号比较，注意点：我们不能容忍的是什么--数字大的编号小于数字小的编号    如（进去的编号）3 1 2，显然这是不成立的，第1个怎么能在2前出去呢，
            }
        }
        if (p==false){
            cout<<"No";
        }
        else{
            cout<<"Yes";
        }
        cout<<endl;
        l.clear();
        l.resize(100009); //清空，为下一组判断做准备
    }
    return 0;
}