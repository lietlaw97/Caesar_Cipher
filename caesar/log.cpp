#include <iostream>
#include <string>

void encrypt(std::string plaintext, int rotation);
void decrypt(std::string encryptedtext, int rotation);
void bruteForce(std::string encryptedtext);

void inputLog() {
    int key;
    std::string text, ans; 
    char mode;
    std::cout << "Would you like to use encrypt or decrypt mode: ";
    std::cin >> ans;
    std::cin.ignore();

    if (ans == "encrypt") {
        std::cout << "Enter plaintext: ";
        std::cin.ignore();
        std::getline(std::cin, text);
        std::cout << "Enter key: ";
        std::cin >> key;
        encrypt(text, key);
    }

    else if (ans == "decrypt") {
        std::cout << "What mode would you like to use? bruteforce or normal mode? b/N: ";
        std::cin.ignore();
        std::cin >> mode;
        char mode2 = tolower(mode);

        if (mode2 == 'b') {
            std::cout << "Enter ciphertext: ";
            std::cin.ignore();
            std::getline(std::cin, text);
         
            bruteForce(text);
        }
            
        else if (mode2 == 'n') {
            std::cout << "Enter ciphertext: ";
            std::cin.ignore();
            std::cin >> text;
            
            std::cout << "Enter key: ";
            std::cin >> key;
            decrypt(text, key);
        }
        else {
            std::cout << "Invalid mode";
        }
    }
    else {
        std::cout << "Invalid option, bye bye :)";
    }

}