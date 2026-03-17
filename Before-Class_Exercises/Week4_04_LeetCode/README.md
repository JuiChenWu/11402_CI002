# Week 4 Before-Class Exercises

**Theme:** Arrays + simulation

## Problem Description

- [LeetCode 169. Majority Element](https://leetcode.com/problems/majority-element/description/) — 找出出現次數超過一半的元素
- [LeetCode 48. Rotate Image](https://leetcode.com/problems/rotate-image/description/) — 將 n×n 矩陣原地旋轉 90 度

## Learning Objectives

- [ ] 陣列遍歷與模擬
- [ ] 原地操作（in-place）技巧
- [ ] Majority Element：Boyer-Moore 投票演算法

## Solution Approach

### LeetCode 169 - Majority Element

- **Boyer-Moore 投票法**：O(n) 時間、O(1) 空間
- 維護 candidate 與 count，遍歷時同則 +1、異則 -1，count 歸零則換 candidate

### LeetCode 48 - Rotate Image

- 順時針 90° = 先沿主對角線翻轉，再左右翻轉（或先上下翻轉再主對角線）
- 原地操作：`matrix[i][j] ↔ matrix[j][i]` 等交換

## Complexity Analysis

- **169:** Time O(n), Space O(1)
- **48:** Time O(n²), Space O(1)

## References

- [LeetCode 169](https://leetcode.com/problems/majority-element/description/)
- [LeetCode 48](https://leetcode.com/problems/rotate-image/description/)
