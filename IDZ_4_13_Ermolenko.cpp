#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int k = 1;
    double eps = 0.000001;
    double y_k = 2.0 / 3.0;
    double y_k_1;

    for(;1;k++){
        y_k_1 = (y_k + 1) / (y_k + 2);
        if (fabs(y_k_1 - y_k) < eps){
             cout << "Найден первый член последовательности:" << endl;
            cout << "y_n = " << y_k_1 << endl;
            return 0;
        }
        
        y_k = y_k_1;
    }
    
    return 0;
}
        