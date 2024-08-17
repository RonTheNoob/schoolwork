#include <iostream>

using namespace std;

int main() {
    // A program that reads in an array of 10 integers and searches for a specific value in the array using any searching algorithm.
    //The program should output the first occurrence of the value in the array or -1 if the value is not found.
    int integ[10], input, i;
    cout << "Enter 10 numbers." << endl;

    for (i = 0; i < 10; i++){
        cout << "Index " << i << ": ";
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