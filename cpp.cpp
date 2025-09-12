#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
bool cmp(long long x, long long y){
    return x > y;
}
int main() {
    int q;cin>>q;long long l[q+1];memset(l, 0, sizeof(l));int len=0;
    long long a[q+1][4];
    for (int i=1;i<=q;++i){
        cin>>a[i][1];
        if (a[i][1]==1){
            cin>>a[i][2];
            len++;
            l[len]=a[i][2];
        }
        else if (a[i][1]==2){
            len--;
        }
        else if(a[i][1]==3){
            cin>>a[i][2];
            cout<<l[a[i][2]]<<endl;
        }
        else if(a[i][1]==4) {
            cin>>a[i][2]>>a[i][3];
            len++;
            for (int j=len;j>a[i][2];--j){
                l[j]=l[j-1];
            }
            l[a[i][2]]=a[i][3];
        }
        else if(a[i][1]==5){
            sort(l+1,l+len+1);
        }
        else if(a[i][1]==6){
            sort(l+1,l+len+1,cmp);
        }
        else if(a[i][1]==7){
            cout<<len<<endl;
        }
        else{
            for (int j=1;j<=len;++j){
                cout<<l[j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
