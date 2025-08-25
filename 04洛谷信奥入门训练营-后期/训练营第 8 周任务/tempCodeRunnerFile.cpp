   int x, y, n;
    cin >> x >> y >> n;
    int l[x + 1][y + 1];
    int globalmin = -1;
    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= y; ++j) {
            cin >> l[i][j];
        }
    }
    for (int i = 1; i + n - 1 <= x; ++i) {
        for (int j = 1; j + n - 1 <= y; ++j) {   //生成一个坐标
            int min = 100, max = 0;
            for (int q = i; q <= i + n - 1; ++q) {
                for (int p = j; p <= j + n - 1; ++p) {    //小正方形
                    if (l[q][p] >= max) max = l[q][p];
                    if (l[q][p] <= min) min = l[q][p];
                }
            }
            if ((max - min) >= globalmin) {
                globalmin = max - min;
            }
        }
    }
    cout << globalmin;
