#include <iostream>

using namespace std;

int main() {
    // The program makses an array with 10 size and asks the user to give 10 inputs and only prints out the even indices.
    int arrayX[10];

    for (int i = 0; i < 10; i++){
        cout << "Enter a value in index " << i << ": ";
        cin >> arrayX[i];
    }

    cout << endl;

    for (int i = 9; i >= 0; i--){
            cout << arrayX[i] << endl;
    }
}