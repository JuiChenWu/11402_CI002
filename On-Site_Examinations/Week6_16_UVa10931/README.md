# UVa 10931 — Parity

**Week 6 | On-site**

## Problem Description

給定正整數 \(N\)，請輸出它的二進位表示，以及其中 `1` 的個數（parity）。格式類似：

`The parity of <binary> is <count> (mod 2).`

- [Problem PDF](https://onlinejudge.org/external/109/10931.pdf)

## Learning Objectives

- [x] 進位表示（十進位轉二進位）
- [x] 統計 bit count（popcount）
- [x] 遞迴輸出與格式控制

## Solution Approach

### Algorithm Logic（依本程式碼）

程式用遞迴 `dfs(cur)` 從最高位到最低位輸出二進位：

1. `dfs(cur)` 先遞迴到更大的權重（`cur<<1`），直到 `cur >= N` 附近，達成「先走到最高位」的效果。
2. 回到當層時：
   - 若 `N >= cur`：代表此位為 1，輸出 `'1'`，`N -= cur`，並把 `res++`（統計 1 的數量）。
   - 否則若已經開始輸出（`start==true`）：輸出 `'0'`（避免前導 0）。
3. 主程式每次讀入 `N`（直到 0 結束），先印前綴字串，再呼叫 `dfs(1)` 輸出二進位並同時計算 parity。

### Key Insights

- `start` 用來避免前導 0，確保輸出的二進位表示從最高位的 1 開始。
- `res` 就是二進位中 1 的個數，題目稱為 parity。

## Code

- [source code](./src/s1143338-UVa10931.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(\log N)\)（遞迴深度與輸出位數）
- **Space Complexity:** \(O(\log N)\)（遞迴呼叫堆疊）

## References

- [UVa 10931](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=0&page=show_problem&problem=1872)

