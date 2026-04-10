# LeetCode 125. Valid Palindrome

**Week 2 | After Class Easy**

## Problem Description

判斷字串是否為**有效迴文**。忽略非英數字元，且不區分大小寫。

- [Problem](https://leetcode.com/problems/valid-palindrome/)

## Learning Objectives

- [x] 字串預處理（過濾、大小寫轉換）
- [x] 雙指標判斷迴文
- [x] 字元分類（英文字母、數字）

## Solution Approach

### Algorithm Logic

1. 建立新字串 `tmp`，只保留小寫字母與數字
2. 遍歷原字串：小寫/數字直接加入，大寫轉小寫後加入
3. 用雙指標比較 `tmp[i]` 與 `tmp[tmp.size()-1-i]`，i 從 0 到 `tmp.size()/2`
4. 若任一對不相等則回傳 false，否則回傳 true

### Key Insights

- 需過濾空格、標點等非英數字元
- 大小寫視為相同，統一轉小寫處理
- 空字串或過濾後為空，視為迴文（true）

## Code Structure

```cpp
// 過濾並正規化
for(char c : s){
    if(islower(c) || isdigit(c)) tmp += c;
    else if(isupper(c)) tmp += tolower(c);
}
// 對稱比較
for(int i=0; i<tmp.size()/2; ++i){
    if(tmp[i] != tmp[tmp.size()-1-i]) return false;
}
return true;
```

[source code](./src/s1143338-LeetCode125.cpp)

## Complexity Analysis

- **Time Complexity:** O(n)  
  - n 為字串長度，兩次遍歷
- **Space Complexity:** O(n)  
  - 儲存過濾後的字串 tmp

## Notes & Reflection

- 可改為雙指標原地比較，跳過非英數字元，達到 O(1) 空間
- `isalnum()` 與 `tolower()` 可簡化字元判斷

## References

- [LeetCode 125](https://leetcode.com/problems/valid-palindrome/)
