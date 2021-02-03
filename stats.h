/**
* Redistribution, modification or use of this software in source or binary
* forms is permitted as long as the files maintain this copyright.Users are
* permitted to modify this and use it to learn about the field of embedded
* software.Alex Fosdick and the University of Colorado are not liable for any
* misuse of this material.
*
***************************************************************************** /
/**
 * @file <Add File Name>
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Ignacio Lanani>
 * @date <2/3/2021 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

 /* Add Your Declarations and Function Comments here */

 /**
  * @brief <Add Brief Description of Function Here>
  *
  * <Add Extended Description Here>
  *
  * @param <Add InputName> <add description here>
  * @param <Add InputName> <add description here>
  * @param <Add InputName> <add description here>
  * @param <Add InputName> <add description here>
  *
  * @return <Add Return Informaiton here>
  */

/**- A function that prints the statistics of an array including minimum, maximum, mean, and median.
*/
void print_statistics(test, SIZE);

/**Given an array of data and a length, prints the array to the screen*/
void print_array(char* array, int lenght);

/**Given an array of data and a length, returns the median value*/
float find_median(char* array, int lenght);
/**Given an array of data and a length, returns the mean*/
float find_mean(char* array, int lenght);
/*Given an array of data and a length, returns the maximum*/
float find_maximum(char* array, int lenght);
/* Given an array of data and a length, returns the minimum*/
float find_minimum(char* array, int lenght);
/**Given an array of data and a length, sorts the array from largest to smallest.
(The zeroth Element should be the largest value, and the last element(n - 1)
should be the smallest value.)*/
float sort_array(char*  array, int lenght);

#endif /* __STATS_H__ */