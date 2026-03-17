# LeetCode 231. Power of Two

**Week 2 | After Class (Bonus)**

## Problem Description

判斷整數 n 是否為 2 的冪次（1, 2, 4, 8, 16, ...）。0 與負數不算。

- [Problem](https://leetcode.com/problems/power-of-two/description/)

## Learning Objectives

- [x] 理解 2 的冪次的二進位特性
- [x] 迴圈或位元運算判斷
- [x] 邊界：0 與負數

## Solution Approach

### Algorithm Logic

1. 若 n == 0，回傳 false
2. 迴圈：當 n != 1 時，若 n 為奇數則回傳 false，否則 n /= 2
3. 若順利到 n == 1，回傳 true

### Key Insights

- 2 的冪次在二進位中只有一個 1（如 8 = 1000）
- **位元技巧**：`n > 0 && (n & (n-1)) == 0`  
  - n 與 n-1 做 AND 會把最低的 1 消掉，若結果為 0 表示只有一個 1
- 0 需特別處理（0 & -1 的結果不符合）

## Code Structure

```cpp
// 迴圈版
if(!n) return false;
while(n){
    if(n == 1) return true;
    if(n % 2 != 0) return false;
    n /= 2;
}
return true;

// 位元版（更簡潔）
return n > 0 && (n & (n-1)) == 0;
```

[source code](./src/s1143338-LeetCode231.cpp)

## Complexity Analysis

- **Time Complexity:** O(log n)  
  - 每次 n 除以 2，最多 log₂ n 次
- **Space Complexity:** O(1)  
  - 僅使用常數變數

## Notes & Reflection

- 位元運算版為 O(1) 時間，且程式碼更簡短
- 負數在題目中不算 2 的冪次（-2、-4 等）

## References

- [LeetCode 231](https://leetcode.com/problems/power-of-two/description/)
