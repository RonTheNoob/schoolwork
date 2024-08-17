#include <iostream>

using namespace std;

int main() {
    int budget, expe, total;
    int count = 1;
    
    cout << "Enter the amount that you are going to budget for the week: $";
    cin >> budget;
    cout << endl;
    
    while (count <= 7){
        cout << "Enter the amount spent on Day " << count << ": $";
        cin >> expe;
        total = total + expe;
        count++;
    }
    
    cout << endl;
    cout << "The total amount spent is: $" << total << endl;
    
    if (total > budget){
        cout << "You spent over the budget!" << endl;
    }
    else if (total < budget){
        cout << "You spent under the budget!" << endl;
    }
    else {
        cout << "You spent your exact budget!" << endl;
    }

    return 0;
}
