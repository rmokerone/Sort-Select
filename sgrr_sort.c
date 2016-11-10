/************************************************************************/
/*
* @file     sgrr_sort.c
  @author   sgrr_Huifeng
  @version  V0.0.1
  @data     10-November-2016
  @brief    This file provide function of sort, include Insertion sort.
             Furthermore it also include one function to select the K th largest 
             maximun of sequence.
*/
/************************************************************************/

#include "sgrr_sort.h"


/**
  * @brief  Insertion sort for integer sequence
  * @param  arr[]: the sequence need to be sort.
  * @param  len: the length of sequence.
  * @retval None
*/
void InsertionSort_int(int arr[], int len)
{
  if (len <= 0)
    return;     //If the len is illegal, the function will return.

  int i, j;
  int tmp;

  for (i = 1; i < len; i++)
  {
    tmp = arr[i];
    for (j = i - 1; j >= 0; j--)
    {
      if (tmp < arr[j])
      {
        arr[j + 1] = arr[j];
      }
      else
        break;
    }
    arr[j + 1] = tmp;
  }
}

/**
* @brief  Insertion sort for float sequence
* @param  arr[]: the sequence need to be sort.
* @param  len: the length of sequence.
* @retval None
*/
void InsertionSort_float(float arr[], int len)
{
  if (len <= 0)
    return;   //If the len is illegal, the function will return.

  int i, j;
  float tmp;

  for (i = 1; i < len; i++)
  {
    tmp = arr[i];
    for (j = i - 1; j >= 0; j--)
    {
      if (tmp < arr[j])
      {
        arr[j + 1] = arr[j];
      }
      else
        break;
    }
    arr[j + 1] = tmp;
  }
}

/**
* @brief  Select the k th maximum of integer sequence by Insertion sort.
* @param  arr[]: the sequence need to be sort.
* @param  len: the length of sequence.
* @param  k: the k th maximum of sequence.
* @retval the k th maximum of sequence.
*/
int Select_InsertionSort_int(int arr[], int len, int k)
{
  if (len <= 0 || k < 0)
    return 0;    //if the len or k is illegal, the function will return 0.

  int i, j;
  int tmp;

  for (i = 1; i < len; i++)
  {
    tmp = arr[i];
    for (j = i - 1; j >= 0; j--)
    {
      if (tmp < arr[j])
      {
        arr[j + 1] = arr[j];
      }
      else
        break;
    }
    arr[j + 1] = tmp;
  }

  return arr[len - k];
}

/**
* @brief  Select the k th maximum of float sequence by Insertion sort.
* @param  arr[]: the sequence need to be sort.
* @param  len: the length of sequence.
* @param  k: the k th maximum of sequence.
* @retval the k th maximum of sequence.
*/
float Select_InsertionSort_float(float arr[], int len, int k)
{
  if (len <= 0 || k < 0)
    return 0;   //If the len or k is illegal, the function will return 0;

  int i, j;
  float tmp;

  for (i = 1; i < len; i++)
  {
    tmp = arr[i];
    for (j = i - 1; j >= 0; j--)
    {
      if (tmp < arr[j])
      {
        arr[j + 1] = arr[j];
      }
      else
        break;
    }
    arr[j + 1] = tmp;
  }

  return arr[len - k];
}


