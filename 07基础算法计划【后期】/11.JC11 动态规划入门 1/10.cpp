//P1020 [NOIP 1999 提高组] 导弹拦截
#include<iostream>
#include<vector>
using namespace std;
int a[100005];
vector<int>b;
vector<int>c;
int main(){
    int n;int ge=0;
    while(cin>>n){
        a[++ge]=n;
    }
    for (int i=1;i<=ge;++i){
        int left=0,right=b.size()+1;
        while(left+1<right){
            int mid=(left+right)/2;
            if (a[i]<=b[mid-1]){
                left=mid;
            }
            else{
                right=mid;
            }
        }
        if (right>b.size())b.push_back(a[i]);
        else b[right-1]=a[i];
    }
    cout<<b.size();
    cout<<endl;
    for (int i=1;i<=ge;++i){
        int left=0,right=c.size()+1;
        while(left+1<right){
            int mid=(left+right)/2;
            if (a[i]>c[mid-1]){
                left=mid;
            }
            else{
                right=mid;
            }
        }
        if (right>c.size())c.push_back(a[i]);
        else c[right-1]=a[i];
    }
    cout<<c.size();   
    return 0;
}