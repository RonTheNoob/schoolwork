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

    smallest = integ[0];
    for (i = 0; i < 10; i++){
        smallest = integ[i];
        for (j = i; j < 10; j++){
            if (integ[j] <= smallest){
                smallest = integ[j];
                number = j;
            }
        }
        swap(integ[i], integ[number]);
    }

    cout << endl;
    cout << "Ascending Order: " << endl;

    for (i = 0; i < 10; i++){
        cout << integ[i] << endl;
    }

    return 0;
}