#include <iostream>
using namespace std;

int main() {
    int n;
    int ans = 0;
    cin >> n;
    if (n >= 0) {
        for (int i = 1; i <= n; i++){
            ans = ans + i;
        }
    }
    else if (n < 0) {
        for (int i = -1; i >= n; i--){
            ans = ans + i;
        }
    }
    else { cout << 0; }
    
    cout << ans;
    
    return 0;
}
