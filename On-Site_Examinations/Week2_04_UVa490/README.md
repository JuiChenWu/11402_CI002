# UVa 490 – Rotating Sentences

**Week 2 | On-site Medium**

## Problem Description

將多行文字**順時針旋轉 90 度**後輸出。原本的每一行變成從上到下的一欄，且最後一行變成最左欄、第一行變成最右欄。

- [Problem PDF](https://onlinejudge.org/external/4/490.pdf)

## Learning Objectives

- [x] 二維陣列與座標對應
- [x] 理解旋轉的 index 轉換
- [x] 處理不等長字串（補空格）

## Solution Approach

### Algorithm Logic

1. 預先將 100×100 的 `dat` 陣列填滿空格
2. 讀入每行，記錄最大行寬 `maxx`，並將字元填入 `dat[i][j]`
3. 旋轉 90° 的對應：輸出時 `dat[列][行]` → 第 j 欄由 `dat[i-1][j]` 到 `dat[0][j]`（從下往上）
4. 遍歷 `j = 0..maxx-1`，對每個 j 從最後一行往第一行輸出

### Key Insights

- 旋轉後：原 `(row, col)` → 新 `(n-1-row, col)` 對應到輸出順序的「第 col 欄、從下往上」
- 短行需補空格，否則旋轉後對齊會錯
- 行數與最大行寬需分開記錄

## Code Structure

```cpp
// 讀入並填入 2D 陣列
for(每行) dat[i][j] = s[j];
// 旋轉輸出：每欄從最後一行往第一行
for(int j=0; j<maxx; ++j){
    for(int k=i-1; k>=0; --k)
        cout << dat[k][j];
    cout << '\n';
}
```

[source code](./src/s1143338-UVa490.cpp)

## Complexity Analysis

- **Time Complexity:** O(R × C)  
  - R 為行數，C 為最大行寬
- **Space Complexity:** O(1)  
  - 固定 100×100 陣列（題目限制）

## Notes & Reflection

- 可改用 `vector<string>` 動態儲存，依實際大小配置
- 注意最後一行的換行符號處理

## References

- [UVa 490](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=6&page=show_problem&problem=431)
