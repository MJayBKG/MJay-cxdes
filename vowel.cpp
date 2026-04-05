#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c + ('a' - 'A'); // convert uppercase to lowercase
    }
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string line;
    while (true) {
        getline(cin, line);
        if (line == "end") {
            break;
        }

        int vowelCount = 0;
        for (char c : line) {
            if (isVowel(c)) {
                vowelCount++;
            }
        }
        cout << vowelCount << endl;
    }
    return 0;
}
