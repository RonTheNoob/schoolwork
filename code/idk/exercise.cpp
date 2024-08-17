#include <iostream>

using namespace std;

int main() {
    
    int largest, input;

    cout << "Input a number: ";
    cin >> input;

    int counter = 1;

    while (input != 0){
        cout << "Input a number: ";
        cin >> input;
        
        if (input == largest){
            counter++;
        }

        if (input > largest){
            largest = input;
            counter = 1;
        }        
        
    }

    cout << "The largest number is " << largest << " and " << largest << " occurs " << counter << " times." << endl;
    

    return 0;
}