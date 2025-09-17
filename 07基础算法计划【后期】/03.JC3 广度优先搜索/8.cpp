#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
int n;char s[105][105];int vis[105][105];const char ck[9]="*yizhong";int jl[8][3];int teshu[105][105];
void dfs(int i,int j,int num,int p){
    if (num==8){
        for (int i=1;i<=7;++i){
            teshu[jl[i][1]][jl[i][2]]=1;
        }
        return;
    }
    if (s[i][j]==ck[num]){
        jl[num][1]=i,jl[num][2]=j;
    }else{
        return;
    }
    if (p==0){
        if (vis[i+1][j]!=1){vis[i+1][j]=1;dfs(i+1,j,num+1,1);vis[i+1][j]=0;}
        if (vis[i-1][j]!=1){vis[i-1][j]=1;dfs(i-1,j,num+1,2);vis[i-1][j]=0;}
        if (vis[i][j+1]!=1){vis[i][j+1]=1;dfs(i,j+1,num+1,3);vis[i][j+1]=0;}
        if (vis[i][j-1]!=1){vis[i][j-1]=1;dfs(i,j-1,num+1,4);vis[i][j-1]=0;}
        if (vis[i+1][j+1]!=1){vis[i+1][j+1]=1;dfs(i+1,j+1,num+1,5);vis[i+1][j+1]=0;}
        if (vis[i+1][j-1]!=1){vis[i+1][j-1]=1;dfs(i+1,j-1,num+1,6);vis[i+1][j-1]=0;}
        if (vis[i-1][j+1]!=1){vis[i-1][j+1]=1;dfs(i-1,j+1,num+1,7);vis[i-1][j+1]=0;}
        if (vis[i-1][j-1]!=1){vis[i-1][j-1]=1;dfs(i-1,j-1,num+1,8);vis[i-1][j-1]=0;}
    }
    else if (p==1){
        if (vis[i+1][j]!=1||num==7){vis[i+1][j]=1;dfs(i+1,j,num+1,1);vis[i+1][j]=0;}
    }
    else if (p==2){
        if (vis[i-1][j]!=1||num==7){vis[i-1][j]=1;dfs(i-1,j,num+1,2);vis[i-1][j]=0;}
    }
    else if (p==3){
       if (vis[i][j+1]!=1||num==7){vis[i][j+1]=1;dfs(i,j+1,num+1,3);vis[i][j+1]=0;}
    }
    else if (p==4){
        if (vis[i][j-1]!=1||num==7){vis[i][j-1]=1;dfs(i,j-1,num+1,4);vis[i][j-1]=0;}
    }
    else if (p==5){
        if (vis[i+1][j+1]!=1||num==7){vis[i+1][j+1]=1;dfs(i+1,j+1,num+1,5);vis[i+1][j+1]=0;}
    }
    else if (p==6){
        if (vis[i+1][j-1]!=1||num==7){vis[i+1][j-1]=1;dfs(i+1,j-1,num+1,6);vis[i+1][j-1]=0;}
    }
    else if (p==7){
        if (vis[i-1][j+1]!=1||num==7){vis[i-1][j+1]=1;dfs(i-1,j+1,num+1,7);vis[i-1][j+1]=0;}
    }
    else if (p==8){
        if (vis[i-1][j-1]!=1||num==7){vis[i-1][j-1]=1;dfs(i-1,j-1,num+1,8);vis[i-1][j-1]=0;}
    }
}
int main(){
    cin>>n;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            cin>>s[i][j];
            if (s[i][j]!='y'&&s[i][j]!='i'&&s[i][j]!='z'&&s[i][j]!='h'&&s[i][j]!='o'&&s[i][j]!='n'&&s[i][j]!='g'){
                vis[i][j]=1;
            }
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            if (vis[i][j]!=1){
                vis[i][j]=1;
                dfs(i,j,1,0);
                vis[i][j]=0;
            }
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            if (teshu[i][j]==1){
                cout<<s[i][j];
            }
            else{
                cout<<'*';
            }
        }
        cout<<endl;
    }
    return 0;
}