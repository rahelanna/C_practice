#include <stdio.h>


int main() {
    
    // aritmetric operators
    
    // + (addition)
    // - (subsctraction)
    // * (multiplication)
    // / (division)
    // % (modulud)
    // ++ (increment)
    // --(decrement)
    
    int x = 5;
    int y = 2;
    
    float z = x / (float) y;
    printf("division %f\n", z);
    
    int modulus = x % y;
    printf("modulus %d\n", modulus);
    
    x++;
    y++;
    printf("increment %d\n", x);
    printf("increment %d\n", y);
    
    return 0;
}