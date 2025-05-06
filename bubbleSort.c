#include<stdio.h>

void bubbleSort(int data[], int n) {
    int i ,j;
    int tmp;

    for (int i= n-1; i>0; i--) {
        tmp = data [0];
        for (j = 1; j <= i; j++) {
            if (tmp < data [j]) {
                tmp = data [j];
            } else {
                data[j-1] = data[j];
                data[j] = tmp;
            }
        }
    }
}