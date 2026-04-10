# LeetCode 74. Search a 2D Matrix

**Week 7 | Before Class**

## Problem Description

給你一個 `m x n` 的矩陣 `matrix`，每列遞增且每列的第一個元素都大於前一列的最後一個元素。請判斷 `target` 是否存在於矩陣中。

- [Problem](https://leetcode.com/problems/search-a-2d-matrix/)

## Learning Objectives

- [x] 二分搜尋的應用（在「列」與「列內」各做一次）
- [x] 使用 `lower_bound` 與自訂比較函式
- [x] 空矩陣/空列的邊界處理

## Solution Approach（依本程式碼）

### Algorithm Logic

1. 若 `matrix` 為空或第一列為空，直接回傳 `false`。
2. 先在「列」層級二分，找出可能包含 `target` 的那一列：
   - 對每列 `r` 取 `r.back()`，用 `lower_bound` 找到第一個 `r.back() >= target` 的列 iterator `itb`。
   - 若 `itb == matrix.end()`，代表所有列的最後元素都小於 `target`，回傳 `false`。
3. 在 `itb` 指向的列內再做一次 `lower_bound` 找 `target`：
   - 若找到且值相等，回傳 `true`，否則 `false`。

### Key Insights

- 題目給的矩陣性質等同把整個矩陣攤平成一個全域遞增的序列；因此做二分搜尋一定可行。
- 本程式把二分拆成兩段（找列、找列內），實作上較直覺。

## Code

- [source code](./src/s1143338-LeetCode74.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(\log m + \log n)\)
- **Space Complexity:** \(O(1)\)

## References

- [LeetCode 74](https://leetcode.com/problems/search-a-2d-matrix/)

