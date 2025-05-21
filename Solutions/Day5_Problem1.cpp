#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }
    int expected = -1;
    bool balanced = true;

    for (const auto& pair : freq) {
        if (expected == -1) {
            expected = pair.second;
        } else if (pair.second != expected) {
            balanced = false;
            break;
        }
    }
    if (balanced) {
        cout << "Aashriya smiles: Emotional balance found." << endl;
    } else {
        cout << "Aashriya wonders: These thoughts were scattered." << endl;
    }

    return 0;
}