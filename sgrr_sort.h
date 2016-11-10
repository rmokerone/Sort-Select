/************************************************************************/
/*
* @file     sgrr_sort.h
@author   sgrr_Huifeng
@version  V0.0.1
@data     10-November-2016
@brief    Header file containing function prototypes of sgrrsort.c
*/
/************************************************************************/

#ifndef __SGRR_SORT_H
#define __SGRR_SORT_H

/* Sort function  *******************************************************/
void QuickSort_int(int arr[], int r, int l);
void InsertionSort_int(int arr[], int len);
void InsertionSort_float(float arr[], int len);



/*  Select function *****************************************************/
int Select_InsertionSort_int(int arr[], int len, int k);

#endif
