#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the size of the array
        vector<int> s(n);
        for (int i = 0; i < n; ++i) {
            cin >> s[i]; // Read array elements
        }
        bool ok = false;
        for (int i = 0; i < n && !ok; ++i) {
            for (int j = i + 2; j < n; ++j) {
                if (s[i] == s[j]) {
                    ok = true;
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
