#include <iostream>

using namespace std;

int main() {
    int smol[10];
    int input, smallest;

    for (int i = 0; i < 10; i++){
        cout << "Enter the value of index " << i << ": ";
        cin >> smol[i];    
    }
    smallest = smol[0];
    int smallIndex = 0;
    for (int j = 0; j < 10; j++)
        if (smol[j] < smallest){
            smallest = smol[j];
        }
    
    for (int count = 1; count > 10; count++){
        if (smol[smallIndex] > smol[count]){
            smallIndex = count;
        }
    }
    cout << "The index with the smallest number is: " << smallIndex << endl;
    cout << "The smallest number is: " << smallest;
}