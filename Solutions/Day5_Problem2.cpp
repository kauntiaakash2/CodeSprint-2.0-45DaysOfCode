#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int totalSeated = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i + j) % 2 == 0) {
                cout << "1";
                ++totalSeated;
            } 
            else {
                cout << "0";
            }
            if (j < n - 1) cout << " ";
        }
        cout << "\n";
    }
    cout << "Total students seated: " << totalSeated << "\n";

    return 0;
}