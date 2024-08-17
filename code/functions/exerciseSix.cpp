#include <iostream>
using namespace std;

void selectionSort(int x[]);
void bubbleSort(int y[]);
void insertionSort(int z[]);

int main(){
    int arr[5];

    cout << "Enter 5 numbers: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << endl;
    cout << "---> SELECTION SORT <---" << endl;
    selectionSort(arr);
    cout << "---> BUBBLE SORT <---" << endl;
    bubbleSort(arr);
    cout << "---> INSERTION SORT <---" << endl;
    insertionSort(arr);
}

void selectionSort(int x[]){ // SELECTION SORT FUNCTION
    int selection[5], i, j, k, smallest;

    for (int s = 0; s < 5; s++){
        selection[s] = x[s];
    }

    for (i = 0; i < 5; i++){
        smallest = i;
        for (j = i; j < 5; j++){
            if (selection[j] < selection[smallest]){
                smallest = j;
            }
        }
        if (i != smallest){
            swap(selection[i], selection[smallest]);
        }
        cout << "Iteration #" << i + 1 << ": ";
        for(k = 0; k < 5; k++){
            cout << selection[k] << " ";
        }
        cout << endl;
    }

    cout << "*Final Sorted List: ";
    for(k = 0; k < 5; k++){
        cout << selection[k] << " ";
    }
    cout << endl;
    cout << endl;
}

void bubbleSort(int y[]){ // BUBBLE SORT FUNCTION
    int bubble[5], i, j, k;

    for (int s = 0; s < 5; s++){
        bubble[s] = y[s];
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5 - i; j++){
            if (bubble[j] > bubble[j + 1]){
                swap(bubble[j], bubble[j + 1]);
            }

        }
        cout << "Iteration #" << i + 1 << ": ";
        for(k = 0; k < 5; k++){
            cout << bubble[k] << " ";
        }
        cout << endl;
    }

    cout << "*Final Sorted List: ";
    for(k = 0; k < 5; k++){
        cout << bubble[k] << " ";
    }
    cout << endl;
    cout << endl;
}

void insertionSort(int z[]){ // INSERTION SORT
    int insertion[5], i, j, k, num;

    for (int s = 0; s < 5; s++){
        insertion[s] = z[s];
    }

    for (int i = 0; i < 5; i++){
        num = z[i];
        j = i - 1;

        while (num < z[j] && j >= 0){
            z[j + 1] = z[j];
            j = j - 1;
        }
        z[j + 1] = num;

        cout << "Iteration #" << i + 1 << ": ";
        for(k = 0; k < 5; k++){
            cout << z[k] << " ";
        }
        cout << endl;
    }

    cout << "*Final Sorted List: ";
    for(k = 0; k < 5; k++){
        cout << z[k] << " ";
    }
    cout << endl;
    cout << endl;
}