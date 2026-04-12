# LeetCode 724. Find Pivot Index

**Week 9 | Before Class**

## Problem Description

給定整數陣列 `nums`，請找出「樞紐索引」(pivot index)：使得該索引左邊元素總和等於右邊元素總和。若有多個 pivot index，回傳最左邊的那個；若不存在回傳 -1。

- [Problem](https://leetcode.com/problems/find-pivot-index/)

## Learning Objectives

- [x] 前綴和/累加的應用
- [x] 用總和與左和推得右和
- [x] 單次掃描找最左解

## Solution Approach（依本程式碼）

### Algorithm Logic

1. 先計算全陣列總和 `sum`。
2. 維護左側累加 `Ls=0`。
3. 逐一掃描 index `i`：
   - 右側總和可由 `sum - Ls - nums[i]` 得到
   - 若 `Ls == sum - Ls - nums[i]`，代表 i 是 pivot index，立刻回傳 `i`（保證最左）
   - 否則更新 `Ls += nums[i]` 繼續
4. 掃描完仍無解則回傳 -1。

### Key Insights

- 不需要額外前綴陣列：用 `sum` 與 `Ls` 即可在 \(O(1)\) 算出右和。
- 一找到就回傳，符合題目要最左的 pivot index。

## Code

- [source code](./src/s1143338-LeetCode724.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n)\)
- **Space Complexity:** \(O(1)\)

## References

- [LeetCode 724](https://leetcode.com/problems/find-pivot-index/)

