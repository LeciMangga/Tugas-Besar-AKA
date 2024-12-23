#include "AKA.h"

void mergeAndSortArray(int arr1[], int arr2[], int arr3[], int n1, int n2, int& n3){
    n3 = 0;

    for(int i = 0; i < n1; i++){
        arr3[n3++] = arr1[i];
    }

    for(int i = 0; i < n2; i++){
        arr3[n3++] = arr2[i];
    }

    for(int i = 1; i < n3; i++){
        int temp = arr3[i];
        int j = i -1;

        while(j >= 0 && arr3[j] > temp){
            arr3[j+1] = arr3[j];
            j--;
        }
        arr3[j+1] = temp;
    }
}

void mergeAndSortArrayRekursif(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3, int i, int j, int k){
    if (k >= n3){
        return;
    } else if(i < n1 ){
        int temp = arr1[i];
        int l = k-1;
        while (l >=0 && arr3[l] > temp){
            arr3[l+1] = arr3[l];
            l--;
        }
        arr3[l+1] = temp;
        mergeAndSortArrayRekursif(arr1,arr2,arr3,n1,n2,n3,i+1,j,k+1);
    } else if (j < n2){
        int temp = arr2[j];
        int l = k-1;
        while (l >=0 && arr3[l] > temp){
            arr3[l+1] = arr3[l];
            l--;
        }
        arr3[l+1] = temp;
        mergeAndSortArrayRekursif(arr1,arr2,arr3,n1,n2,n3,i,j+1,k+1);
    }
}

/*
    STACK OVERFLOW CODINGANNYA

    if (k >= n3){
        return;
    }
    if (i<n1 && j<n2){
        arr3[k] = arr1[i];
        arr3[k+1] = arr2[j];
        mergeAndSortArrayRekursif(arr1,arr2,arr3,n1,n2,n3,i+1,j+1,k+2);
    } else {
            int temp = arr3[k];
            int l = k-1;
            while (l >=0 && arr3[l] > temp){
                arr3[l+1] = arr3[l];
                l--;
            }
            arr3[l+1] = temp;
            mergeAndSortArrayRekursif(arr1,arr2,arr3,n1,n2,n3,i,j,k+1);
    }
/*
if (n3 <= 0){
        return;
    }
    if(k < n3){
        if (i < n1){
            arr3[k] = arr1[i];
            mergeAndSortArrayRekursif(arr1,arr2,arr3,n1,n2,n3,i+1,j,k+1);
        } else {
            arr3[k] = arr2[j];
            mergeAndSortArrayRekursif(arr1,arr2,arr3,n1,n2,n3,i,j+1,k+1);
        }
    } else {
        mergeAndSortArrayRekursif(arr1,arr2,arr3,n1,n2,n3-1,i,j,k);
        int l = arr3[n3-1];
        int m = n3-2;
        while (m >= 0 && arr3[m] > l){
            arr3[m+1] = arr3[m];
            m--;
        }
        arr3[m+1] = l;
    }
    */
