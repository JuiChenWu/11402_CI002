# LeetCode 704. Binary Search

**Week 7 | Before Class**

## Problem Description

給定一個遞增排序陣列 `nums` 與 `target`，請回傳 `target` 的索引；若不存在回傳 -1。

- [Problem](https://leetcode.com/problems/binary-search/)

## Learning Objectives

- [x] 二分搜尋（binary search）
- [x] 使用 `lower_bound` 找到第一個 `>= target` 的位置
- [x] 不存在時的邊界判斷（`end()` 或值不等）

## Solution Approach（依本程式碼）

### Algorithm Logic

1. 使用 `lower_bound(nums.begin(), nums.end(), target)` 取得 iterator `it`。
2. 若 `it==nums.end()` 或 `*it!=target`，代表找不到，回傳 -1。
3. 否則回傳索引 `it - nums.begin()`。

### Key Insights

- `lower_bound` 在有序陣列上是二分搜尋，能在 \(O(\log n)\) 找到目標插入點。
- 找到插入點後仍需檢查值是否真的等於 `target`。

## Code

- [source code](./src/s1143338-LeetCode704.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(\log n)\)
- **Space Complexity:** \(O(1)\)

## References

- [LeetCode 704](https://leetcode.com/problems/binary-search/)

