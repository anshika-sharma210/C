#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int a, *arr, i, sum = 0;
    scanf("%d", &a);
    arr = (int*) malloc(a * sizeof(int));
    for(i = 0; i < a; i++) {
        scanf("%d", arr + i);
    }
    for(i = 0; i < a; i++) {
        sum += *(arr + i);
    }
    printf("%d\n", sum);
    free(arr); 
    return 0;
}
