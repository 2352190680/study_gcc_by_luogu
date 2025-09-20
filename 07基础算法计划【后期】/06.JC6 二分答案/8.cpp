#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
std::map<int,int>m;//有点像字典，前者是键（索引），后者是值
typedef std::map<int,int>::iterator a;
using namespace std;
int n;int maxa=100001;
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        int b;cin>>b;
        m[b]++;
    }
    while(!m.empty()){
        a i=m.begin(),j=m.begin();
        (*i).second--;
        int t=1;//长度
        for (++j;j!=m.end()&&(*j).first==(*i).first+1&&(*j).second>(*i).second;++i,++j){
            t++;
            (*j).second--;
        }
        i=m.begin();
        while (i!=m.end()&&(*i).second==0){//检查是否已经分完，清除该键值
            m.erase((*i++).first);
        }
        if (t<maxa){//检测最小的组的长度
            maxa=t;
        }
    }
    cout<<maxa;
    return 0;
}