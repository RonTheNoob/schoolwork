#include <iostream>

using namespace std;

int main(){
    double a, b, c, d, e, average;

    cout << "Input the first test score: ";
    cin >> a;
    cout << "Input the second test score: ";
    cin >> b;
    cout << "Input the third test score: ";
    cin >> c;
    cout << "Input the fourth test score: ";
    cin >> d;
    cout << "Input the fifth test score: ";
    cin >> e;

    cout << endl;
    average = (a + b + c + d +e) / 5;

    cout << "The average score is " << average << endl;

    return 0;
}