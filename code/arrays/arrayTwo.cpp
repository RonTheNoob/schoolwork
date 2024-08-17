#include <iostream>

using namespace std;

int main() {
    // The program makses an array with 10 size and asks the user to give 10 inputs and asks the user what index to print as the output.
    int arrayX[10];
    int input;

    for (int i = 0; i < 10; i++){
        cout << "Enter a value in index " << i << ": ";
        cin >> arrayX[i];
    }

    cout << endl;

    cout << "What index in the array would you like to print?\n ----> ";
    cin >> input;
    cout << "The value of index " << input << " is:" << arrayX[input] << endl;
}