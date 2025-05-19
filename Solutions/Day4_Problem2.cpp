#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 10) {
        cout << "Abhik's marathon journey intensifies! Let's see his detailed zig-zag pattern:\n";
    }

    int total = 0;
    int maxChars = 4 * n - 3;

    for (int i = 1; i <= n; ++i) {
        int numCount = i;
        int rowWidth = 4 * numCount - 3;
        int leftPadding = (maxChars - rowWidth) / 2;

        cout << string(leftPadding, ' ');

        for (int j = 0; j < numCount; ++j) {
            int val = (i % 2 == 1) ? j + 1 : i - j;
            cout << val;
            if (j != numCount - 1) cout << "   ";
            ++total;
        }
        cout << '\n';
    }
    cout << "Total numbers printed: " << total << '\n';

    return 0;
}
