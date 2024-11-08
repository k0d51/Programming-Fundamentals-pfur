//lab2 1
#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    int ab = fabs(b - a);
    int ac = fabs(c - a);
    int ad = fabs(d - a);
    
    if (ab < ac && ab < ad) {
        printf("B is closer");
    }
    else if (ac < ad && ac < ab) {
        printf("C is closer");
    }
    else if (ad < ac && ad < ab) {
        printf("D is closer");
    }
    else { printf("Equal"); }
    
    printf("\nab = %d, ac = %d, ad %d", ab, ac, ad);
    
    return 0;
}
//lab2 2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    int xa, ya, xb, yb;
    cin>>xa>>ya>>xb>>yb;

    int x = abs(xb - xa);
    int y = abs(yb - ya);
    
    cout << x  << " " << y << "\n";
    
    int s = x * y;
    int p = x*2 + y * 2;
    
    cout << "S = " << s << "; P = " << p;

    return 0;
}
