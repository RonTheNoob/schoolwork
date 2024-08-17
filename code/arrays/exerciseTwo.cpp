#include <iostream>

using namespace std;

int main() {
    // Write a program that reads in an array of 10 integers and sorts it in ascending order.
    // The program should use the BUBBLE SORT algorithm.
    int integ[10], input, smallest, temp;
    cout << "Enter 10 numbers:" << endl;

    for (int i = 0; i < 10; i++){
        cout << "----> ";
        cin >> integ[i];
    }

    cout << endl;

    for (int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++){
            if (integ[i] > integ[j]){
                swap(integ[i], integ[j]);
            }

        }
    }

    cout << "Ascending Order: " << endl;

    for (int i = 0; i < 10; i++){
        cout << integ[i] << endl;
    }

    return 0;
}