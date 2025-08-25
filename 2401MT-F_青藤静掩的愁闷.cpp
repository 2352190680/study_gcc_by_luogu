
#include <iostream> // 标准输入输出流
#include <vector>    // 使用动态数组
#include <set>       // 用于统计颜色种类
#include <cmath>     // 用于计算绝对值
using namespace std;


int main() {
    // 读取网格边长 n 和操作次数 m
    int n, m;
    cin >> n >> m;
    // color[x][y] 记录每个格子的颜色，初始为 0
    vector<vector<int>> color(n + 1, vector<int>(n + 1, 0));
    // time[x][y] 记录每个格子被染色的最早时间，初始为极大值（表示未染色）
    vector<vector<int>> time(n + 1, vector<int>(n + 1, 1e9));
    // impacts 存储所有冲击事件，每个冲击包含 (i, j, c, t)：中心坐标、颜色、产生时间
    vector<tuple<int, int, int, int>> impacts; // (i, j, c, t)
    int cur_time = 0; // 当前时间（秒数，从 1 开始）
    for (int op_idx = 0; op_idx < m; ++op_idx) {
        int op;
        cin >> op; // 读取操作类型
        ++cur_time; // 每次操作时间加一
        if (op == 1) {
            // 冲击事件：读取中心坐标 (i, j) 和颜色 c
            int i, j, c;
            cin >> i >> j >> c;
            // 记录冲击事件
            impacts.push_back({i, j, c, cur_time});
            // 冲击中心格子立即染色（如果之前未被更早的冲击染色）
            if (time[i][j] > cur_time) {
                time[i][j] = cur_time;
                color[i][j] = c;
            }
        } else if (op == 2) {
            // 询问事件：统计当前网格颜色种类
            // 对所有冲击，遍历所有格子，模拟冲击传播
            for (auto &imp : impacts) {
                int ci, cj, cc, ct;
                tie(ci, cj, cc, ct) = imp; // 冲击中心坐标、颜色、产生时间
                int max_dist = cur_time - ct; // 当前冲击已传播的最大距离
                if (max_dist < 0) continue; // 冲击还未开始传播，跳过
                // 遍历所有格子，判断是否在传播范围内
                for (int x = 1; x <= n; ++x) {
                    for (int y = 1; y <= n; ++y) {
                        int d = abs(x - ci) + abs(y - cj); // 曼哈顿距离
                        // 如果在传播范围内，且该格子还未被更早的冲击染色，则更新
                        if (d <= max_dist && time[x][y] > ct) {
                            time[x][y] = ct;
                            color[x][y] = cc;
                        }
                    }
                }
            }
            // 用 set 统计所有格子的颜色种类（自动去重）
            set<int> s;
            for (int x = 1; x <= n; ++x)
                for (int y = 1; y <= n; ++y)
                    s.insert(color[x][y]);
            // 输出颜色种类数量
            cout << s.size() << '\n';
        }
    }
    return 0;
}
