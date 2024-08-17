#include <iostream>

using namespace std;



int getDigit(int number) {

  if (number < 10) {
    return number;
  } else {
    return 1 + (number - 10);
  }

}

int getSize(long int d) {

  int count = 0;

  while (d != 0) {
    d /= 10;
    count++;
  }

  return count;
}


long getPrefix(long int number, int k) {

  long int temp = number;

  if (getSize(number) < k) {
    return number;
  } else {
    for (int i = 0; i < getSize(number) - k; i++) {
      temp /= 10;
    }

  }

  return temp;
}


bool prefixMatched(long int number, int d) {

  int pref = getPrefix(number, getSize(d));

  if (d == pref) {
    return true;
  }

  return false;
}

int sumOfOddPlace(long number) {

  int sum = 0;

  for (int i = 0; i < getSize(number); i++) {

    if (i % 2 != 0) {
      sum += getPrefix(number, i + 1) % 10;
    }

  }

  return sum;
}

int sumOfDoubleEvenPlace(long int number) {

  int sum = 0;

  for (int i = 0; i < getSize(number); i++) {

    if (i % 2 == 0) {

      sum += getDigit(getPrefix(number, i + 1) % 10 * 2);

    }

  }

  return sum;
}

bool isValid(long int number) {

  if (sumOfDoubleEvenPlace(number) + sumOfOddPlace(number) % 10 == 0) {
    return true;
  } else {
    return false;
  }

}

int main() {

  long long num1 = 4388576018402626;
  long long num2 = 4388576018410707;

  long int num = num2;

  if ((sumOfOddPlace(num) + sumOfDoubleEvenPlace(num)) % 10 == 0) {
    cout<<num<<" is valid.";
  } else {
    cout<<num<<" is invalid.";
  }

}