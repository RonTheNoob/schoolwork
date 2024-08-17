#include <iostream>

using namespace std;

int main() {
    // Write a program that reads in an array of 10 integers and sorts it in ascending order. The program should use the SELECTION SORT algorithm.
    int integ[10], input, i;
    cout << "Enter 10 numbers:" << endl;

    for (i = 0; i < 10; i++){
        cout << "----> ";
        cin >> integ[i];
    }

    cout << endl;
    cout << "Input a number that was inputted in the array: ";
    cin >> input;

    for (i = 0; i < 10; i++){
        if (input == integ[i]){
            cout << "Number " << integ[i] << " is in index " << i << endl;
            break;
        }
    }    
    
    if (i == 10){
        cout << "-1" << endl;
    }

    return 0;
}