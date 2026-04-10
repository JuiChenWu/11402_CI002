# LeetCode 414. Third Maximum Number

**Week 6 | Before Class**

## Problem Description

給定整數陣列 `nums`，請回傳「第三大的不重複數字」。如果不存在第三大的不重複數字，則回傳最大的數字。

- [Problem](https://leetcode.com/problems/third-maximum-number/)

## Learning Objectives

- [x] 維護前三大「不重複」值
- [x] 邊界處理：重複值、資料量不足 3 個 distinct
- [x] 不用排序也能完成（單次掃描思維）

## Solution Approach（依本程式碼）

### Algorithm Logic

程式用三個變數 `f, s, t` 分別代表目前找到的第一大、第二大、第三大（以 `LONG_MIN` 當作尚未設定的哨兵值）：

1. 初始化 `f=s=t=LONG_MIN`。
2. 逐一掃描每個 `n`：
   - 若 `n > f`：代表成為新的第一大，原本的 `f` 往下推到 `s`，`s` 推到 `t`。
   - 否則若 `n` 介於 `(s, f)` 之間：更新第二大，並把原本第二大推到第三大。
   - 否則若 `n` 介於 `(t, s)` 之間：更新第三大。
3. 掃描完後：
   - 若第三大 `t` 仍是 `LONG_MIN` 或 `t==s`（代表沒有第三個 distinct），回傳 `f`
   - 否則回傳 `t`

### Key Insights

- 條件 `n>s && n<f` 與 `n>t && n<s` 用來避免把重複值塞進第二/第三大。
- 這個解法是單次掃描，不需要排序，但要很小心邊界與重複。

## Code

- [source code](./src/s1143338-LeetCode414.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n)\)
- **Space Complexity:** \(O(1)\)

## References

- [LeetCode 414](https://leetcode.com/problems/third-maximum-number/)

