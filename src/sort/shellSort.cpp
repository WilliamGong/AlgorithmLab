/*
 * @Author: William Gong 
 * @Date: 2019-02-10 21:49:17 
 * @Last Modified by:   William Gong 
 * @Last Modified time: 2019-02-10 21:49:17 
 */
#include "shellSort.h"
#include "sortBasis.h"

void shellSort(int current[], int length) {
    int increment = 1;
    while(increment < length / 3) {
        increment = increment * 3 + 1;
    }
    
    while(increment >= 1){
        for(int i = increment; i < length; i++) {
            for(int j = i; j >= increment; j -= increment) {
                if(current[j] < current[j - increment]) {
                    exchenge(current, j, j - increment);
                }
            }
        }
        increment /= 3;
    }
    
}