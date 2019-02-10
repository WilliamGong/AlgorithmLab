#include "mergeUp.h"
#include "merge.h"

void mergeUp(int current[], int aux[], int start, int end) {
    if(start >= end) {
        return;
    }

    int mid = (start + end) / 2;

    mergeUp(current, aux, start, mid);
    mergeUp(current, aux, mid + 1, end);
    merge(current, aux, start, mid, end);
}