// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Write C++ code here
    int M = 4; // column
    int N = 3; // row
    vector<vector<int>> matrx = {
        {2, 53, 1},
        {4, 5, 6},
        {7, 8, 9},
        {1, 2, 3}
    };
    
    for (int i = 0; i < M / 2; i++) {
        swap(matrx[i], matrx[M - 1 - i]);
    }
    
    for (const auto& row : matrx) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
    
    

    return 0;
}
