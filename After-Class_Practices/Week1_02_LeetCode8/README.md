# LeetCode 8. String to Integer (atoi)

**Week 1 | After Class Medium**

## Problem Description

實作 `atoi`：將字串轉成 32 位元有號整數。需處理前導空格、正負號、數字，以及 **overflow**（超過 INT_MAX 回傳 INT_MAX，低於 INT_MIN 回傳 INT_MIN）。

- [Problem](https://leetcode.com/problems/string-to-integer-atoi/)

## Learning Objectives

- [x] 字串解析與狀態機思維
- [x] 處理 overflow（用 long long 暫存）
- [x] 邊界條件：空格、符號、非數字字元

## Solution Approach

### Algorithm Logic

1. **跳過前導空格**：`pos` 從 0 開始，遇到空格就 `pos++`
2. **解析符號**：`+` 則 `w=1`，`-` 則 `w=-1`，遇到數字則直接進入數字解析
3. **解析數字**：`res = res*10 + s[pos]-'0'`，每步檢查是否超過 INT_MAX
4. **Overflow 處理**：若 `res > INT_MAX`，正數回傳 INT_MAX，負數回傳 INT_MIN
5. 回傳 `w * (int)res`

### Key Insights

- 用 `long long` 暫存可避免 32-bit overflow
- 遇到非數字（在讀數字階段）立即 break
- 前導空格後若為非數字、非符號，回傳 0

## Code Structure

```cpp
// 跳過空格、解析符號
for(; pos<sz; ++pos){
    if(s[pos]==' ') continue;
    if(s[pos]=='+' || s[pos]=='-') { w=...; break; }
    if(isdigit(s[pos])) { res=...; break; }
    return 0;
}
// 累加數字並檢查 overflow
for(; pos<sz; ++pos){
    if(!isdigit(s[pos])) break;
    res = res*10 + s[pos]-'0';
    if(res > INT_MAX) return w==1 ? INT_MAX : INT_MIN;
}
return w * (int)res;
```

[source code](./src/s1143338-LeetCode8.cpp)

## Complexity Analysis

- **Time Complexity:** O(n)  
  - n 為字串長度，單次遍歷
- **Space Complexity:** O(1)  
  - 僅使用常數變數

## Notes & Reflection

- 注意 `res` 在累加前就要檢查，避免 long long 也 overflow（本題範圍內不會）
- 可將 `(res<<3)+(res<<1)` 視為 `res*10` 的位元運算寫法

## References

- [LeetCode 8](https://leetcode.com/problems/string-to-integer-atoi/)
