#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;

    cout << "Введите N: ";
    cin >> N;

    vector<int> A(N);

    cout << "Введите " << N << " элементов массива:\n";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> evenNumbers;

    for (int i = N - 1; i >= 0; i--) {
        if (A[i] % 2 == 0) {
            evenNumbers.push_back(A[i]);
        }
    }

    int K = evenNumbers.size();
    cout << "Четные числа:\n";
    
    for (int num : evenNumbers) {
        cout << num << " ";
    }

    cout << "\n K: " << K << endl;

    return 0;
}
