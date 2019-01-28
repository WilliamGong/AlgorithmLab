#include "insertSort.h"
#include "sortBasis.h"

void insertSort(int current[], int num) {
    for(int i = 0; i < num; i++) {
        for(int j = i; j > 0; j--) {
            if(current[j] < current[j - 1]) {
                exchenge(current, j, j - 1);
            }
        }
    }
}