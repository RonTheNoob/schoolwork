#include <iostream>
using namespace std;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' 
        || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string input;
    int counter = 0;

    cout << "Enter a sequence of characters: ";
    cin >> input;

    for (char x : input){
        if (isVowel(x)){
            counter++;
        }
    }

    cout << "There are " << counter << " vowels in the sequence." << endl;

    return 0;
}