#include "Lib.h"

float funzione1 (float x[], int n) {
    float f;
    float max=x[0];
    for (int i=0; i<n; i++){
        if (x[i]>max) {
            max=x[i];
    }
    }
    return max;
}
