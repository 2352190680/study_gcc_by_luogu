  int m,n;cin>>m>>n;vector<vector<int>> a(m+2, vector<int>(n+2, 0));
    a[1][1]=1;
    for (int i=1;i<=m+1;++i){
        for (int j=1;j<=n+1;++j){
            if (i==1&&j==1)continue;
            if (j>=3&&i>=2)a[i][j]+=a[i-1][j-2];
            if (j>=3&&i<=m)a[i][j]+=a[i+1][j-2];
            if (j>=2&&i>=3)a[i][j]+=a[i-2][j-1];
            if (j>=2&&i<=m-1)a[i][j]+=a[i+2][j-1];
        }
    }
    cout<<a[m+1][n+1];
    cout<<a[m+1][n+1];