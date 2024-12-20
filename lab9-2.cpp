// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a > (b + c) || b > (a + c) || c > (a + b)) {
        cout << "NO";
        return 0;
    }
    else {
        if (c*c > a*a + b*b || a*a > b*b + c*c || b*b > a*a+ c*c) {
            cout << "ostriy\n";
        }
        if (c*c < a*a + b*b || a*a < b*b + c*c || b*b < a*a+ c*c) {
            cout << "dumb\n";
        }
        if(c*c == a*a + b*b || a*a == b*b + c*c || b*b == a*a+ c*c) {
            cout << "straight\n";
        }
        
    }
    

    return 0;
}
