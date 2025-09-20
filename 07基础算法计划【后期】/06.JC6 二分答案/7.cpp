// #include<iostream>
// #include<cmath>
// #include<string>
// #include<cstring>
// #include<algorithm>
// using namespace std;
// long long l;int n,m;long long a[50002] = {0};
// struct dis{
//     long long ju;
//     int id;
//     bool rhed=false;
// };dis b[50003];dis c[50003];
// bool cmp(dis a,dis b){
//     if (a.ju==b.ju)return a.id<b.id;
//     return a.ju<b.ju;
// }
// int main(){
//     cin>>l>>n>>m;
//     for (int i=1;i<=n;++i){
//         cin>>a[i];
//         b[i].id=i;b[i].ju=a[i]-a[i-1];c[i].ju=b[i].ju;c[i].id=b[i].id;
//     }
//     b[n+1].id=n+1,b[n+1].ju=l-a[n];c[n+1].ju=b[n+1].ju;c[n+1].id=b[n+1].id;
//     sort(b+1,b+n+2,cmp);
//     int k=1;
//     for (int i=1;i<=m;++i){
//         while (c[b[k].id].rhed==true){
//             k++;
//         }
//         int l=b[k].id-1,r=b[k].id+1;
//         while (l!=0&&c[l].rhed==true)l--;
//         while (r!=n+2&&c[r].rhed==true)r++;
//         if (l==0){
//             b[k].ju+=c[r].ju;
//             c[b[k].id].ju+=c[r].ju;
//             c[r].rhed=true;
//         }
//         else if (r==n+2){
//             b[k].ju+=c[l].ju;
//             c[b[k].id].ju+=c[l].ju;
//             c[l].rhed=true;
//         }
//         else {
//             if (c[l].ju>=c[r].ju){
//                 b[k].ju+=c[r].ju;
//                 c[b[k].id].ju+=c[r].ju;
//                 c[r].rhed=true;
//             }
//             else{
//                 b[k].ju+=c[l].ju;
//                 c[b[k].id].ju+=c[l].ju;
//                 c[l].rhed=true;
//             }
//         }
//         k++;
//     }
//     sort(b+1,b+n+2,cmp);
//     for (int i=1;i<=n+1;++i){
//         if (c[b[i].id].rhed==false){
//             cout<<b[i].ju;break;
//         }
//     }
//     return 0;
// }

#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
long long l;int n,m;long long a[50009];
int main(){
    cin>>l>>n>>m;
    for (int i=1;i<=n;++i){
        cin>>a[i];
    }
    a[n+1]=l;n++;
    long long left=-1,right=l+1;long long res;
    while (left<=right){
        long long mid=(left+right)/2;
        int sum=0;int now=0,next=1;
        while (next<=n){
            if (a[next]-a[now]<mid){
                sum++;next++;
            }
            else {
                now=next;next++;
            }
        }
        if (sum>m){right=mid-1;}
        else if (sum<=m){left=mid+1;res=mid;}
    }
    cout<<res;
    return 0;
}