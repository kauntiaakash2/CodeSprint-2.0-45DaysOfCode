#include<iostream>
#include<vector>

int canBuyIceCream(int budget,const std::vector<int>& icecreamPrice){
  for(int price:icecreamPrice){
    if(price==budget) return true;
  }
  return false;
}
int main(){
  int budget;
  std::cout<<"budget = ";
  std::cin>>budget;

  int n;
  std::cout<<"Enter the number of ice-cream price = ";
  std::cin>>n;

  std::vector<int> icecreamPrice(n);
  std::cout<<"iceCreamPrices = "<<std::endl;
  for(int i=0;i<n;i++){
    std::cin>>icecreamPrice[i];
  }
  std::cout<<((canBuyIceCream(budget,icecreamPrice))?"true":"false")<<std::endl;
  return 0;
}