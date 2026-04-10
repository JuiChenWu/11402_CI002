# UVa 10062 — Tell me the frequencies!

**Week 6 | On-site**

## Problem Description

對於輸入的每一行字串，請統計每個 ASCII 字元出現次數，並依規則輸出：

1. 次數由小到大
2. 次數相同時，ASCII code 由大到小

每一行的輸出之間要空一行。

- [Problem PDF](https://onlinejudge.org/external/100/10062.pdf)

## Learning Objectives

- [x] 字元頻率統計（ASCII 全字元）
- [x] 自訂排序：頻率升序、ASCII 降序
- [x] 多行輸入與空行輸出格式

## Solution Approach

### Algorithm Logic

1. 對每行字串 `S`：
   - 建立 `dat`，內容是 `(asciiCode, count)`，範圍 0..129（程式用 `MAXN=130`）。
   - 逐字元掃描 `S`，對 `dat[int(c)].second++`。
2. 依比較函式排序：
   - `count` 小的排前面
   - `count` 相同時，`asciiCode` 大的排前面
3. 依序輸出 `asciiCode count`，跳過 `count==0`。
4. 控制輸出格式：從第二行開始先印空行，再輸出該行的統計結果。

### Key Insights

- 題目要的是「頻率排序」而非字元排序，因此必須先統計後排序。
- ASCII code 用整數輸出（不是輸出字元本身）。

## Code

- [source code](./src/s1143338-UVa10062.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(L + A\log A)\)  
  - \(L\) 為該行長度，\(A\) 為統計範圍（本程式 130）
- **Space Complexity:** \(O(A)\)

## References

- [UVa 10062](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1003)

