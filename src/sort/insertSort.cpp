/*
 * @Author: William Gong 
 * @Date: 2019-02-10 21:47:38 
 * @Last Modified by:   William Gong 
 * @Last Modified time: 2019-02-10 21:47:38 
 */
#include "insertSort.h"
#include "sortBasis.h"

void insertSort(int current[], int length) {
    for(int i = 0; i < length; i++) {
        for(int j = i; j > 0; j--) {
            if(current[j] < current[j - 1]) {
                exchenge(current, j, j - 1);
            }
        }
    }
}