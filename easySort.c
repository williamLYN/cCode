#include<stdio.h>

void easySelectSort(int data[], int n) {
    int i ,j ,k;
    int tmp;
    for (i = 0; i < n-1; i++) {
        tmp = data[i];
        k = i;
        for (j = i; j<= n-1; j++) {
            if (tmp > data[j]) {
               tmp = data[j];
               k = j;
            }
        }
        tmp = data [k];
        data[k] = data [i];
        data[i] = tmp; 
    }
}