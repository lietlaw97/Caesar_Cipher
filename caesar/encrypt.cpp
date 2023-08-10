#include <iostream>
        

void encrypt(std::string plaintext, int rotation) {

    std::string encryptedText;
    int size = plaintext.size();
    for (int i = 0; i < size; i++) {
        char c = plaintext[i];

        if (c >= 'A' && c <= 'Z') {
            encryptedText += (c - 'A' + rotation) % 26 + 65;
            
        }
        else if (c >= 'a' && c <= 'z') {

            encryptedText += (c - 'a' + rotation) % 26 + 97;
        }
        else {
            encryptedText += c;
        }
    }
    std::cout << "EncryptedText: " << encryptedText << '\n';
}