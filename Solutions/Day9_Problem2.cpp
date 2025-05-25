#include<iostream>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
const int BASE = 31;
const int MOD = 1e9 + 9;

vector<int> rabinKarp(string text, string pattern) {
    int n = text.size(), m = pattern.size();
    vector<int> result;
    if (m > n) return result;

    ll patternHash = 0, textHash = 0, power = 1;

    for (int i = 0; i < m - 1; ++i) power = (power * BASE) % MOD;

    for (int i = 0; i < m; ++i) {
        patternHash = (patternHash * BASE + (pattern[i] - 'a' + 1)) % MOD;
        textHash = (textHash * BASE + (text[i] - 'a' + 1)) % MOD;
    }

    if (patternHash == textHash && text.substr(0, m) == pattern) result.push_back(0);

    for (int i = m; i < n; ++i) {
        textHash = (textHash - (text[i - m] - 'a' + 1) * power % MOD + MOD) % MOD;
        textHash = (textHash * BASE + (text[i] - 'a' + 1)) % MOD;

        if (textHash == patternHash && text.substr(i - m + 1, m) == pattern) result.push_back(i - m + 1);
    }
    return result;
}
int main() {
    string text, pattern;
    cout << "text: ";
    cin >> text;
    cout << "pattern: ";
    cin >> pattern;

    vector<int> matches = rabinKarp(text, pattern);
    for (int idx : matches) cout << idx << " ";
    cout << endl;

    return 0;
}