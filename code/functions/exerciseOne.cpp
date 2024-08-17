#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

string isPalindrome(string x)
{
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    string y = x;
    reverse(y.begin(), y.end());
    if (x == y){
        return "is a Palindrome.";
    }
    else{
        return "is not a Palindrome.";
    }
}

int main(){
    string input;

    cout << "Enter a string: ";
    cin >> input;
    
    string check = isPalindrome(input);

    cout << "'" << input << "' " << check;
    
    return 0;
}