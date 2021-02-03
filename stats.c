/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *****************************************************************************/
 /**
  * @file <Add File Name>
  * @brief <Add Brief Description Here >
  *
  * <Add Extended Description Here>
  *
  * @author <Add FirsName LastName>
  * @date <Add date >
  *
  */



#include <stdio.h>
#include "stats.h"

  /* Size of the Data Set */
#define SIZE (40)

void print_statistics(char* array, int lenght) {
    printf("Mean is : %d \n",  (int)(find_mean(array, lenght)));
    printf("Maximum is : %d \n" , (int)(find_maximum(array, lenght)));
    printf("Minimum is : %d \n" , (int)(find_minimum(array, lenght)));
    printf("Median is : %d \n", (int)(find_median(array, lenght)));
}

/**Given an array of data and a length, prints the array to the screen*/
void print_array(char* array, int lenght) {
    
    for (int i = 0; i < lenght; i++) {
        if (i % (lenght/10)==0 && i!=0)  printf("array[%d] = %d\n", i, (int)array[i]);
        else printf("array[%d] = %d ", i, (int)array[i]);
    }
    printf("\n");
}
/**Given an array of data and a length, returns the median value*/
float find_median(char* array, int lenght) {
    return (int)array[(int)(lenght / 2)];

}
/**Given an array of data and a length, returns the mean*/
float find_mean(char* array, int lenght) {
    int mean = 0;

    for (int i = 0; i < lenght; i++) {
        mean += array[i];
    }
    return mean / lenght;
}
/*Given an array of data and a length, returns the maximum*/
float find_maximum(char* array, int lenght) {
    int max = 0;

    for (int i = 0; i < lenght; i++) {
        max = (array[i] > max) ? array[i] : max;
    }
    return max;

}
/* Given an array of data and a length, returns the minimum*/
float find_minimum(char* array, int lenght) {
    int min = 0;

    for (int i = 0; i < lenght; i++) {
        min = (array[i] < min) ? array[i] : min;
    }
    return min;


}
/**Given an array of data and a length, sorts the array from largest to smallest.
(The zeroth Element should be the largest value, and the last element(n - 1)
should be the smallest value.)*/
float sort_array(char* array, int lenght) {
    char aux ;
    for (int i = 0; i < lenght; i++) {
        for (int j = i + 1; j < lenght; j++)
            if ((int)array[i] > (int)array[j]) {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;

            }
    }
    printf("Sorted array : \n");
    print_array(array, lenght);
}

void main() {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90 };

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */
    /**- A function that prints the statistics of an array including minimum, maximum, mean, and median.
*/
    print_array(test, SIZE);    
    sort_array(test, SIZE);
    print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */