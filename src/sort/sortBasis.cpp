/*
 * @Author: William Gong 
 * @Date: 2019-02-10 21:49:25 
 * @Last Modified by:   William Gong 
 * @Last Modified time: 2019-02-10 21:49:25 
 */
#include "sortBasis.h"

void exchenge(int current[], int a, int b) {
    int temp = current[a];
    current[a] = current[b];
    current[b] = temp;
}