# 信用卡卡號驗證
> 改編自 CS50 Problem Set 1
> https://lab.cs50.io/cs50/labs/2018/fall/credit/

使用 long int 儲存卡號，並測試卡號是否為 MasterCard 或 Visa。

## 卡號的位數
* MasterCard: 16 位
* Visa: 13 位或 16 位

## 起始數字
* MasterCard: `51`~`55`
* Visa: `4`

## 測試資料
* MasterCard `5555555555554444`
* MasterCard `5105105105105100`
* Visa `4111111111111111`
* Visa `4012888888881881`
* Visa `4222222222222`
