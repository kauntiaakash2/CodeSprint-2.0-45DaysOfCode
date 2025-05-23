#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minSubArrayLen(int target, vector<int>& sessions) {
    int n = sessions.size();
    int minLength = INT_MAX;
    int left = 0, sum = 0;

    for (int right = 0; right < n; ++right) {
        sum += sessions[right];
        while (sum >= target) {
            minLength = min(minLength, right - left + 1);
            sum -= sessions[left++];
        }
    }
    return minLength == INT_MAX ? 0 : minLength;
}

int main() {
    int target, n;
    cin >> target >> n;
    vector<int> sessions(n);
    for (int i = 0; i < n; ++i) {
        cin >> sessions[i];
    }
    cout << minSubArrayLen(target, sessions) << endl;
    return 0;
}