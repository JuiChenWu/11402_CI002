# UVa 501 — Black Box

**Week 6 | On-site**

## Problem Description

你會得到一個數列與一組查詢。依序插入數字後，在指定時刻需要輸出目前資料結構中第 \(i\) 小的數（類似逐步取 order statistic）。

- [Problem PDF](https://onlinejudge.org/external/5/501.pdf)

## Learning Objectives

- [x] 依序插入資料並維護排序
- [x] 取第 k 小（order statistic）概念
- [x] 處理多筆測資與空行格式

## Solution Approach（依本程式碼）

### Algorithm Logic

程式做法是「用 vector 模擬插入」：

1. 讀入 `N`（要插入的數字個數）與 `M`（要輸出的次數）。
2. 先把 `N` 個數字讀進 `dat`（標記為 `false`）。
3. 讀入 `M` 個查詢值 `x`，把一個標記為 `true` 的節點插入到 `dat` 的特定位置 `i + x`，並記錄它代表「第 i 次輸出」。
4. 依序掃描 `dat`：
   - 若遇到 `false`：代表要插入一個數字到 `us`（維持 `us` 內部遞增，使用線性插入維持排序）。
   - 若遇到 `true`：輸出 `us[index]`，其中 `index` 是該查詢對應的第幾小。
5. 每個測資之間輸出空行（最後一筆不多印）。

### Key Insights

- 題目本質是動態 order statistic；常見解法是兩個 heap 或平衡樹。
- 本程式用「線性插入維持排序」能正確完成，但效能取決於資料量。

## Code

- [source code](./src/s1143338-UVa501.cpp)

## Complexity Analysis

- **Time Complexity:**  
  - `us` 每次插入為線性 \(O(K)\)，整體最壞約 \(O(N^2)\)
- **Space Complexity:** \(O(N)\)

## References

- [UVa 501](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=0&page=show_problem&problem=442)

