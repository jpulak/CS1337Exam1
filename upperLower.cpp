// Program to recognize whether the characters are upper or lower

#include <iostream>
#include <cctype> // for isupper and islower

using namespace std;

int main() {
    char word[100]; // Assuming the input word will not exceed 100 characters
    cout << "Input your word: ";
    cin.getline(word, 100);

    // Check the first 5 letters
    for (int i = 0; i < 5 && word[i] != '\0'; i++) {
        if (isupper(word[i])) {
            cout << "Letter " << word[i] << " is uppercase." << endl;
        } else if (islower(word[i])) {
            cout << "Letter " << word[i] << " is lowercase." << endl;
        } else {
            cout << "Letter " << word[i] << " is neither uppercase nor lowercase." << endl;
        }
    }

    return 0;
}

/*
Input your word: HeLl0
Letter H is uppercase.
Letter e is lowercase.
Letter L is uppercase.
Letter l is lowercase.
Letter 0 is neither uppercase nor lowercase.
*/
