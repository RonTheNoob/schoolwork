#include <iostream>

using namespace std;

int main() {
    // A program that reads in an array of 10 integers and sorts it in ascending order.
    // The program should use the INSERTION SORT algorithm.
    int integ[10], number, i, j;
    cout << "Enter 10 numbers:" << endl;

    for (i = 0; i < 10; i++){
        cout << "----> ";
        cin >> integ[i];
    }

    for (int a = 1; a < 10; a++){
        number = integ[a];
        j = a - 1;

        while (number < integ[j] && j >= 0){
            integ[j + 1] = integ[j];
            j = j - 1;
        }
        integ[j + 1] = number;
    }

    cout << endl;
    cout << "Ascending Order: " << endl;

    for (i = 0; i < 10; i++){
        cout << integ[i] << endl;
    }

    return 0;
}