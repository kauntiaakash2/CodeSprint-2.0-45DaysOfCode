#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                cout << i + 1;
            }
            else if (i + j == n - 1) {
                cout << n - i;
            }
            else {
                cout << "-";
            }
            if (j != n - 1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}