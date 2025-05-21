#include <iostream>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    bool jewelMap[128] = {false};
    for (char j : jewels) {
        jewelMap[j] = true;
    }
    int count = 0;
    for (char s : stones) {
        if (jewelMap[s]) {
            count++;
        }
    }
    return count;
}

int main() {
    string jewels, stones;
    cin >> jewels >> stones;
    cout << numJewelsInStones(jewels, stones) << endl;
    return 0;
}