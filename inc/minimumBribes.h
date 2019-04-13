/******************************************************************************
 * Copyright (C) 2019 by Abdulrahman Tharwat - University of Zagazig
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. 
 *
 *****************************************************************************/
/**
 * @file <minimumBribes.h> 
 * @brief headerfile for minimumBribes functions
 * @author Abdulrahman Tharwat
 * @date 13/4/2019
 *
 */


#ifndef __minimumBribes_H__
#define __minimumBribes_H__

#define FAIL 1
#define PASS 0

/******************************************************************************
 * Function: minimumBribes
 * url:
 *     https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
 * Description:
 *     This function takes a array of numbers and find minimum count of number
 *     which change it's position by one index or two
 *     This function print the minimum number , or it print "Too Choutic"
 *     if the compination of array can not be happen
 * Parameters:
 *     int * arr: array of number
 *     int SIZE: Size of this array
 * Return:
 *     void 
 *****************************************************************************/
void minimumBribes(int * arr, int SIZE);


#endif
