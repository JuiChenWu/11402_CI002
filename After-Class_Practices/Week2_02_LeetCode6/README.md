# LeetCode 6. Zigzag Conversion

**Week 2 | After Class Medium**

## Problem Description

將字串依「之字形」排列成 numRows 行後，按行由上到下讀取，輸出新字串。

例如 `"PAYPALISHIRING"` 在 numRows=3 時：
```
P   A   H   N
A P L S I I G
Y   I   R
```
輸出 `"PAHNAPLSIIGYIR"`。

- [Problem](https://leetcode.com/problems/zigzag-conversion/)

## Learning Objectives

- [x] 模擬之字形路徑
- [x] 方向切換（到達頂/底時反轉）
- [x] 使用 `vector<vector<char>>` 分行儲存

## Solution Approach

### Algorithm Logic

1. 若 numRows == 1，直接回傳原字串
2. 建立 `numRows` 個 `vector<char>`，代表每一行
3. 用 `pos` 表示目前所在行，`d` 表示方向（+1 向下，-1 向上）
4. 遍歷每個字元：放入 `dat[pos]`，`pos += d`
5. 當 `pos == 0` 或 `pos == numRows-1` 時，`d = -d` 反轉方向
6. 依序將 `dat[0]` 到 `dat[numRows-1]` 串接成結果字串

### Key Insights

- 之字形 = 先往下到底，再往上到頂，重複
- 方向變換時機：在頂（pos=0）或底（pos=numRows-1）
- 不需建立完整 2D 矩陣，只需 numRows 個動態陣列

## Code Structure

```cpp
vector<vector<char>> dat(numRows);
int d = 1, pos = 0;
for(char c : s){
    dat[pos].push_back(c);
    pos += d;
    if(pos == numRows-1 || pos == 0) d = -d;
}
// 串接各列
for(auto& row : dat)
    for(char c : row) res += c;
```

[source code](./src/s1143338-LeetCode6.cpp)

## Complexity Analysis

- **Time Complexity:** O(n)  
  - n 為字串長度，每個字元只處理一次
- **Space Complexity:** O(n)  
  - 儲存所有字元到 numRows 個 vector

## Notes & Reflection

- 可推導數學公式直接計算每個字元對應的行與列，達到 O(1) 空間，但實作較複雜
- numRows=1 的邊界要特別處理

## References

- [LeetCode 6](https://leetcode.com/problems/zigzag-conversion/)
