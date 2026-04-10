# LeetCode 148. Sort List

**Week 5 | After Class**

## Problem Description

給定單向鏈結串列的頭節點 `head`，請將串列排序成遞增並回傳排序後的頭節點。題目進階要求 \(O(n \log n)\) 時間、\(O(1)\) 額外空間（遞迴堆疊通常不算或另計）。

- [Problem](https://leetcode.com/problems/sort-list/)

## Learning Objectives

- [x] 鏈結串列的 merge sort
- [x] 使用快慢指標找中點並切分
- [x] 合併兩個已排序鏈結串列

## Solution Approach（依本程式碼）

### Algorithm Logic

本程式使用遞迴的 Merge Sort：

1. **Base case**
   - `head == nullptr` 回傳 `nullptr`
   - `head->next == nullptr` 只有一個節點，直接回傳 `head`
2. **用快慢指標找中點並切兩半**
   - `minn` 每次走一步、`maxx` 每次走兩步
   - 迴圈結束後，`minn` 位於中點前一個位置
   - `maxx = minn->next` 作為右半頭，並 `minn->next=nullptr` 把左半切斷
3. **遞迴排序左右兩半**
   - `head = sortList(head)`
   - `maxx = sortList(maxx)`
4. **合併兩個已排序串列**
   - 用虛擬頭 `start` 與尾指標 `bottom` 逐步挑較小的節點接到結果後面
   - 最後回傳 `start->next`

### Key Insights

- 鏈結串列不適合隨機存取，因此常用 merge sort（切半 + 合併）達成 \(O(n \log n)\)。
- 用快慢指標能在 \(O(n)\) 找到中點，並且方便把串列切成兩段。

## Code

- [source code](./src/s1143338-LeetCode148.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n \log n)\)
- **Space Complexity:** \(O(\log n)\)（遞迴堆疊）

## References

- [LeetCode 148](https://leetcode.com/problems/sort-list/)

