# LeetCode 31. Next Permutation

**Week 4 | After Class**

## Problem Description

給定整數陣列 `nums`（視為一個排列），請就地把它變成「字典序（lexicographically）下一個更大的排列」。如果不存在下一個排列（已是最大排列），則改成最小排列（遞增排序）。

- [Problem](https://leetcode.com/problems/next-permutation/)

## Learning Objectives

- [x] 字典序排列的性質
- [x] 找 pivot、交換、反轉尾段的標準流程
- [x] in-place 操作

## Solution Approach（依本程式碼）

### Algorithm Logic

1. 從右往左找第一個「上升」的位置 `n`，使得 `nums[n] < nums[n+1]`：
   - 若一路找不到（`n < 0`），代表整段是非遞增（最大排列），直接反轉整個陣列得到最小排列。
2. 若找到了 `n`：
   - 從右往左找第一個 `nums[m] > nums[n]` 的位置 `m`，交換 `nums[n]` 與 `nums[m]`。
3. 最後把區間 `[n+1, end)` 反轉，使尾段變成最小（因為原本尾段是非遞增，反轉即可變成遞增）。

### Key Insights

- 右側尾段在找 pivot 時已保證是「非遞增」，因此最後一步只需 `reverse`。
- pivot 與「最右邊剛好比 pivot 大」的元素交換，可確保增加幅度最小，得到下一個排列。

## Code

- [source code](./src/s1143338-LeetCode31.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n)\)
- **Space Complexity:** \(O(1)\)

## References

- [LeetCode 31](https://leetcode.com/problems/next-permutation/)

