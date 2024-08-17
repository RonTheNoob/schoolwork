#include <iostream>

using namespace std;

int main() {
    int input;
    
    cout << "Enter a number: ";
    cin >> input;
    cout << endl;

    for (int rows = 0; rows < input; rows++){
        for (int space = 0; space < rows; space++){
            cout << " ";
        }
        
        for (int asterisk = 0; asterisk < input - rows; asterisk++){
            cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}