//lab4-2.cpp
#include <iostream>
using namespace std;

int main() {
        int a = 0;
        int b = 1;
        int c = 0;
        int ans = 1;
    for (int i = 0; i < 29; i++) {
        c = a + b;
        a = b;
        b = c;
        ans += c;
        cout << c << "\n";
    }
    cout << ans;

    return 0;
}
