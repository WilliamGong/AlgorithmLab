#include "merge.h"

void merge(int current[], int aux[], int start, int mid, int end) {

    int i = start, j = mid + 1, k = start;    //i used to the left of current[], j used to right of current[], k used to aux
    while(i <= mid && j <= end) {
        if(current[i] < current[j]) {
            aux[k] = current[i];
            k++;
            i++;
        }else {
            aux[k] = current[j];
            k++;
            j++;
        }
    }
    if(i > mid) {
        for(; j < end; j++) {
            aux[k] = current[j];
            k++;
        }
    }
    if(j > end) {
        for(; i < mid; i++) {
            aux[k] = current[i];
            k++;
        }
    }

    //put the element in aux[] into the current range in current[]
    for(int i = start; i < end; i++) {
        current[i] = aux[i];
    }
}