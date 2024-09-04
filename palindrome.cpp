#include <iostream>
#include <cstring>

using namespace std;

int main () {

  // initialize variables
  char str[80];
  cout << "Enter a string." << endl;

  cin.get(str, 80);
  cin.get();

  // removing punctuation
  char strFiltered[80];
  int count = 0;
  for (int i = 0; i < 80; i++) {
    if (isalnum(str[i]) != 0 && str[i] != '\0') {
      // is an alphanumeric character (a-z, A-Z, 0-9)
      strFiltered[count] = str[i];
      count++;
      cout << strFiltered << " " << count << endl;
    }
  }

  strFiltered[count] = '\0';

  cout << "strFiltered " << strFiltered << endl;

  // change to lowercase
  char strLower[80];
  for (int i = 0; i < 80; i++) {
    if ((int(strFiltered[i]) >= 65) && (int(strFiltered[i]) <= 90)) {
      strLower[i] = int(strFiltered[i]) + 32;
    }
    else {
      strLower[i] = strFiltered[i];
    }
  }

  cout << "strLower " << strLower << endl;
  
  // reverse string
  char strReverse[80];
  int position = 0;
  // we use count, a variable from earlier that also counted
  // the number of chars in the actual string (not just the
  // length of the array)
  for (int i = count - 1; i >= 0; i--) { 
    strReverse[position] = strLower[i];
  }

  cout << "strReverse " << strReverse << endl;

  // compare string and its reverse
  if (strcmp(strLower, strReverse) == 0) {
    cout << "Palindrome." << endl;
  }
  else {
    cout << "Not a palindrome." << endl;
  }
  
  return 0;
}
