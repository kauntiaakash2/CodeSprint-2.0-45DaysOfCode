#include <iostream>
#include <vector>

int increasingTemp(int n, std::vector<int> &tempArrRec){
    if (n==0) return 0;
    if (n==1) return 1;

    int longestPeriodCount = 1;
    int temp = 1;
    for (int i = 1; i < n; i++){
        if (tempArrRec[i] > tempArrRec[i-1]){
            temp++;
        }
        else{
            longestPeriodCount = std::max(longestPeriodCount, temp);
            temp = 1;
        }
    }
    longestPeriodCount = std::max(longestPeriodCount, temp);

    return longestPeriodCount;
}

int main(){
    int n;
    std::cin >> n;

    std::vector<int> tempArrRec(n);
    for (int i = 0; i < n; i++) std::cin >> tempArrRec[i];

    std::cout << increasingTemp(n, tempArrRec) << std::endl;

    return 0;
}
