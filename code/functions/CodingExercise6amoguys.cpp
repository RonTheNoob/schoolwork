#include <iostream>
using namespace std;

void selectionSort(int arr[], int n);
void bubbleSort(int arr1[], int n);
void insertionSort(int arr2[], int n);

int main() {
    int arr[5];
    int arr1[5];
    int arr2[5];
    int i, j, k;

    cout << "Enter 5 integers: ";
    for(i = 0; i < 5; i++){
        cin >> arr[i];
        for (j = 0; j < 5; j++) {
            arr1[i] = arr[i];
        }
        for (k = 0; k < 5; k++) {
            arr2[i] = arr[i];
        }
    }
    cout << endl;
    cout << "Selection sort Iterations" << endl;
    selectionSort(arr, 5);
    cout << "\nThe sorted integer for selection sort is: ";
    for (i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    cout << "Bubble sort Iterations" << endl;
    bubbleSort(arr1, 5);
    cout << "\nThe sorted integer for bubble sort is: ";
    for (i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl << endl;
    
    cout << "Insertion sort Iterations" << endl;
    insertionSort(arr2, 5);
    cout << "\nThe sorted integer for insertion sort is: ";
    for (i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}

void selectionSort(int arr[], int n) {
    int i, j, min_Index, k;
    for (i = 0; i < n - 1; i++) {
        min_Index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_Index]) {
                min_Index = j;
            }
        }
        k = arr[min_Index];
        arr[min_Index] = arr[i];
        arr[i] = k;

        cout << "iteration numnber " << i + 1 << " is: ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

void bubbleSort(int arr1[], int n) {
    int i, j, k;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                k = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = k;
            }
        }
        cout << "Iteration number " << i + 1 << " is: ";
        for (int k = 0; k < n; k++) {
            cout << arr1[k] << " ";
        }
        cout << endl;
    }
}

void insertionSort(int arr2[], int n) {
    for (int i = 0; i < n; ++i) {
        int key = arr2[i];
        int j = i - 1;

        while (j >= 0 && arr2[j] > key) {
            arr2[j + 1] = arr2[j];
            j--;
        }
        arr2[j + 1] = key;

        cout << "Iteration number " << i+1 << " is: ";
        for (int k = 0; k < n; k++) {
            cout << arr2[k] << " ";
        }
        cout << endl;

    }
}