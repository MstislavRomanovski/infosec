#include <random>
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
    const string sym = "ABCDEF0123456789";
    random_device random_device;
    mt19937 generator(random_device());
    uniform_int_distribution<> distribution(0, sym.size() - 1);
    string key = "";
    for (int i = 0; i < len; i++)
    {
        key += sym[(distribution(generator))];
    }
    return key;
}

int main()
{
    string word = "This is the test message 1";

    string word2 = "2 is this the test message";

    string key = generate_key(word.size());

    std::cout << "generated key: " << key << "\n";

    string c1 = xor_txt_f(word, key);

    string c2 = xor_txt_f(word2, key);

    std::cout << "encrypted message No1: " << c1 << "\n";

    std::cout << "encrypted message No2: " << c2 << "\n";

    string xored_c1c2 = xor_txt_f(c1,c2);

    std::cout << "xored messages: " << xored_c1c2 << "\n";

    string encr_key = xor_txt_f(xored_c1c2,word);

    std::cout << "decrypted word: " << encr_key << "\n";
}

