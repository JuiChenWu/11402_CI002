# LeetCode 349. Intersection of Two Arrays

**Week 5 | After Class**

## Problem Description

給你兩個整數陣列 `nums1`、`nums2`，請回傳它們的「交集」（intersection），結果中每個元素必須唯一（不重複），順序不拘。

- [Problem](https://leetcode.com/problems/intersection-of-two-arrays/)

## Learning Objectives

- [x] 交集概念與去重
- [x] 使用標記陣列（visited）避免重複加入答案
- [x] 巢狀迴圈比對的基本實作

## Solution Approach（依本程式碼）

### Algorithm Logic

程式假設數值範圍在 `0..1000`，用 `vis[1001]` 來避免答案重複：

1. 初始化 `vis` 全為 `false`，`res` 為空。
2. 逐一取 `n1` 於 `nums1`：
   - 若 `vis[n1]` 已為 `true`，表示 `n1` 已經被加入過答案，跳過。
   - 否則掃描 `nums2` 找是否存在同值 `n2`：
     - 若找到 `n1==n2`，把 `n1` 加入 `res`，並設 `vis[n1]=true`，停止內層搜尋。
3. 回傳 `res`。

### Key Insights

- `vis` 的目的不是記錄 nums2 是否出現，而是確保「答案中的每個值只加入一次」。
- 若題目允許更大範圍，通常會改用 `unordered_set`（本程式碼使用固定陣列更快更簡單）。

## Code

- [source code](./src/s1143338-LeetCode349.cpp)

## Complexity Analysis

- **Time Complexity:** 最壞 \(O(n_1 \cdot n_2)\)
- **Space Complexity:** \(O(1)\)（固定 1001 大小的陣列；不含輸出）

## References

- [LeetCode 349](https://leetcode.com/problems/intersection-of-two-arrays/)

