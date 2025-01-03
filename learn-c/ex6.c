#include <stdio.h>

// Using union
union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;
    d.i = 10;
    printf("Union Data: %d\n", d.i);
    d.f = 3.14f;
    printf("Union Data: %.2f\n", d.f);  // Overwrites d.i
    printf("Union Data: %.2f\n", d.i);  // Overwrites d.i
    return 0;
}
