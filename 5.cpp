#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn=1e3+5;
const LL inf=1e12;
int n,m;
LL a[maxn][maxn],f[maxn][maxn],s[maxn][maxn],rMAX[maxn];
int main()
{
	//freopen("number.in","r",stdin);
	//freopen("number.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i) for(int j=1;j<=m;++j)
	{
		scanf("%lld",&a[i][j]);
		s[i][j]=s[i-1][j]+a[i][j];
	}
	for(int i=1;i<=n;++i) f[i][1]=s[i][1];
	if(n*n*m<=1e7) NsquareM();
	else ();
	return 0;
}
