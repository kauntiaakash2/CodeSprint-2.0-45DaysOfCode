#include<iostream>
#include<vector>

int countMagicalDay(int n, std::vector<int>& score){
    int magicalDay = 0;

    for (int j = 1; j < n-1; j++)
    {
        if ((score[j] > score[j-1]) && (score[j] > score[j+1]))
        {
            magicalDay++;
        }
        
    }

    return magicalDay;
}

int main(){

    int n;
    std::cout<<"n = ";
    std::cin>>n;

    std::vector<int> score(n);
    std::cout<<"Score = "<<std::endl;
    for(int i=0;i<n;i++) std::cin>>score[i];

    std::cout<<countMagicalDay(n, score)<<std::endl;

    return 0;
}