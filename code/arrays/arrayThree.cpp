#include <iostream>

using namespace std;

int main() {
    // The program makses an array with 10 size and asks the user to give 10 inputs and asks the user what index to print as the output.
    double arrayX[50];

    for (int i = 0; i < 25; i++){
        arrayX[i] = i * i;
    }

    for (int i = 25; i < 50; i++){
        arrayX[i] = i * 3;
    }

    for (int j = 0; j < 5; j++){
        for (int i = 0; i < 10; i++){
            cout << arrayX[i + 10 * j] << " ";
        }
        cout << endl;
    }

}