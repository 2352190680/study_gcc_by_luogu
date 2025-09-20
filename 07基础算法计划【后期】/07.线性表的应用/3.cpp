#include <bits/stdc++.h> 
using namespace std;
int nxt[1000010], q;
void insert(int x, int y) { 
    nxt[y]=nxt[x];nxt[x]=y;
}
void remove(int x) {
    int a=nxt[x];
    if (a!=0){
        nxt[x]=nxt[a];
    }
}
int main() {
    cin >> q;
    while(q--) {
        int opr, x, y;
        cin >> opr;
        if(opr == 1) {
            cin >> x >> y;
            insert(x, y);
        } else if(opr == 2) {
            cin >> x;
            cout <<nxt[x]<<endl;
        } else {
            cin >> x;
            remove(x);
        }
    }
    return 0;
}