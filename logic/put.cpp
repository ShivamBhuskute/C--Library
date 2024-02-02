#include <iostream>
using namespace std;

int main(){
    int rows = 5;
    for(int i = rows; i /(2*rows-1) > 0; i--){
        cout << " ";
        for(int k = 1; k <= rows; k++){
            for(int j = 1; j <= k; j++){
                cout << " * ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
return 0;
}






// #include <iostream>

// int main() {
//     int n = 5; // You can change the value of n to adjust the number of rows

//     // Outer loop for each row
//     for (int i = 1; i <= n; ++i) {
//         // Inner loop for spaces before the stars
//         for (int j = 1; j <= n - i; ++j) {
//             std::cout << " ";
//         }

//         // Inner loop for printing stars
//         for (int k = 1; k <= i; ++k) {
//             std::cout << "* ";
//         }

//         // Move to the next line after printing each row
//         std::cout << std::endl;
//     }

//     return 0;
// }