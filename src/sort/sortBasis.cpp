#include "sortBasis.h"

void exchenge(int current[], int a, int b) {
    int temp = current[a];
    current[a] = current[b];
    current[b] = temp;
}