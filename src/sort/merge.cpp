/*
 * @Author: William Gong 
 * @Date: 2019-02-10 21:48:37 
 * @Last Modified by:   William Gong 
 * @Last Modified time: 2019-02-10 21:48:37 
 */
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
    
    while(i <= mid) {
        aux[k++] = current[i++];
    }
    while(j <= end) {
        aux[k++] = current[j++];
    }

    //put the element in aux[] into the current range in current[]
    for(int i = start; i <= end; i++) {
        current[i] = aux[i];
    }
}