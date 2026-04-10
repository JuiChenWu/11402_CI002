# UVa 10107 — What is the Median?

**Week 6 | On-site**

## Problem Description

輸入會是一串整數（直到 EOF），每讀入一個數字，就要輸出目前所有已讀入數字的「中位數」：

- 若數量為奇數：輸出中間那個
- 若數量為偶數：輸出中間兩個的平均（整數除法，題目本身就是整數輸出）

- [Problem PDF](https://onlinejudge.org/external/101/10107.pdf)

## Learning Objectives

- [x] 在線（online）統計中位數
- [x] 維護已讀入資料並取中間值
- [x] EOF 輸入處理

## Solution Approach（依本程式碼）

### Algorithm Logic

1. 用 `vector<int> dat` 保存所有輸入過的數字。
2. 每讀入一個 `N`：
   - `dat.push_back(N)` 後把整個 `dat` 排序。
   - 若 `dat.size()` 為奇數，輸出 `dat[size/2]`。
   - 若為偶數，輸出 `(dat[size/2] + dat[size/2 - 1]) / 2`（程式用右移 `>>1`）。

### Key Insights

- 這個作法簡單，但每次都排序，效能較差。
- 典型優化會用兩個 heap（max-heap + min-heap）把每次更新降到 \(O(\log n)\)。

## Code

- [source code](./src/s1143338-UVa10107.cpp)

## Complexity Analysis

- **Time Complexity:** 若目前共有 \(k\) 個數字，每次排序 \(O(k\log k)\)，總體為 \(O(\sum_{k=1}^{n} k\log k)\)
- **Space Complexity:** \(O(n)\)

## References

- [UVa 10107](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1048)

