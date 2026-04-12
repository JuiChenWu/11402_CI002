# LeetCode 1109. Corporate Flight Bookings

**Week 9 | Before Class**

## Problem Description

給你一個 `bookings` 陣列，其中每筆為 `[first, last, seats]`，表示從航班編號 `first` 到 `last`（包含兩端）每個航班都訂了 `seats` 個座位。另給航班總數 `n`（航班編號為 1..n）。請回傳長度為 `n` 的陣列 `answer`，其中 `answer[i]` 表示第 `i+1` 個航班的總訂位數。

- [Problem](https://leetcode.com/problems/corporate-flight-bookings/)

## Learning Objectives

- [x] 差分陣列（difference array）
- [x] 前綴和（prefix sum）還原結果
- [x] 區間加法的 \(O(1)\) 更新技巧

## Solution Approach（依本程式碼）

### Algorithm Logic

1. 建立差分陣列 `pfs`（大小 `n`，初始為 0）。
2. 對每筆 booking `[l, r, seats]`（題目是 1-based）：
   - 在 `pfs[l-1] += seats`（從 l 開始增加）
   - 若 `r < n`，在 `pfs[r] -= seats`（在 r+1 開始抵消；以 0-based 表示就是 index `r`）
3. 用前綴和把差分還原成答案 `res`：
   - `res[0] = pfs[0]`
   - `res[i] = res[i-1] + pfs[i]`
4. 回傳 `res`。

### Key Insights

- 若直接對每筆 booking 去加區間會是 \(O(n \cdot m)\)；差分能把每筆更新降為 \(O(1)\)，再用一次前綴和 \(O(n)\) 還原。
- 抵消的位置是 `r+1`，換成 0-based index 就是 `r`（因為題目 `r` 本身是 1-based）。

## Code

- [source code](./src/s1143338-LeetCode1109.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n + m)\)  
  - \(m = |bookings|\)
- **Space Complexity:** \(O(n)\)

## References

- [LeetCode 1109](https://leetcode.com/problems/corporate-flight-bookings/)

