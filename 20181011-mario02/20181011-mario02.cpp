// 馬力歐三角形 1：基本版靠右三角形
#include <iostream>
using namespace std;

int main() {
    int height;

    do {
        cout << "Height: ";
        cin >> height;
    } while (height < 1 || height > 8); // 檢查使用者輸入的高度範圍為 1~8


    for (int i = 1; i <= height; i++) {
        // 各行的空白個數 == 高度 - 第幾行
        for (int space = 0; space < height - i; space++) {
            cout << " ";
        }

        // 星號個數 == 第幾行
        for (int star = 0; star < i; star++) {
            cout << "*";
        }

        // 凹槽
        cout << "  ";

        // 星號個數 == 第幾行
        for (int star = 0; star < i; star++) {
            cout << "*";
        }

        // 輸出完每一行的東西要換行
        cout << "\n";
    }
}
