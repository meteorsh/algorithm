#include <iostream>

using namespace std;

const int N = 1007;

int f[N][N];

int main() {
    int n, m;
    cin >> n >> m;

    string a, b;
    cin >> a >> b;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                f[i][j] = f[i - 1][j - 1] + 1;
            } else {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }

    cout << f[n][m] << endl;

    return 0;
}