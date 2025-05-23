#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string reverseAndCleanSpeechLine(const string& speechLine) {
    stringstream ss(speechLine);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }
    reverse(words.begin(), words.end());
    string result;
    for (int i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i != words.size() - 1)
            result += " ";
    }
    return result;
}

int main() {
    string speechLine;
    getline(cin, speechLine);
    string cleanedLine = reverseAndCleanSpeechLine(speechLine);
    cout << cleanedLine << endl;
    return 0;
}