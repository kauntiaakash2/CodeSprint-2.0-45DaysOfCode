#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    if (p.size() > s.size()) return {};

    vector<int> res, cnt(26, 0);
    for (char c : p) cnt[c - 'a']++;

    int left = 0, right = 0, len = p.size(), toMatch = p.size();

    while (right < s.size()) {
        if (cnt[s[right++] - 'a']-- > 0) toMatch--;
        if (right - left == len) {
            if (toMatch == 0) res.push_back(left);
            if (++cnt[s[left++] - 'a'] > 0) toMatch++;
        }
    }
    return res;
}
int main() {
    string logStream, pattern;
    cout << "Enter log stream: ";
    cin >> logStream;
    cout << "Enter pattern: ";
    cin >> pattern;

    vector<int> result = findAnagrams(logStream, pattern);
    for (int idx : result)
        cout << idx << " ";
    cout << endl;

    return 0;
}