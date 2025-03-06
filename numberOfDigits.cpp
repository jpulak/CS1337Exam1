// to check if a character is a digit and get the count
#include <iostream>
#include <cctype> // for isdigit

using namespace std;

int main() {
    char word[8]; // Assuming the input word will be exactly 7 characters long
    cout << "Input your 7-letter word: ";
    cin.getline(word, 8);

    int digitCount = 0;

    // Check each character in the word
    for (int i = 0; i < 7; i++) {
        if (isdigit(word[i])) {
            digitCount++;
        }
    }

    cout << "The number of digits in the word is: " << digitCount << endl;

    return 0;
}
/*
Input your 7-letter word: A45d3f5g6
The number of digits in the word is: 4*/
