// 零錢問題
#include <iostream>
using namespace std;

int main() {
    int cash;

    cout << "金額：";
    cin >> cash;

    // 硬幣最少個數的組合就是盡量往數字大的硬幣拿取

    int coin50 = cash / 50;
    cout << "50 元硬幣共 " << coin50 << " 個\n";

    // 將已拿取的金額扣掉
    cash -= 50 * coin50;

    // 以下依此類推 10 元情況
    int coin10 = cash / 10;
    cout << "10 元硬幣共 " << coin10 << " 個\n";
    cash -= 10 * coin10;

    // 以下依此類推 5 元情況
    int coin5 = cash / 5;
    cout << "5 元硬幣共 " << coin5 << " 個\n";
    cash -= 5 * coin5;

    // 剩下的都給 1 元
    cout << "1 元硬幣共 " << cash << " 個";
}
