#include "AKA.h"

using namespace std;

int main()
{
    int nMax = 10000;
    int arr1iteratif[nMax];
    int arr1rekursif[nMax];

    for (int i = 0; i<nMax; i++){
        arr1iteratif[i] = rand() % 100;
        arr1rekursif[i] = arr1iteratif[i];
    }
    int arr2iteratif[nMax];
    int arr2rekursif[nMax];
    for (int i = 0; i<nMax; i++){
        arr2iteratif[i] = rand() % 100;
        arr2rekursif[i] = arr2iteratif[i];
    }



    cout << "Ukuran Array 1 = " << nMax << endl;
    cout << "Array 1 : ";
    for(int i = 0; i < nMax; i++){
        cout << arr1iteratif[i] << " ";
    }
    cout << endl;

    cout << "Ukuran Array 2 = " << nMax << endl;
    cout << "Array 2 : ";
    for(int i = 0; i < nMax; i++){
        cout << arr2iteratif[i] << " ";
    }
    cout << endl;

    int nMax2 = 2*nMax;
    int arrIteratif[nMax2];

    auto start = high_resolution_clock::now();
    cout << "Sorting iteratif ....\n";
    mergeAndSortArray(arr1iteratif, arr2iteratif, arrIteratif, nMax, nMax, nMax2);
    auto stop = high_resolution_clock::now();


    int arrRekursif[nMax2];

    auto startRekursif = high_resolution_clock::now();;
    cout << "Sorting rekursif ....\n";
    mergeAndSortArrayRekursif(arr1rekursif, arr2rekursif, arrRekursif, nMax, nMax, nMax2, 0, 0, 0);
    auto stopRekursif = high_resolution_clock::now();

    cout << "Setelah Penggabungan" << endl;
    cout << "Ukuran Array = " << nMax2 << endl;
    cout << "Array (iteratif) : ";
    for(int i = 0; i < nMax2; i++){
        cout << arrIteratif[i] << " ";
    }
    cout << endl;

    cout << "Setelah Penggabungan" << endl;
    cout << "Ukuran Array = " << nMax2 << endl;
    cout << "Array (rekursif) : ";
    for(int i = 0; i < nMax2; i++){
        cout << arrRekursif[i] << " ";
    }
    cout << endl;

    auto durationiteratif = duration_cast<microseconds>(stop - start);
    auto durationrekursif = duration_cast<microseconds>(stopRekursif - startRekursif);
    cout << "Durasi iteratif = " << durationiteratif.count() << " microseconds\n";
    cout << "Durasi rekursif = " << durationrekursif.count() << " microseconds\n";

    return 0;
}
