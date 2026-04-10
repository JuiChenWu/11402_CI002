# LeetCode 48. Rotate Image

**Week 4 | Before Class**

## Problem Description

給定一個 \(n \times n\) 的矩陣 `matrix`，請把它**原地**順時針旋轉 90 度（in-place 修改）。

- [Problem](https://leetcode.com/problems/rotate-image/)

## Learning Objectives

- [x] 矩陣座標轉換（旋轉映射）
- [x] 原地操作 vs 使用額外矩陣的取捨
- [x] \(O(n^2)\) 的遍歷實作

## Solution Approach（依本程式碼）

### Algorithm Logic

本程式使用一個同尺寸的暫存矩陣 `res` 來完成旋轉，再覆蓋回 `matrix`：

1. `res` 先複製 `matrix`（同尺寸）。
2. 對所有座標 `(i, j)`：
   - 把 `matrix[i][j]` 放到旋轉後的位置：`res[j][n-1-i] = matrix[i][j]`
3. 最後把 `matrix` 指派成 `res`，完成旋轉。

### Key Insights

- 順時針 90 度旋轉的映射：\((i, j) \rightarrow (j, n-1-i)\)。
- 題目要求 in-place；這份程式碼用額外矩陣完成（空間 \(O(n^2)\)）。若要符合進階 in-place，可改「轉置 + 每列反轉」的做法。

## Code

- [source code](./src/s1143338-LeetCode48.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n^2)\)
- **Space Complexity:** \(O(n^2)\)（使用額外矩陣 `res`）

## References

- [LeetCode 48](https://leetcode.com/problems/rotate-image/)
