# UVa 11413 — Fill the Containers

**Week 7 | On-site**

## Problem Description

有 \(N\) 個容器（每個有容量需求/體積），要依序裝進 \(M\) 個運輸容器（truck/container），每個運輸容器都有相同容量上限 \(C\)。裝載時必須保持順序，不能拆分單一容器。請找出最小的 \(C\)，使得可以用不超過 \(M\) 個運輸容器裝完全部。

- [Problem PDF](https://onlinejudge.org/external/114/11413.pdf)

## Learning Objectives

- [x] 二分搜尋答案（binary search on answer）
- [x] 貪心檢查（給定容量上限是否可行）
- [x] 邊界：下界為最大單一容器，上界為總和

## Solution Approach

### Algorithm Logic

1. 讀入 `N, M` 與每個容器體積 `dat[i]`。
2. 設定二分範圍：
   - `Ls = max(dat[i])`（容量至少要能裝下最大單一容器）
   - `Rs = sum(dat[i])`（一台裝完的上界）
3. `check(C)`：貪心模擬裝載
   - 依序累加 `now += dat[i]`
   - 若 `now > C`，表示需要新的一台，`cnt++` 並把 `now` 重設為 `dat[i]`
   - 若 `cnt > M`，回傳不可行
4. 二分搜尋最小可行 `C`。

### Key Insights

- `check(C)` 必須用貪心：能塞就塞，超過就換下一台，才能在固定順序下最省台數。
- 典型「答案單調性」：容量越大越容易可行，因此適合二分。

## Code

- [source code](./src/s1143338-UVa11413.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(N \log S)\)  
  - \(S\) 約為總和範圍（`Rs-Ls`），每次 check 是 \(O(N)\)
- **Space Complexity:** \(O(N)\)

## References

- [UVa 11413](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=0&page=show_problem&problem=2408)

