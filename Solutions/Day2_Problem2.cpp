#include<iostream>
#include<vector>

int criticalJamHour(int n, std::vector<int>& NoOfVehicles){
    int criticalHour = 0;

    for (int j = 1; j < n; j++)
    {
        if ((NoOfVehicles[j] > 50) && (NoOfVehicles[j] > NoOfVehicles[j-1]))
        {
            criticalHour++;
        }
        
    }

    return criticalHour;
}

int main(){

    int n;
    std::cin>>n;

    if (n < 1) {
        std::cout << "Error: Number must be at least 1." << std::endl;
        return 1;
    }

    std::vector<int> NoOfVehicles(n);
    for(int i=0;i<n;i++) std::cin>>NoOfVehicles[i];

    std::cout<<criticalJamHour(n, NoOfVehicles)<<std::endl;

    return 0;
}