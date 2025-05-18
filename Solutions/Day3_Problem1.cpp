#include<iostream>
#include<vector>

int overstockCheck(int r, int c, const std::vector<std::vector<int>>& warehouseStock){
    int overStockWareHouse = 0;
    for (int i = 0; i < r; i++){
        int stockCount = 0;
        for (int j = 0; j < c; j++){
            if(warehouseStock[i][j] >= 100){
                stockCount++;
                if(stockCount >= 3){
                    overStockWareHouse++;
                    break;
                }
            }
        }
    }
    return overStockWareHouse;
}

int main(){

    int r,c;
    std::cin >> r >> c;

    std::vector<std::vector<int>> warehouseStock(r, std::vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cin>>warehouseStock[i][j];
        }
    }

    std::cout<<overstockCheck(r, c, warehouseStock)<<std::endl;

    return 0;
}