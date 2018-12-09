#include <iostream>
using namespace std;
string caesar(int key, string input);

int main() {
    int key;
    cout << "請輸入密鑰：";
    cin >> key;

    string plaintext;
    cout << "請輸入明文：";
    cin >> plaintext;

    string ciphertext = caesar(key, plaintext);

    cout << "密文為：" << ciphertext;
}

string caesar(int key, string plaintext) {
    for (int i = 0; plaintext[i] != '\0'; i++) {
        if (plaintext[i] >= 'A' && plaintext[i] <= 'Z') {         // 大寫
            plaintext[i] += key;
            if (plaintext[i] > 'Z') {
                plaintext[i] -= 26;
            }
        } else if (plaintext[i] >= 'a' && plaintext[i] <= 'z') {  // 小寫
            plaintext[i] += key;
            if (plaintext[i] > 'z') {
                plaintext[i] -= 26;
            }
        }
    }

    return plaintext;
}
