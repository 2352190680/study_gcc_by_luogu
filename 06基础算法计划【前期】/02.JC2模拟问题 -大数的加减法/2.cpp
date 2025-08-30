#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int n,l,ci=0,a[150],fa[150];
string m;
void add(int a[],int b[]){
    for (int i=1;i<=l;++i){
        a[i]+=b[i];
        a[i+1]+=a[i]/n;
        a[i]%=n;
    }
    if (a[l+1]!=0)l++;
}
void reverse(int a[]){
    for (int i=1;i<=l;++i){
        fa[i]=a[l-i+1];
    }
};
bool pdhw(int a[]){
    for (int i=1;i<=l/2;++i){
        if (a[i]!=a[l-i+1])return false;
    }
    return true;
};
int main(){
    cin>>n>>m;l=m.length();
    if (n==16){
        for (int i=1;i<=l;++i){
            if (m[l-i]>='0'&&m[l-i]<='9')a[i]=m[l-i]-'0';
            else{
                a[i]=m[l-i]-'A'+10;
            }
        }
    }else{
        for (int i=1;i<=l;++i){
            a[i]=m[l-i]-'0';
        }
    }
    while (pdhw(a)==false){
        reverse(a);
        add(a,fa);
        ci++;
        if (ci>30)break;
    }
    if (ci>30)cout<<"impossible";
    else {
        cout<<"step="<<ci;
    }



    return 0;
}