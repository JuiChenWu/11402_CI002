# UVa 10341 — Solve It

**Week 7 | On-site**

## Problem Description

給定 \(p,q,r,s,t,u\)，求在區間 \([0,1]\) 內使下式為 0 的解 \(x\)（若不存在則輸出 `No solution`）：

\[
f(x)=p e^{-x}+q \sin(x)+r \cos(x)+s \tan(x)+t x^2+u
\]

輸出解時保留小數點後 4 位。

- [Problem PDF](https://onlinejudge.org/external/103/10341.pdf)

## Learning Objectives

- [x] 連續函數的根（root finding）
- [x] 二分法（bisection method）
- [x] 浮點誤差與輸出格式控制

## Solution Approach

### Algorithm Logic

1. 定義函數 `f(x)` 依題目公式計算。
2. 設定 `lo=0`, `hi=1`，先算 `f(lo)`, `f(hi)`：
   - 若其中一端剛好為 0，直接輸出該端點。
   - 若 `f(lo) * f(hi) > 0`，代表端點同號，在本程式假設下區間內無根，輸出 `No solution`。
3. 否則進行二分法迭代固定次數（程式做 80 次）：
   - 取 `mid=(lo+hi)/2`
   - 若 `f(lo)` 與 `f(mid)` 異號（或乘積 <=0），根在 `[lo, mid]`，令 `hi=mid`
   - 否則根在 `[mid, hi]`，令 `lo=mid`
4. 迭代後輸出 `(lo+hi)/2`，並以 `fixed`、`setprecision(4)` 控制格式。

### Key Insights

- 二分法需要「區間端點異號」保證中間存在根（Intermediate Value Theorem）。
- 用固定迭代次數可避免浮點比較誤差造成的停止條件問題。

## Code

- [source code](./src/s1143338-UVa10341.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(I)\)  
  - \(I\) 為迭代次數（本程式固定 80）
- **Space Complexity:** \(O(1)\)

## References

- [UVa 10341](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=0&page=show_problem&problem=1282)

