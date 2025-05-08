#include <stdio.h>

int partition (int data[], int low, int high) {
    int i ,j;
    int pivot;
    pivot = data [low];
    i = low;
    j = high;

    while (i < j) {
        while (i < j && data[j] >= pivot) {
            j--;
        }
        data[i] = data[j];
        while (i < j && data[i] <= pivot) {
            i++;
        }
        data[j] = data[i]; 
    }
    data [i] = pivot;
    return i;

}

void quickSort (int data[], int low, int high) {
    if (low < high) {
        int loc = partition(data, low, high);
        quickSort(data, low, loc-1);
        quickSort(data, low+1, high);
    }
}