#include <iostream>

using namespace std;

int main() {
    // Write a program that reads in an array of 10 integers and sorts it in ascending order. The program should use the SELECTION SORT algorithm.
    int integ[10], input, smallest, number, i, j;
    cout << "Enter 10 numbers:" << endl;

    for (i = 0; i < 10; i++){
        cout << "----> ";
        cin >> integ[i];
    }

    for (i = 0; i < 10 - 1; i++){
        smallest = i;
        for (j = i; j < 10; j++){
            if (integ[j] < integ[smallest]){
                smallest = j;
            }
        }
        if (i != smallest){
            swap(integ[i], integ[smallest]);
        }
    }

    cout << endl;
    cout << "Ascending Order: " << endl;

    for (i = 0; i < 10; i++){
        cout << integ[i] << endl;
    }

    return 0;
}