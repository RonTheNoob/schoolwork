#include <iostream>
using namespace std;

int main(){
    int arr[10], smallest, index = 0; // initial index is 0

    cout << "Enter 10 integers." << endl;
    for(int i = 0; i < 10; i++){ // inputting the 10 integers
        cout << "---> ";
        cin >> arr[i];
    }
    cout << endl;
    smallest = arr[0]; // placeholder for smallest number
    for (int a = 1; a < 10; a++){
        if (arr[a] < smallest){ // checking if the current value from the array in the for loop is less than the placeholder
            smallest = arr[a]; // smallest variable is that current value
        }
    }
    for (int i = 0; i < 10; i++){ // to get the index of the smallest number in the array
        if(arr[i] == smallest){ // JUST to get the index :D
            if (i > index){
                index = i;
            }
        }
    }

    cout << "The smallest element is " << smallest << "." << endl;
    cout << "The index of the smallest element is " << index << "." << endl;

    return 0;
}