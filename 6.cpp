#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[100001];
bool check(int x){//判断函数，表示的是能否访问到x个路标
	for(int r=x;r<=n;r++){//枚举右端点
		int l=r-x+1;
		if(a[r]<=0)//如果右端点在原点左边，就要一直向左走
		    if(-a[l]<=t)return 1;//根据题意判断即可，可以就直接返回true
		if(a[l]>=0)//如果左端点在原点右边，就要一直向右走
		    if(a[r]<=t)return 1;//同上
		if(a[l]<=0&&a[r]>=0)//如果这段区间横跨了原点
		    if(min(a[r],-a[l])+a[r]-a[l]<=t)return 1;//那么我一定是先去距离原点短的那一边，再走到另一边
	}
	return 0;//如果整个循环执行完，没有找到可行解，那就返回false
}
int main(){
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	    cin>>a[i];
	sort(a+1,a+1+n);//给所有路标位置排序
	int l=-1,r=n+1;//由于能访问的路标数量可能为0~n，所以把左边界设为1，右边界设为n+1，就可以保证二分到所有解
	while(l+1<r){//这里写l+1<r是为了防止最后l,r出现交叉的情况，即l>r
		int mid=(l+r)>>1;
		if(check(mid))l=mid;
		else r=mid;
        //更新l,r的值时写mid而不是mid+1或mid-1，也是为了防止最后l>r
	}
	cout<<l<<endl;
	return 0;//Happy ending~
} 
