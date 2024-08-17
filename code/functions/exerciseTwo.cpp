#include <iostream>

using namespace std;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' 
        || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
        cout << "True";
        return true;
    }
    else{
        cout << "False";
        return false;
    }
}

int main(){
    char input;

    cout << "Enter a character: ";
    cin >> input;

    isVowel(input);
    
    return 0;
}