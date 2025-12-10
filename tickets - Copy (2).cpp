#include <stdio.h>

int main() {
    int X;
    
    // Read the cost of one ticket
    scanf("%d", &X);
    
    // Total cost for 4 tickets
    if (4 * X <= 1000) {
        printf("YES
");
    } else {
        printf("NO
");
    }
    
    return 0;
}
