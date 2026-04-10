# UVa 12503 – Robot Instructions

**Week 4 | On-site**

## Problem Description

機器人執行 N 個指令：LEFT、RIGHT 或 SAME i（與第 i 個指令相同）。求最終位置（相對於起點）。

- [Problem](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=602&page=show_problem&problem=3947)

## Solution Approach

### Algorithm Logic

1. 用 `dat[i]` 記錄第 i 個指令的位移（-1 或 1）
2. LEFT：`dat[i]=-1`，RIGHT：`dat[i]=1`，SAME i：`dat[i]=dat[A]`
3. 累加 `dat[i]` 得 res

### Complexity Analysis

- **Time:** O(N)
- **Space:** O(N)

[source code](./src/s1143338-UVa12503.cpp)
