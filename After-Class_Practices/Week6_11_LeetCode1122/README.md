# LeetCode 1122. Relative Sort Array

**Week 6 | After Class**

## Problem Description

給你兩個陣列 `arr1`、`arr2`，其中 `arr2` 的元素各不相同且都出現在 `arr1` 中。請對 `arr1` 進行「相對排序」：

- `arr2` 中出現的元素要依照 `arr2` 的順序排列
- 不在 `arr2` 中的元素要放在最後，且依遞增排序

回傳排序後的陣列。

- [Problem](https://leetcode.com/problems/relative-sort-array/)

## Learning Objectives

- [x] 依照自訂順序排序（不是一般大小）
- [x] 把「不在 arr2」的元素另外收集並排序
- [x] 邏輯實作與去向（分流）思維

## Solution Approach（依本程式碼）

### Algorithm Logic

程式把結果分成兩段：先收集不在 `arr2` 的元素，再把 `arr2` 的元素依序補回來。

1. `tmp`：長度為 `arr2.size()` 的計數陣列，初始化為 1（程式用 `1` 當作之後 `--tmp[i]` 的迴圈技巧）。
2. 倒序掃描 `arr1`：
   - 對每個 `arr1[i]`，掃描 `arr2`：
     - 若等於 `arr2[j]`：把 `tmp[j]++`（計數 +1），並停止內層
     - 若掃到最後都沒找到：把此元素放進 `res`（代表不在 arr2）
3. `res` 目前是「不在 arr2 的元素」的集合：
   - 先 `sort(res)` 變成遞增
   - 再 `reverse(res)`，為了後續方便把 `arr2` 的元素用 `push_back` 接在尾端
4. 從 `arr2` 倒序走訪：
   - `while(--tmp[i]) res.push_back(arr2[i]);`  
     - 因為 `tmp` 初始為 1，所以實際 push 的次數等於 `arr2[i]` 在 `arr1` 出現次數
5. 最後 `reverse(res)`，得到：
   - 前段是依 `arr2` 順序
   - 後段是不在 `arr2` 的遞增排序

### Key Insights

- 這份程式碼的關鍵是用 `tmp` 計數每個 `arr2` 元素出現次數，然後再依 `arr2` 的順序展開。
- 透過兩次 `reverse` 達成「先做尾端 append，再整體翻回正確順序」。

## Code

- [source code](./src/s1143338-LeetCode1122.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n\cdot m + r\log r)\)  
  - \(n=|arr1|\)、\(m=|arr2|\)、\(r\) 為不在 `arr2` 的元素數量（用 sort 排序）
- **Space Complexity:** \(O(r + m)\)

## References

- [LeetCode 1122](https://leetcode.com/problems/relative-sort-array/)

