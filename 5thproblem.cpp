#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        int N;
        cin >> N;
        int countA = 0, countB = 0, countAB = 0, countO = 0;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            if (s == "A") countA++;
            else if (s == "B") countB++;
            else if (s == "AB") countAB++;
            else countO++;
        }
        int result = countO + max(countA, countB) + countAB;
        result = max(result, 1); 
        cout << result << '\n';
    }
    return 0;
}