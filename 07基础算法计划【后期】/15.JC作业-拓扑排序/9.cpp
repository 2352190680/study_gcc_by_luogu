#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n,m;
int degree[30];
int degree_extra[30];
char da[30][30];
bool p[30];
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        string s;cin>>s;int cnt=0;
        int a=s[0]-'A'+1,b=s[2]-'A'+1;
        if (a==b){
            for (int j=i+1;j<=m;++j){
                string ss;cin>>ss;
            }
            printf("Inconsistency found after %d relations.",i);
            exit(0);   
        }
        p[a]=1,p[b]=1;
        if(!da[a][b]){
            degree[b]++;da[a][b]=1;
            degree_extra[b]=degree[b];
        }


        //检查是否成环（最优先）
        string str;
        queue<int>q;
        for (int j=1;j<=n;++j){
            degree_extra[j]=degree[j];
            if (!degree[j]&&p[j]){
                q.push(j);
            }
            if (p[j])cnt++;
        }
        if (q.empty()){
            for (int j=i+1;j<=m;++j){
                string ss;cin>>ss;
            }
            printf("Inconsistency found after %d relations.",i);
            exit(0);           
        }
        int num=0;

        bool unique=1;//是否唯一//重点，有效避免用开端和末端方法

        while(!q.empty()){
            if(q.size()>1)unique=0;
            //由于是入度满了才会进队列，可以防止深度相同而并未比较得出大小的情况，非常巧妙
            int t=q.front();q.pop();
            num++;
            bool pd=false;//判断末端

            str+=t+'A'-1;
            for (int j=1;j<=n;++j){
                if (da[t][j]){
                    pd=true;
                    degree_extra[j]--;
                    if (!degree_extra[j]){
                        q.push(j);
                    }
                }
            }
        }
        if (num!=cnt){
            for (int j=i+1;j<=m;++j){
                string ss;cin>>ss;
            }
            printf("Inconsistency found after %d relations.",i);
            exit(0);              
        }

        if (cnt==n&&str.size()==n&&unique){//全部提及且为不成环
            for (int j=i+1;j<=m;++j){
                string ss;cin>>ss;
            }
            printf("Sorted sequence determined after %d relations: %s.",i,str.c_str());
            exit(0);
        }
    }
    cout<<"Sorted sequence cannot be determined.";
    return 0;
}
/*
5 8
A<C
A<D
C<D
C<B
A<A
B<E
D<E
B<C
*/