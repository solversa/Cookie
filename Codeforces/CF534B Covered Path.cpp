#include <bits/stdc++.h>
using namespace std;

int main() {
    int v1, v2, t, d;
    while (cin >> v1 >> v2 >> t >> d) {
        int ans = 0;
        for (int i = 0; i < t; ++i) {
            ans += min(v1 + i * d, v2 + (t - i - 1) * d);
        }
        cout << ans << endl;
    }
    return 0;
}
