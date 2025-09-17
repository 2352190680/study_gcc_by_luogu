#include <bits/stdc++.h>
using namespace std;
int vis[35][35];
int h[905][4],n;
int tag[35][35];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool bfs(int x,int y){
	int head=0,tail=1;
	h[1][1]=x,h[1][2]=y;
	
//	cout << "--" << tag[x][y] << " " << x << " " << y <<endl;
	memset(tag,0,sizeof(tag));
	tag[x][y]=2;bool pd=true;
	do{
		head++;
		for(int i=0;i<4;i++){
			int xx=h[head][1]+dx[i];
			int yy=h[head][2]+dy[i];
//			cout << xx << " " <<yy << endl;
			if(xx>=n || xx<0 || yy>=n || yy<0){	 
				pd=false;continue;
			}
			if(vis[xx][yy]==0){
				tail++;
				h[tail][1]=xx;
				h[tail][2]=yy;
				tag[xx][yy]=2;
				vis[xx][yy]=3;
			}
		}
	}while(head < tail);
	if (pd==false)return false;
    else return true;
}
int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> vis[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(vis[i][j]==0){
				int s = bfs(i,j);
				if(s==true){
					//cout << "----" << endl;
//					cout << "~~~" <<tag[1][1] << endl;
					for(int x=0;x<n;x++){
						for(int y=0;y<n;y++){
							if(tag[x][y]==2){
//								cout << "---" << x << " " << y;
//								cout << endl;
								vis[x][y]=2;
							}
						}
					}
				}
				
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(vis[i][j]==1)
				cout <<  "1 ";
			else if(vis[i][j]==2){
				cout << "2 ";
			}
			else cout << "0 ";
		}
		cout << endl;
	}
	return 0;
}
