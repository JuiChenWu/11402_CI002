# LeetCode 33. Search in Rotated Sorted Array

**Week 7 | After Class**

## Problem Description

給你一個原本遞增排序、但被旋轉過的陣列 `nums`（元素互不相同），以及 `target`。請在 \(O(\log n)\) 時間內回傳 `target` 的 index；若不存在回傳 -1。

- [Problem](https://leetcode.com/problems/search-in-rotated-sorted-array/)

## Learning Objectives

- [x] 找旋轉點（pivot / rotation index）
- [x] 將旋轉陣列映射成「虛擬有序」再二分
- [x] 二分搜尋的細節與邊界

## Solution Approach（依本程式碼）

### Algorithm Logic

本程式分成兩段二分：

1. **先找旋轉點 `rt`（最小元素的位置）**
   - 用 `Ls, Rs` 夾住區間，若 `nums[mid] > nums[Rs]` 代表最小值在右半，否則在左半（含 mid）
   - 迴圈結束後 `rt=Ls`
2. **在「旋轉後的虛擬排序序列」做一般二分**
   - 在索引 `mid` 上，把它映射回真正位置 `real_mid = (mid + rt) % n`
   - 用 `nums[real_mid]` 與 `target` 比較來縮小範圍
   - 找到就回傳 `real_mid`，否則 -1

### Key Insights

- 旋轉陣列可以視為「兩段遞增序列」拼接；先找到最小值位置就能把它還原成有序序列的索引對應。
- 映射 `real_mid` 的技巧可讓第二段二分完全像在一般遞增陣列上操作。

## Code

- [source code](./src/s1143338-LeetCode33.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(\log n)\)（兩次二分，仍為 \(O(\log n)\)）
- **Space Complexity:** \(O(1)\)

## References

- [LeetCode 33](https://leetcode.com/problems/search-in-rotated-sorted-array/)

