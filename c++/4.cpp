#include <iostream>
#include <cstring>
using namespace std;

class String {
    char* str;
public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    ~String() {
        delete[] str;
    }

    void operator!() {
        for (int i = 0; str[i] != '\0'; i++) {
            if (islower(str[i]))
                str[i] = toupper(str[i]);
            else if (isupper(str[i]))
                str[i] = tolower(str[i]);
        }
        cout << "Case Reversed: " << str << endl;
    }

    char operator[](int index) {
        return str[index];
    }
};

int main() {
    String s("HeLLo");
    !s;                // Reverse case
    cout << s[1] << endl; // Print character at index 1 ('e')
    return 0;
}
