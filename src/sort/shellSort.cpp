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