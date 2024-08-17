#include <iostream>
using namespace std;

float averageee(float x, float y){
    float ave = x / y;
    return ave;
}
// float positive(float x){
//     if (x > 0){
//      
//     }
// }

int main(){
    float input = 1, countPos = 0, countNeg = 0, total = 0, count =0;
    float average = 0;
    cout << "Enter values:" << endl; 
    while (input != 0){
        cout << "---> ";
        cin >> input; 
        if (input > 0){
            total = total + input;
            countPos++;
        }
        if (input < 0){
            total = total + input;
            countNeg++;
        }
    count = countPos + countNeg;
    float a = averageee(total, count);
   }
    cout << endl;
    cout << "There are " << countNeg << " negative numbers, " << countPos << " positive numbers, the total is " << total << ", and the average is " << averageee(total, count) << "." << endl;
}