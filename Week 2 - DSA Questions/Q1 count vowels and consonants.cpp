#include <iostream>
using namespace std;

int main() {
    char s[1000];
    cin.getline(s, 1000);

    int vowels = 0, consonants = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}