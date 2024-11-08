// lab 1
#include <stdio.h>

int main() {
    // 14
    // 1
    int in1, in2;
    scanf("%d", &in1);
    scanf("%d", &in2);
    int firstToLast(int in)
    {
        int a, b, c;
        a = in / 100;
        b = in % 100 / 10;
        c = in % 10;
        int out = (c * 100 + b * 10 + a);
        return out;
    }
    int ans1 = firstToLast(in1);
    printf("%d", ans1);
    printf("\n");
    
    int secToThird(int in)
    {
        int a,b,c,d;
        a = in / 1000;
        b = in % 1000 / 100;
        c = in % 100 / 10;
        d = in % 10;
        int out = (a * 1000 + c * 100 + b * 10 + d);
        return out;
    }
    
    int ans2 = secToThird(in2);
    printf("%d", ans2);
    
    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    // 14
    // 2
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    float median(int a, int b, int c)
    {
        float notout, out;
        a = pow(a, 2);
        b = pow(b, 2);
        c = pow(c, 2);
        notout = (2 * a + 2 * b - c)/4;
        out = sqrt(notout);
        return out;
    }
    float ans = median(a,b,c);
    printf("%f", ans);
    
    return 0;
}
