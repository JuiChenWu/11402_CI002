# UVa 12149 – Feynman

**Week 3 | On-site Easy (Bonus)**

## Problem Description

給定 N×N 的正方形，求可切成多少個 1×1、2×2、…、N×N 的子正方形。公式：1² + 2² + … + N² = N(N+1)(2N+1)/6。

- [Problem PDF](https://onlinejudge.org/external/121/12149.pdf)

## Solution Approach

### Algorithm Logic

直接套用公式：`N*(N+1)*(2*N+1)/6`。

### Complexity Analysis

- **Time:** O(1)
- **Space:** O(1)

[source code](./src/s1143338-UVa12149.cpp)
