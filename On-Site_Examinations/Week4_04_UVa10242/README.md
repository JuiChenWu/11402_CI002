# UVa 10242 – Fourth Point

**Week 4 | On-site**

## Problem Description

給定平行四邊形的三個頂點座標（四座標中有一對重複），求第四個頂點座標。

- [Problem](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=14&page=show_problem&problem=1183)

## Solution Approach

### Algorithm Logic

1. 找出重複的兩點 (saa, sab)
2. 第四點 = 另外兩點之和 - 重複點之一

### Complexity Analysis

- **Time:** O(1)
- **Space:** O(1)

[source code](./src/s1143339-UVa10242.cpp)
