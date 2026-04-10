# UVa 299 — Train Swapping

**Week 5 | On-site**

## Problem Description

給定一列火車車廂的編號，允許你只用「相鄰交換」把序列排序成遞增。請輸出最少需要幾次相鄰交換。

- [Problem PDF](https://onlinejudge.org/external/2/299.pdf)

## Learning Objectives

- [x] 理解相鄰交換次數 = 反轉對數（inversions）
- [x] 使用排序/模擬（bubble swap 思維）
- [x] 練習多筆測資輸入輸出

## Solution Approach

### Algorithm Logic

本解法直接用雙迴圈模擬「氣泡排序」的交換：

1. 對所有 \(i<j\) 的配對檢查，若 `dat[i] > dat[j]`，就交換它們並把答案加 1。
2. 最終的交換次數就是把序列排成遞增所需的最少相鄰交換次數。

### Key Insights

- 氣泡排序每次交換都在消去一個反轉對，因此總交換數等於反轉對數。
- 題目資料量不大時，\(O(N^2)\) 的做法即可通過。

## Code

- [source code](./src/s1143338-UVa299.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(N^2)\)
- **Space Complexity:** \(O(N)\)

## References

- [UVa 299](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=235)

