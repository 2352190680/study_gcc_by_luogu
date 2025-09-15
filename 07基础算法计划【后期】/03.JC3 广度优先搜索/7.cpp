#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#include<set>
using namespace std;
int n,m,x1,y11,x2,y2;
int lst[20][20];

struct State {
    int x, y;
    vector<pair<int,int>> path;
    State(int ax, int ay, vector<pair<int,int>> pth) : x(ax), y(ay), path(std::move(pth)) {}
};

void bfs(int sx, int sy) {
    queue<State> q;
    set<vector<pair<int,int>>> all_paths;
    q.push(State(sx, sy, {{sx, sy}}));
    while (!q.empty()) {
        State cur = q.front(); q.pop();
        int x = cur.x, y = cur.y;
        if (x < 1 || x > n || y < 1 || y > m) continue;
        if (lst[x][y] == 0) continue;
        if (x == x2 && y == y2) {
            all_paths.insert(cur.path);
            continue;
        }
        const int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
        for (int d = 0; d < 4; ++d) {
            int nx = x + dx[d], ny = y + dy[d];
            // 判断是否已经在路径中，避免环路
            bool in_path = false;
            for (auto &p : cur.path) {
                if (p.first == nx && p.second == ny) {
                    in_path = true; break;
                }
            }
            if (!in_path) {
                auto next_path = cur.path;
                next_path.push_back({nx, ny});
                q.push(State(nx, ny, std::move(next_path)));
            }
        }
    }
    // 输出所有不重复路径，按字典序
    for (const auto& path : all_paths) {
        for (size_t i = 0; i < path.size(); ++i) {
            printf("(%d,%d)", path[i].first, path[i].second);
            if (i + 1 < path.size()) cout << "->";
        }
        cout << endl;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> lst[i][j];
    cin >> x1 >> y11 >> x2 >> y2;
    bfs(x1, y11);
    return 0;
}