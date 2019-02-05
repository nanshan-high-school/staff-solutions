// 信用卡卡號驗證
#include <iostream>
using namespace std;

int main() {
    long int number;
    cin >> number;

    int sum = 0; // 目前加總
    int times = 0; // 目前位數
    string company = ""; // 可能的公司

    do {
        // 抓取目前最後的一位數
        int digit = number % 10;

        // 將 number 去除最後一位數
        number /= 10;

        // 如果 number 只剩兩位數
        if (number >= 10 && number <= 99) {
            if (number >= 40 && number <= 49) {
                company = "VISA";
            } else if (number >= 51 && number <= 55) {
                company = "MASTERCARD";
            } else {
                company = "INVALID";
                cout << "INVALID";
                // break;
            }
        }

        // 奇數位才需要乘 2
        if (times % 2 == 1) {
            digit *= 2;
        }

        // 如果 digit 是兩位數，就先把十位數跟個位數相加
        if (digit >= 10) {
            int unitsDigit = digit % 10;
            int tensDigit = digit / 10;

            digit = tensDigit + unitsDigit;
        }

        // 加到加總
        sum += digit;

        // 換下一個位數
        times++;
    } while (number > 0);

    if (sum % 10 != 0) {
        cout << "INVALID";
    } else {
        cout << company;
    }
}
