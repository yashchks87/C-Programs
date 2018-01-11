
#include <stdio.h>
#include <string.h>

int main(void) {
    int t,a, b;

    scanf ("%d\n", &t);

    while (t--) {
        scanf ("%d %d", &a, &b);
        printf("%d \n", a % b);
    }
    return 0;
}
