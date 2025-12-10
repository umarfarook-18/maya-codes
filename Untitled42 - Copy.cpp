#include <stdio.h>

int main() {
    int temperature;
    scanf("%d", &temperature);

    if (temperature > 20)
        printf("HOT");
    else
        printf("COLD");

    return 0;
}
