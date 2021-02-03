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
//unsigned char print_array(char* array, int lenght) {
//    
//    for (int i = 0; i < lenght; i++) {
//        if (i % (lenght/10)==0 && i!=0)  printf("array[%d] = %5u\n", i, (int)array[i]);
//        else printf("array[%d] = %d ", i, (int)array[i]);
//    }
//    printf("\n");
//}
unsigned char print_array(unsigned char* data, unsigned int size) {
   
    for (int i = 0, j = 0; i < size; ++i)
    {
             
        printf("%5u", data[i]);
        if (++j > 3) {
            printf("\n");
            j = 0;
        }
    }
}
/**Given an array of data and a length, returns the median value*/
unsigned char find_median(unsigned char* array, int lenght) {

    if ((SIZE % 2) == 0) {
        return (array[lenght / 2] + array[lenght / 2 - 1]) / 2;
    }
    else
        return array[lenght / 2];

}
/**Given an array of data and a length, returns the mean*/
unsigned char find_mean(unsigned char* array, int lenght) {
    int mean = 0;

    for (int i = 0; i < lenght; i++) {
        mean += array[i];
    }
    return (mean / lenght);
}
/*Given an array of data and a length, returns the maximum*/
unsigned char find_maximum(unsigned char* array, int lenght) {
    unsigned char max = array[0];

    for (int i = 0; i < lenght; i++) {
        max = (array[i] > max) ? array[i] : max;
    }
    return max;

}
/* Given an array of data and a length, returns the minimum*/
unsigned char find_minimum(unsigned char* array, int lenght) {
    unsigned char min = array[0];

    for (int i = 0; i < lenght; i++) {
        min = (array[i] < min) ? array[i] : min;
    }
    return min;


}
/**Given an array of data and a length, sorts the array from largest to smallest.
(The zeroth Element should be the largest value, and the last element(n - 1)
should be the smallest value.)*/
unsigned char sort_array(unsigned char* array, int lenght) {
    unsigned char aux ;
    for (int i = 0; i < lenght; i++) {
        for (int j = i + 1; j < lenght; j++)
            if (array[i] > array[j]) {
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