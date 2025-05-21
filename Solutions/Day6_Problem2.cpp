#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool startsWithVowel(const string& name) {
    char first = name[0];
    return first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u';
}
int main() {
    int n;
    cin >> n;
    unordered_set<string> seen;
    vector<string> result;
    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;
        if (startsWithVowel(name) && seen.find(name) == seen.end()) {
            seen.insert(name);
            result.push_back(name);
        }
    }
    cout << result.size() << endl;
    for (const string& name : result) {
        cout << name << " ";
    }
    cout << endl;
    return 0;
}