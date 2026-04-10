# UVa 10474 — Where is the Marble?

**Week 7 | On-site**

## Problem Description

給你 \(N\) 顆彈珠的數字，接著有 \(Q\) 個查詢。請把 \(N\) 個數字排序後，對每個查詢值 \(x\)：

- 若存在，輸出它在排序後序列中「第一次出現的位置」（1-based）
- 若不存在，輸出 `not found`

讀到 `N=0, Q=0` 結束。

- [Problem PDF](https://onlinejudge.org/external/104/10474.pdf)

## Learning Objectives

- [x] 排序後二分搜尋（lower_bound）
- [x] 找到「第一次出現位置」
- [x] 多筆測資與指定輸出格式

## Solution Approach

### Algorithm Logic

1. 讀入 `N, Q`，若 `N+Q==0` 結束。
2. 讀入 `N` 個數字到 `dat`，排序。
3. 對每個查詢 `tmp`：
   - `fd = lower_bound(dat.begin(), dat.end(), tmp)`
   - 若 `*fd == tmp`，則 `tmp found at (fd-index + 1)`（1-based）
   - 否則輸出 `tmp not found`
4. 依題目要求印 `CASE# k:` 前綴。

### Key Insights

- `lower_bound` 回傳的是第一個 `>= target` 的位置，因此非常適合找「第一次出現」。
- 要注意查詢不存在時 iterator 可能指到 `end()`，本程式假設查詢範圍使得 `*fd` 可被安全使用；更嚴謹的寫法會先判斷 `fd==end()`。

## Code

- [source code](./src/s1143338-UVa10474.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(N\log N + Q\log N)\)
- **Space Complexity:** \(O(N)\)

## References

- [UVa 10474](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=0&page=show_problem&problem=1415)

