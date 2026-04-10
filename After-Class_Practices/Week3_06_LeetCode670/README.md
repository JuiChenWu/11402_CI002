# LeetCode 670. Maximum Swap

**Week 3 | After Class**

## Problem Description

給定一個非負整數 `num`，你最多可以交換一次其中任意兩個數字位（digits）。請回傳可以得到的最大值。

- [Problem](https://leetcode.com/problems/maximum-swap/)

## Learning Objectives

- [x] 拆解數字為各位數並重組
- [x] 找出最佳的一次交換（greedy）
- [x] 注意「只交換一次」與 0/位數的邊界

## Solution Approach（依本程式碼）

### Algorithm Logic

1. 把 `num` 的每一位拆出來存到 `dig[]`（`dig[0]` 是個位數），`pos` 是最高 index。
2. 從最高位（`i=pos`）往最低位掃描，嘗試決定「要不要在第 i 位做交換」：
   - 在所有更低位 `j<i` 中，找出可以讓第 i 位變大的最佳候選 `max_pos`  
     - 程式的判斷 `(max_pos==i && dig[j]>dig[max_pos])||(max_pos!=i && dig[j]>=dig[max_pos])`  
       代表：優先找更大的數字；若有多個相同最大數字，選擇更靠低位的那個（方便交換後讓其他高位保持更大）。
   - 若找到 `max_pos != i`，就交換 `dig[i]` 與 `dig[max_pos]`，並 `break`（只允許一次交換）。
3. 將 `dig[]` 從最高位到最低位重組成整數回傳（程式用 `num = num*10 + dig[i]` 的位運算版本）。

### Key Insights

- 只要從最高位開始，一旦找到能變大的交換就應該立刻做，因為高位的提升永遠比低位更重要（greedy）。
- 若要交換的最大數字有多個，選「最右邊」那個可讓交換後剩餘部分儘量大。

## Code

- [source code](./src/s1143338-LeetCode670.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(d^2)\)  
  - \(d\) 為位數（本程式 `dig[8]`，所以實務上是常數級）
- **Space Complexity:** \(O(d)\)

## References

- [LeetCode 670](https://leetcode.com/problems/maximum-swap/)

