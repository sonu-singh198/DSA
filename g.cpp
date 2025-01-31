// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

void gf(int width , float sigma){
    int maxX = width/2;
    int minX = -maxX;
    int minY = minX;
    int maxY = maxX;
    
    float filter[width][width];
    for (int i = 0 ; i<width ; i++){
        for (int j = 0 ; j < width ; j++){
            filter[i][j] = 0;
        }
    }
    
    
       for (int x = minX; x <= maxX; ++x) {
        for (int y = minY; y <= maxY; ++y) {
            float g = (1.0 / (2.0 * M_PI * sigma * sigma)) * std::exp(-(x * x + y * y) / (2.0 * sigma * sigma));
            filter[x - minX][y - minY] = g;  
        }
    }
      for (int i = 0 ; i<width ; i++){
        for (int j = 0 ; j < width ; j++){
           std:: cout<<filter[i][j]<<"\n";
        }
   }
    
}
int main() {
gf(5,1);

return 0;
}








