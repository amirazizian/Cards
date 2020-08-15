#include <iostream>
#include "sorter.h"

Sorter::Sorter()
{

}

Sorter::~Sorter()
{

}

void swap(Card* a, Card* b) 
{ 
  Card t = *a; 
  *a = *b; 
  *b = t; 
} 
   
int partition (Card arr[], int low, int high) 
{ 
  Card pivot = arr[high]; 
  int i = (low - 1);   
  
  for (int j = low; j <= high- 1; j++) 
  { 
    if (arr[j] >= pivot) 
    { 
        i++;
        swap(&arr[i], &arr[j]); 
    } 
  } 
  swap(&arr[i + 1], &arr[high]); 
  return (i + 1); 
} 
   
void quickSort(Card arr[], int low, int high) 
{ 
  if (low < high) 
  { 
    int pivot = partition(arr, low, high); 
  
    quickSort(arr, low, pivot - 1); 
    quickSort(arr, pivot + 1, high); 
  } 
} 

void Sorter::Sort(Card arr[], int size)
{
  quickSort(arr, 0, size - 1);
}