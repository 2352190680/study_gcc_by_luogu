//队列手绘
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int l;int n;int q[10001];int r;int a[10001],b[10001];
void push(int x){
    q[r]=x;r++;
}
void pop (){
    if (l<r){l++;}
    else cout<<"ERR_CANNOT_POP"<<endl;
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>a[i];
        if (a[i]==1){
            cin>>b[i];
        }
    }
    for (int i=1;i<=n;++i){
        if (a[i]==1){
            int k=b[i];
            push(k);
        }
        else if (a[i]==2){
            pop();
        }
        else if (a[i]==3){
            if (r==l){
                cout<<"ERR_CANNOT_QUERY"<<endl;
            }     
            else cout<<q[l]<<endl;     
        }
        else if (a[i]==4){
            cout<<r-l<<endl;
        }
    }
    return 0;
}