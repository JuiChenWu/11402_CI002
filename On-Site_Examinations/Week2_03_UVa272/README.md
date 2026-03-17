# UVa 272 – Tex Quotes

**Week 2 | On-site Easy**

## Problem Description

將文字中的雙引號 `"` 轉成 TeX 格式：第一對 `"` → `` ` ` ``，第二對 `"` → `' '`，依此交替。

- [Problem PDF](https://onlinejudge.org/external/2/272.pdf)

## Learning Objectives

- [x] 字串遍歷與字元替換
- [x] 狀態追蹤（交替左右引號）
- [x] 使用 `getline` 處理多行輸入

## Solution Approach

### Algorithm Logic

1. 用 `getline` 讀入所有行，存入 `vector<string> dat`
2. 用布林 `f` 記錄下一個 `"` 是左引號（true）還是右引號（false）
3. 遍歷每行每個字元：
   - 若為 `"`：左引號則替換為 `` ` ` ``，右引號則替換為 `' '`，並切換 `f`
4. 輸出轉換後的字串

### Key Insights

- 左引號 `` ` ` `` 佔兩個字元，右引號 `' '` 也佔兩個字元
- 使用 `insert` 時要注意索引變化，避免重複處理
- EOF 結束輸入（`getline` 回傳 false）

## Code Structure

```cpp
bool f = true;  // true: 下一個是左引號
for(每行){
    for(每字元){
        if(dat[i][j] == '"'){
            if(f) 替換為 `` ` ` ``;
            else  替換為 ' ';
            f = !f;
        }
    }
}
```

[source code](./src/s1143338-UVa272.cpp)

## Complexity Analysis

- **Time Complexity:** O(L × M)  
  - L 為行數，M 為每行字元數；使用 `insert` 時單行可能為 O(M²)
- **Space Complexity:** O(L × M)  
  - 儲存所有輸入

## Notes & Reflection

- 可改為邊讀邊輸出，避免儲存整份輸入，節省空間
- 使用 `string::replace` 或建新字串可簡化實作

## References

- [UVa 272](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208)
