# UVa 11150 – Cola

**Week 4 | On-site**

## Problem Description

買 N 瓶可樂，每 3 個空瓶可換 1 瓶。求最多可喝到幾瓶。

- [Problem](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=23&page=show_problem&problem=2091)

## Solution Approach

### Algorithm Logic

1. 模擬：每喝 3 瓶換 1 瓶，`bot` 記錄空瓶數
2. 當 `bot == 3` 時換一瓶（`N++`，`bot=0`）
3. 若最後剩 2 瓶空瓶，可借 1 瓶後還 3 瓶，故 `res++`

### Complexity Analysis

- **Time:** O(N)
- **Space:** O(1)

[source code](./src/s1143338-UVa11150.cpp)
