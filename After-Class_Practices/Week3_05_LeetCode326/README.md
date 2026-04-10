# LeetCode 326. Power of Three

**Week 3 | After Class**

## Problem Description

判斷整數 `n` 是否為 3 的冪次（1, 3, 9, 27, ...）。`n` 必須大於 0。

- [Problem](https://leetcode.com/problems/power-of-three/)

## Learning Objectives

- [x] 透過整除迴圈判斷冪次
- [x] 邊界處理（0、負數）
- [x] 簡潔的數學/迴圈實作

## Solution Approach

### Algorithm Logic

1. 若 `n <= 0`，直接回傳 `false`。
2. 當 `n != 1` 時重複：
   - 若 `n % 3 != 0`，代表不是 3 的冪次，回傳 `false`。
   - 否則 `n /= 3`。
3. 若最後能除到 `n == 1`，回傳 `true`。

### Key Insights

- 只要 `n` 是 3 的冪次，必能一直被 3 整除直到變成 1。
- 這個做法直觀且容易避免浮點誤差。

## Code

- [source code](./src/s1143338-LeetCode326.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(\log_3 n)\)
- **Space Complexity:** \(O(1)\)

## References

- [LeetCode 326](https://leetcode.com/problems/power-of-three/)

