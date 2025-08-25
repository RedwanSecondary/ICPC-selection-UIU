#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        long long a;
        unsigned long long b;
        cin >> a >> b;

        unsigned long long a2 = 1LL * a * a;
        unsigned long long a4 = a2 * a2;
        unsigned long long b2 = b * b;
        unsigned long long lhs = a4 + 4 * b2;
        unsigned long long rhs = 4 * a2 * b;
        if (lhs == rhs) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
