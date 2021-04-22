#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <list>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <sstream>
#include <cmath>
using namespace std;

int dp[50001][500], w[100][100], pre[100], d[100];
bool b[100];
int k = 0;
int main()
{
    int n, jj, mx = 0x3f;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> dp[i][0];
    }
    for(int j = 1; (1 << j) <= n; j++){
        for(int i = 1; i + (1 << j) - 1<= n; i++){
            dp[i][j] = min(dp[i][j - 1], dp[i + (1 << (j - 1))][j - 1]);
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    for(jj = 0; (1 << jj) <= n; jj++){
        n -= (1 << jj);
        cout << n << endl;
    }
    for(int i = 1; i <= n; i++){
        mx = min(mx, dp[i][jj]);
    }
    cout << mx << endl;
    return 0;
}
