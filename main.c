#include <stdio.h>
#include <stdlib.h>
#include "insertSort.c"
#include "print.c"
#include "bubbleSort.c"
#include "easySort.c"
#include "shellSort.c"
#include "quickSort.c"
int main(void) {
    int data[10] = {2,5,6,1,3,4,8,9,7,0};
    // insertSort(data,10);
    
    // bubbleSort(data,10);
    // easySelectSort(data, 10);
    //shellSortSick(data, 10);
    quickSort(data,0,9);
    printArray(data,10);
}
