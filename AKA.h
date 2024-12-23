#ifndef AKA_H_INCLUDED
#define AKA_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <chrono>

using namespace std;
using namespace std::chrono;

void mergeAndSortArray(int arr1[], int arr2[], int arr3[], int n1, int n2, int& n3);
void mergeAndSortArrayRekursif(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3, int i, int j, int k);

#endif // AKA_H_INCLUDED
