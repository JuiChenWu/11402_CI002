# LeetCode 179. Largest Number

**Week 5 | Before Class**

## Problem Description

給你一個整數陣列 `nums`，請重新排列其順序，使得把所有數字「串接」後形成的字串代表的數值最大，並回傳該字串。

- [Problem](https://leetcode.com/problems/largest-number/)

## Learning Objectives

- [x] 理解「字串串接比較」的排序規則（非單純數值大小）
- [x] 自訂比較函式（custom comparator）
- [x] 處理前導 0（例如全部都是 0）

## Solution Approach

### Algorithm Logic

1. 將每個整數轉成字串。
2. 以自訂規則排序：對任意兩字串 `a`、`b`，若 `a+b > b+a`，則 `a` 應排在 `b` 前面。
3. 排序後依序串接成答案。
4. 若排序後第一個字串是 `"0"`，代表全部都是 0，直接回傳 `"0"`（避免回傳 `"000..."`）。

### Key Insights

- 這題的關鍵不是比「數值大小」，而是比「哪個串接順序更大」。
- 比較 `a+b` 與 `b+a` 可以保證全域排序結果正確（LeetCode 經典技巧）。

## Code

- [source code](./src/s1143338-LeetCode179.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n \log n \cdot L)\)  
  - 排序 \(O(n \log n)\)，每次比較要做字串串接/比較，成本與平均字串長度 \(L\) 有關
- **Space Complexity:** \(O(n \cdot L)\)  
  - 需要存放字串陣列與結果字串

## References

- [LeetCode 179](https://leetcode.com/problems/largest-number/)

