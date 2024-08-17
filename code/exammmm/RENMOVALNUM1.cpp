#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int i, count = 1;
    cout << "Input 10 numbers:";
    int max = arr[0];
    for (i = 0; i < 10; i++){
        cin >> arr[i];
        if (arr[i] == max && arr[i] != arr[0]){
            count++;
        }
        if (arr[i] > max){
            max = arr[i];
            count = 1;
        }
    }
    cout << "The largest number is " << max << " and the occurence is " << count << "." << endl;
}