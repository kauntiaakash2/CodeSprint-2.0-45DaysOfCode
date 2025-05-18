#include<iostream>

int main(){
  int n;
  std::cin>>n;

  if(n<1||n>100){
    std::cout<<"Invalid Input!"<<std::endl;
    return 0;
  }

  int goodShots=0,missedShots=0;
  for(int i=0;i<n;i++){
    int score;
    std::cin>>score;
    if(score<0||score>10){
      std::cout<<"Invalid Score!!"<<std::endl;
      return 0;
    }
    if(score>=7){
      goodShots++;
    }
    else{
      missedShots++;
    }
  }
  std::cout<<goodShots<<" "<<missedShots<<std::endl;
  return 0;
}