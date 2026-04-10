# UVa 11136 — Hoax or what

**Week 5 | On-site**

## Problem Description

每天會收到一批帳單金額。對於每一天，你需要把當天所有收到的帳單加入集合中，然後從集合中取出「最大值」與「最小值」各一張，計算差值並累加到答案，最後把這兩張帳單從集合移除。輸入以天數為多筆測資，直到讀到 0 結束。

- [Problem PDF](https://onlinejudge.org/external/111/11136.pdf)

## Learning Objectives

- [x] 多日累積資料結構的維護
- [x] 每回合取最小/最大並刪除
- [x] 讀到 0 結束的輸入模式

## Solution Approach

### Algorithm Logic

程式使用 `unordered_map<bill, count>` 維護目前集合中每個金額的張數：

1. 讀入天數 `T`，若為 0 則結束。
2. 對每一天：
   - 讀入當天帳單張數 `N`，逐筆讀入金額 `tmp`，對 `dat[tmp]++`。
   - 掃描整個 `unordered_map`，找出目前集合中的 `minn` 與 `maxx`（忽略 count<=0 的項目，並把它們清成 0）。
   - `res += maxx - minn`
   - `dat[maxx]--`、`dat[minn]--`（等同移除最大/最小各一張）
3. 輸出累積 `res`。

### Key Insights

- 典型解法會用 `multiset` 在 \(O(\log M)\) 內取 min/max；此程式改用 hash map 並以「掃描所有 key」取得 min/max。
- 掃描時需要跳過已被扣到 0 的項目，避免干擾 min/max 的判斷。

## Code

- [source code](./src/s1143338-UVa11136.cpp)

## Complexity Analysis

- **Time Complexity:**  
  - 設 `U` 為不同金額種類數，每天找 min/max 需掃描 `U`：\(O(U)\)  
  - 加總起來約為所有天的 \(O(\sum U)\)（外加讀入帳單 \(O(\text{總帳單數})\)）
- **Space Complexity:** \(O(U)\)

## References

- [UVa 11136](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=0&page=show_problem&problem=2077)

