#include <stdio.h>

void insertSort(int data[], int n) {
    int i ,j;
    int tmp;
    for (int i = 1; i < n; i++) {
        if(data[i] > data[i-1]) {
            tmp = data[i];
            for (j = i-1; j >= 0&& data[j] < tmp; j--) {
                data[j+1] = data[j];
                data[j] = tmp;
            }
        }
    }
}