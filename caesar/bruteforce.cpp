#include <iostream>
#include <vector>
#include <numeric>

void bruteForce(std::string encryptedtext) {

    std::string decryptedtext;
    int size = encryptedtext.size();
    int start = 1, end = 26;
    std::vector<int> myRange(end - start + 1);
        std::iota(myRange.begin(), myRange.end(), start);
    for (int num : myRange) {
        decryptedtext = ""; // Reset decryptedtext for each iteration
            for (int i = 0; i < size; i++) {
                char c = encryptedtext[i];
                if (c >= 'A' && c <= 'Z') {
                    decryptedtext += ((c - 'A' - num + 26) % 26) + 'A'; // Use 'A' = 65 in ascii
                }
                else if (c >= 'a' && c <= 'z') {
                    decryptedtext += ((c - 'a' - num + 26) % 26) + 'a'; // Use 'a' = 97 in ascii
                }
                else {
                    decryptedtext += c; // Keep non-letter characters as they are
                }
            }
   std::cout << "Key " << num << ": " << decryptedtext << '\n';
    }
}






