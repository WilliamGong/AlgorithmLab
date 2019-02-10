/*
 * @Author: William Gong 
 * @Date: 2019-02-10 21:48:47 
 * @Last Modified by:   William Gong 
 * @Last Modified time: 2019-02-10 21:48:47 
 */
#include "mergeSort.h"
#include "mergeUp.h"

void mergeSort(int current[], int num, std::string mode) {  //"mode" can accept "up-down" and "dowm-to-up"
    int start = 0;
    int end = num - 1;
    int aux[num] = {0};
    if(mode == "up-to-down") {     //merge up to down
        mergeUp(current, aux, start, end);
    }
}