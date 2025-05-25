#include <iostream>
#include <vector>
#include <string>
using namespace std;

const vector<string> phoneMap = {
    "",     "",     "abc",  "def", "ghi",
    "jkl",  "mno",  "pqrs", "tuv", "wxyz"
};
void backtrack(const string& digits, int index, string& current, vector<string>& result) {
    if (index == digits.size()) {
        result.push_back(current);
        return;
    }
    const string& letters = phoneMap[digits[index] - '0'];
    for (char ch : letters) {
        current.push_back(ch);
        backtrack(digits, index + 1, current, result);
        current.pop_back();
    }
}
vector<string> letterCombinations(const string& digits) {
    if (digits.empty()) return {};

    vector<string> result;
    string current;
    current.reserve(digits.size());
    backtrack(digits, 0, current, result);
    return result;
}
int main() {
    string input;
    cout << "digits (2-9): ";
    cin >> input;

    vector<string> combinations = letterCombinations(input);

    for (const string& s : combinations) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}