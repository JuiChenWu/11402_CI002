# UVa 100 – 3n+1 (The 3n+1 Problem)

**Week 1 | On-site Easy**

## Problem Description

給定區間 [i, j]，對區間內每個數字 n 執行 3n+1 猜想：若 n 為奇數則 n = 3n+1，若為偶數則 n = n/2，直到 n 變為 1。求區間內所有數字中，**cycle length**（變為 1 所需的步數）的最大值。

- [Problem PDF](https://onlinejudge.org/external/1/100.pdf)

## Learning Objectives

- [x] 理解 3n+1 猜想（Collatz conjecture）
- [x] 實作迭代邏輯與迴圈
- [x] 練習 C++ 的輸入/輸出處理

## Solution Approach

### Algorithm Logic

1. 讀入 i, j，取 min 與 max 作為區間 [N, M]
2. 對區間內每個數字 k：
   - 初始化 `tmp = 1`（cycle length）
   - 當 k ≠ 1 時：若 k 為奇數則 k = 3k+1，否則 k = k/2，`tmp++`
   - 更新 `maxx = max(maxx, tmp)`
3. 輸出 i, j, maxx

### Key Insights

- 區間 [i, j] 的 i 可能大於 j，需用 min/max 正確處理
- 3n+1 猜想的 cycle length 無法用公式預測，必須模擬
- 使用 `getchar()` 自訂 read 以加速 I/O

## Code Structure

```cpp
// 對 [N, M] 內每個數字模擬 3n+1 過程
for(int i=N; i<=M; ++i){
    tmp_N = i;
    tmp = 1;
    while(tmp_N != 1){
        tmp_N = (tmp_N & 1) ? tmp_N*3+1 : tmp_N/2;
        ++tmp;
    }
    maxx = max(maxx, tmp);
}
```

[source code](./src/s1143338-UVa100.cpp)

## Complexity Analysis

- **Time Complexity:** O((M − N + 1) × L)  
  - L 為平均 cycle length，3n+1 猜想下 L 約 O(log n)，實務上難以精確估計
- **Space Complexity:** O(1)  
  - 僅使用常數個變數

## Notes & Reflection

- 可考慮 memoization 優化重複計算，但本題範圍內直接模擬即可 AC
- 注意 EOF 處理：`read()` 回傳 0 時結束

## References

- [UVa 100](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36)
- [Collatz conjecture - Wikipedia](https://en.wikipedia.org/wiki/Collatz_conjecture)
