# UVa 10008 — What's Cryptanalysis?

**Week 5 | On-site**

## Problem Description

給你 \(N\) 行文字，請統計每個英文字母（不分大小寫）的出現次數，並依規則輸出：

1. 次數由大到小
2. 次數相同時，字母由小到大（A 到 Z）

- [Problem PDF](https://onlinejudge.org/external/100/10008.pdf)

## Learning Objectives

- [x] 字元處理（大小寫轉換/判斷）
- [x] 計數統計（frequency counting）
- [x] 自訂排序規則（custom comparator）

## Solution Approach

### Algorithm Logic

1. 建立長度 26 的統計陣列（以 `pair(letterIndex, count)` 儲存）。
2. 讀入每一行，逐字元掃描：
   - 若為 `a-z` 或 `A-Z`，對應到 0..25 的 index，把 count 加 1。
3. 依自訂比較函式排序：
   - `count` 大的排前面
   - `count` 相同時，字母較小（index 較小）排前面
4. 由排序後的結果輸出到第一個 `count==0` 為止。

### Key Insights

- 先統計再排序能讓輸出規則乾淨、好維護。
- 不分大小寫等同於把 `A` 與 `a` 對應到同一個 index。

## Code

- [source code](./src/s1143338-UVa10008.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(T + 26\log 26)\)  
  - \(T\) 為總字元數；排序 26 個元素可視為常數
- **Space Complexity:** \(O(1)\)（固定 26）

## References

- [UVa 10008](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=949)

