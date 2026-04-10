# LeetCode 88. Merge Sorted Array

**Week 5 | Before Class**

## Problem Description

給兩個已排序陣列 `nums1`、`nums2`，其中 `nums1` 後面有足夠空間容納 `nums2`。請把 `nums2` 合併進 `nums1`，並使 `nums1` 仍為非遞減排序（in-place）。

- [Problem](https://leetcode.com/problems/merge-sorted-array/)

## Learning Objectives

- [x] 理解 in-place 合併的題意
- [x] 熟悉排序與容器操作
- [x] 邊界處理（`n=0`、`m=0`）

## Solution Approach

### Algorithm Logic（依本程式碼）

本程式採用「先把 `nums2` 放入 `nums1`，再整體排序」：

1. 若 `n > 0`：
   - 先把 `nums1` 尾端預留的 `n` 個 0（或佔位值）移除。
   - 再把 `nums2` 的元素全部 push 到 `nums1` 後面。
2. 對 `nums1` 全部元素做 `sort()`，完成合併。

### Key Insights

- 這是最直觀的做法，實作簡單，但時間複雜度較高。
- 題目也有經典的 \(O(m+n)\) 兩指標「從尾端填回去」解法（可再優化）。

## Code

- [source code](./src/s1143338-LeetCode88.cpp)

## Complexity Analysis

- **Time Complexity:** \(O((m+n)\log(m+n))\)（排序主導）
- **Space Complexity:** \(O(1)\)（就地排序；不含排序實作可能使用的額外空間）

## References

- [LeetCode 88](https://leetcode.com/problems/merge-sorted-array/)

