# UVa 10908 – Largest Square

**Week 4 | On-site**

## Problem Description

給定 M×N 字元矩陣與多個查詢點 (x, y)，求以該點為中心的最大**同字元正方形**邊長。

- [Problem](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=21&page=show_problem&problem=1849)

## Solution Approach

### Algorithm Logic

1. 對每個查詢，從半徑 1 開始往外擴展
2. 檢查以 (y,x) 為中心、邊長 2r+1 的正方形內是否全為相同字元
3. 若越界或字元不同則停止，輸出 2(r-1)+1

### Complexity Analysis

- **Time:** O(M×N×Q×r)
- **Space:** O(M×N)

[source code](./src/s1143338-UVa10908.cpp)
