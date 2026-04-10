# UVa 10783 – Odd Sum

**Week 3 | On-site Easy**

## Problem Description

給定區間 [a, b]，求區間內所有**奇數**的總和。

- [Problem PDF](https://onlinejudge.org/external/107/10783.pdf)

## Solution Approach

### Algorithm Logic

1. 若 a 為偶數則 +1，若 b 為偶數則 -1，使區間兩端皆為奇數
2. 從 a 開始每次 +2 累加，直到超過 b

### Complexity Analysis

- **Time:** O((b−a)/2)
- **Space:** O(1)

[source code](./src/s1143338-UVa10783.cpp)
