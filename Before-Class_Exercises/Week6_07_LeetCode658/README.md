# LeetCode 658. Find K Closest Elements

**Week 6 | Before Class**

## Problem Description

給你一個已排序陣列 `arr`、整數 `k` 與 `x`，請找出 `k` 個最接近 `x` 的元素（結果也要依遞增順序回傳）。距離以 \(|a-x|\) 定義；若距離相同，較小的值視為更接近。

- [Problem](https://leetcode.com/problems/find-k-closest-elements/)

## Learning Objectives

- [x] 雙端收縮（two pointers / shrink window）
- [x] 利用已排序特性比較兩端與 x 的距離
- [x] 注意 tie-break：距離相同時保留較小值

## Solution Approach（依本程式碼）

### Algorithm Logic

本程式把整個陣列當成候選區間，反覆移除「較不接近 x」的端點直到剩下 k 個：

1. 當 `arr.size() > k` 時重複：
   - 比較左端 `arr.front()` 與右端 `arr.back()` 到 `x` 的距離：
     - 若 `x - front <= back - x`：代表右端更遠（或同遠但要保留較小值），因此移除右端 `pop_back()`。
     - 否則移除左端 `erase(arr.begin())`。
2. 回傳剩下的 `arr`。

### Key Insights

- 因為 `arr` 已排序，若要在一段連續區間中挑 k 個最接近 x 的元素，結果一定是一段連續子陣列；因此可用「兩端收縮」保留最佳區間。
- `<=` 的方向剛好對應題目的 tie-break（同距離時保留較小值，等同移除右端）。

## Code

- [source code](./src/s1143338-LeetCode658.cpp)

## Complexity Analysis

- **Time Complexity:** 最壞 \(O(n^2)\)  
  - 迴圈執行 \(n-k\) 次；其中 `erase(arr.begin())` 會造成搬移，單次 \(O(n)\)
- **Space Complexity:** \(O(1)\)（就地修改輸入陣列）

## References

- [LeetCode 658](https://leetcode.com/problems/find-k-closest-elements/)

