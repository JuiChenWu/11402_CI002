# LeetCode 9. Palindrome Number

**Week 1 | After Class Easy**

## Problem Description

判斷整數 x 是否為**迴文數**（正讀反讀相同）。負數不算迴文。

- [Problem](https://leetcode.com/problems/palindrome-number/)

## Learning Objectives

- [x] 將整數拆成各位數
- [x] 雙指標/對稱比較判斷迴文
- [x] 處理邊界（負數直接 false）

## Solution Approach

### Algorithm Logic

1. 若 x < 0，直接回傳 false
2. 將 x 的各位數依序存入陣列 `dat`（個位在 index 0）
3. 用雙指標：比較 `dat[i]` 與 `dat[pt-i]`，i 從 0 到 `(pt+1)/2`
4. 若任一對不相等則回傳 false，否則回傳 true

### Key Insights

- 負數的負號會導致不對稱，一律視為非迴文
- 只需比較前半與後半，不必反轉整個數字
- 位數為奇數時，中間位數不需比較

## Code Structure

```cpp
// 拆解各位數
while(x){ dat[++pt] = x%10; x/=10; }
// 對稱比較
for(int i=0; i<(pt+1)/2; ++i){
    if(dat[i] != dat[pt-i]) return false;
}
return true;
```

[source code](./src/s1143338-LeetCode9.cpp)

## Complexity Analysis

- **Time Complexity:** O(d)  
  - d 為 x 的位數，約 O(log₁₀ x)
- **Space Complexity:** O(d)  
  - 儲存各位數的陣列

## Notes & Reflection

- 可改為只反轉後半段數字，與前半比較，空間 O(1)
- 避免將整個數字反轉再比較（可能 overflow）

## References

- [LeetCode 9](https://leetcode.com/problems/palindrome-number/)
