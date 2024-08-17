#include <iostream>

using namespace std;

int main() {
    int smol[10];
    int input, largest, i, j;

    for (i = 0; i < 10; i++){
        cout << "Enter the value of index " << i << ": ";
        cin >> smol[i];    
    }
    largest = smol[0];
    int largeInd = 0;

    for (j = 1; j < 10; j++)
        if (smol[j] > largest){
            largest = smol[j];
        }
    
    for (int k = 0; k < 10; k++)
        if (smol[k] == largest){
            if (k > largeInd)
                largeInd = k;
        }
    cout << endl;
    cout << "The index with the largest number is: " << largeInd << endl;
    cout << "The largest number is: " << largest;
}