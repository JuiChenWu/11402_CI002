# UVa 11063 — B2-Sequence

**Week 7 | On-site**

## Problem Description

給你一個序列 \(q_0, q_1, \dots, q_{N-1}\)。它是 B2-Sequence 當且僅當：

1. 所有元素皆為正數
2. 嚴格遞增
3. 所有 \(q_i + q_j\)（\(i \le j\)）的和都互不相同

請對每筆測資輸出是否為 B2-Sequence。

- [Problem PDF](https://onlinejudge.org/external/110/11063.pdf)

## Learning Objectives

- [x] 驗證序列條件（正數、嚴格遞增）
- [x] 使用集合檢查「兩數和」是否重複
- [x] 雙迴圈枚舉與提早停止（early break）

## Solution Approach

### Algorithm Logic

1. 讀入 \(N\) 與序列 `q`。
2. 若有任何 `q[i] < 1`，直接判定不是。
3. 用雙迴圈枚舉所有 \(i \le j\)：
   - 同時檢查嚴格遞增：若 `i<j` 且 `q[j] <= q[i]`，判定不是。
   - 計算 `num = q[i] + q[j]`，若 `set` 已經出現過，判定不是；否則插入。
4. 輸出格式依題目要求顯示 `Case #k: It is (not) a B2-Sequence.`

### Key Insights

- 因為要檢查「所有兩數和不重複」，使用 `set` 可以快速判斷是否已出現過。
- 一旦條件違反就可提早停止，節省時間。

## Code

- [source code](./src/s1143338-UVa11063.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(N^2 \log (N^2)) \approx O(N^2 \log N)\)（插入/查找 set）
- **Space Complexity:** \(O(N^2)\)（儲存所有兩數和）

## References

- [UVa 11063](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=0&page=show_problem&problem=2004)

