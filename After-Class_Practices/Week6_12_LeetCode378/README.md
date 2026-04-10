# LeetCode 378. Kth Smallest Element in a Sorted Matrix

**Week 6 | After Class**

## Problem Description

給你一個 `n x n` 矩陣 `matrix`，每一列與每一行都是遞增排序。請回傳第 `k` 小的元素（\(1 \le k \le n^2\)）。

- [Problem](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/)

## Learning Objectives

- [x] 將二維資料展平成一維再處理
- [x] 排序後取第 k 小（基礎解法）
- [x] 了解可進一步優化（heap / 二分答案）

## Solution Approach（依本程式碼）

### Algorithm Logic

1. 建立一維陣列 `tmp`。
2. 逐列逐元素把 `matrix` 的所有元素 push 進 `tmp`。
3. 對 `tmp` 排序。
4. 回傳 `tmp[k-1]`（因為 k 是 1-based）。

### Key Insights

- 這是最直接且容易實作的方式，適合快速 AC。
- 題目矩陣本身具遞增性，典型優化能做到更快（例如用 min-heap 或二分答案 + 計數），但本程式選擇簡單解。

## Code

- [source code](./src/s1143338-LeetCode378.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n^2 \log(n^2))\)
- **Space Complexity:** \(O(n^2)\)

## References

- [LeetCode 378](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/)

