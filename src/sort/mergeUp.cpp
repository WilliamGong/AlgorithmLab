/*
 * @Author: William Gong 
 * @Date: 2019-02-10 21:48:57 
 * @Last Modified by:   William Gong 
 * @Last Modified time: 2019-02-10 21:48:57 
 */
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