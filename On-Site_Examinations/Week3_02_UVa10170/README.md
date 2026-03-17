# UVa 10170 – The Hotel with Infinite Rooms

**Week 3 | On-site Medium**

## Problem Description

模擬無限房間旅館：第 N 天有 N 人入住，第 N+1 天有 N+1 人入住，依此類推。給定起始日 S 與目標人數 T，求第幾天時累計入住人數 ≥ T。

- [Problem PDF](https://onlinejudge.org/external/101/10170.pdf)

## Solution Approach

### Algorithm Logic

1. 從 N 開始，`rem` 累計入住人數
2. 當 `rem < T` 時，`rem += ++N`（下一天）
3. 輸出 N

### Complexity Analysis

- **Time:** O(√T)
- **Space:** O(1)

[source code](./src/s1143338-UVa10170.cpp)
