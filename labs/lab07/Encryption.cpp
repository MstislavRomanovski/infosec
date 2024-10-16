
#include <iostream>
#include <string>

using namespace std;

string xor_txt_f(string text, string key)
{
    if (text.size() != key.size()) {
        return "Error";
    }
    string encrypted;

    for (int i = 0; i < text.size(); i++)
    {
        char encr_symbol = text[i] xor key[i];
        encrypted.push_back(encr_symbol);
    }
    return encrypted;

}

string generate_key(int len) {
    char sym[] = "ABCDEF0123456789";
    string key = "";
    for (int i = 0; i < len; i++)
    {
        key.push_back(sym[(rand() + 100) % len]);
    }
    return key;
}

int main()
{
    string word = "This is the message from the encryption code!";

    string key = generate_key(word.size());

    std::cout << "generated key: " << key << "\n";

    string encrypted = xor_txt_f(word, key);

    std::cout << "encrypted message: " << encrypted << "\n";

    string decrypted = xor_txt_f(encrypted,key);

    std::cout << "decrypted message: " << decrypted << "\n";

    string encr_key = xor_txt_f(decrypted,encrypted);

    std::cout << "decrypted key: " << key << "\n";
}

