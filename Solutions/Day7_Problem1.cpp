#include <iostream>
using namespace std;

int countMovement(const string& log) {
    int count = 0;
    bool inSegment = false;

    for (char ch : log) {
        if (ch == '1') {
            if (!inSegment) {
                count++;
                inSegment = true;
            }
        } else inSegment = false;
    }
    return count;
}

int main() {
    string log;
    cin >> log;

    cout << countMovement(log) << endl;

    return 0;
}