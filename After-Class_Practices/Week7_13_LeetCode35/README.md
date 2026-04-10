# LeetCode 35. Search Insert Position

**Week 7 | After Class**

## Problem Description

給定遞增排序陣列 `nums` 與 `target`。若 `target` 存在，回傳其索引；否則回傳 `target` 應插入的位置索引，使陣列仍保持排序。

- [Problem](https://leetcode.com/problems/search-insert-position/)

## Learning Objectives

- [x] 理解插入點（lower_bound）概念
- [x] 二分搜尋的 API 使用
- [x] 0..n 的插入邊界（可能插在最前或最後）

## Solution Approach（依本程式碼）

### Algorithm Logic

1. 直接回傳 `lower_bound(nums.begin(), nums.end(), target) - nums.begin()`。
2. `lower_bound` 回傳第一個 `>= target` 的位置：
   - 若 target 已存在，剛好是它的索引
   - 若不存在，剛好是應插入的位置

### Key Insights

- 題目要的其實就是「第一個不小於 target 的位置」。

## Code

- [source code](./src/s1143338-LeetCode35.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(\log n)\)
- **Space Complexity:** \(O(1)\)

## References

- [LeetCode 35](https://leetcode.com/problems/search-insert-position/)

