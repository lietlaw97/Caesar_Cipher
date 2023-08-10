#include <iostream>


void decrypt(std::string encryptedtext, int rotation) {

    std::string decryptedtext;
    int size = encryptedtext.size();
    for (int j = 0; j < size; j++) {
        char c = encryptedtext[j];
        if (c >= 'A' && c <= 'Z') {
            decryptedtext += ((c - 'A' - rotation) % 26 + 26) % 26 + 65;
        }
        else if (c >= 'a' && c <= 'z') {
            decryptedtext += ((c - 'a' - rotation) % 26 + 26) % 26 + 97;
        }
        else {
            decryptedtext += c;
        }
    }
    std::cout << "PlainText: " << decryptedtext << '\n';

}
