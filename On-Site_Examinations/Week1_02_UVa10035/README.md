# UVa 10035 – Primary Arithmetic

**Week 1 | On-site Medium**

## Problem Description

模擬兩個非負整數的「直式加法」，計算相加時會發生幾次**進位**。例如 123 + 456 無進位，而 555 + 555 有 3 次進位。

- [Problem PDF](https://onlinejudge.org/external/100/10035.pdf)

## Learning Objectives

- [x] 理解直式加法的進位規則
- [x] 將數字拆成各位數處理
- [x] 練習陣列與迴圈

## Solution Approach

### Algorithm Logic

1. 讀入 N, M，若皆為 0 則結束
2. 將 N、M 的各位數存入 `dN[10]`、`dM[10]`（個位在 index 0）
3. 從低位到高位模擬加法：
   - `dN[i] += dM[i]`
   - 若 `dN[i] >= 10`：`cnt++`，並將進位加到 `dN[i+1]`
4. 依 cnt 輸出 "No carry operation." / "1 carry operation." / "X carry operations."

### Key Insights

- 最多 10 位數，用固定大小陣列即可
- 進位時要加到下一位，避免重複計算
- 注意單複數輸出格式（0 / 1 / 多）

## Code Structure

```cpp
// 拆解各位數
while(N){ dN[++pt] = N%10; N/=10; }
// 模擬加法並計數進位
for(int i=0; i<10; ++i){
    dN[i] += dM[i];
    if(dN[i] >= 10){ ++cnt; ++dN[i+1]; }
}
```

[source code](./src/s1143338-UVa10035.cpp)

## Complexity Analysis

- **Time Complexity:** O(1)  
  - 固定 10 位數，迴圈常數次
- **Space Complexity:** O(1)  
  - 兩個長度 10 的陣列

## Notes & Reflection

- 可改為邊除邊加，不需預先拆解，程式更簡潔
- 注意 `i != 9` 的邊界檢查，避免陣列越界

## References

- [UVa 10035](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=976)
