#include <stdlib.h>

void shellSortSick(int data[], int n) {
    int i,j,k;
    int *delta;
    int dk;
    int t;

    k = n;
    delta = (int*)malloc(sizeof(int)*(n/2));
    i = 0;
    do{
        k = k/2;
        delta[i++] = k;
    } while (k > 1);

    i = 0;
    while ((dk = delta[i] > 0)) {
        for (k = delta[i]; k<n; ++k) {
            if (data[k] < data[k-dk]) {
                t = data[k];
                for (j = k-dk; j>=0&&t<data[j];j-=dk) {
                    data[j+dk] = data [j];
                }
                data[j+dk] = t;
            }
        }
        ++i;
    }

}

