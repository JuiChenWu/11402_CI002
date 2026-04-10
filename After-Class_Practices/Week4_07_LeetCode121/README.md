# LeetCode 121. Best Time to Buy and Sell Stock

**Week 4 | After Class**

## Problem Description

給定股票每天價格陣列 `prices`，你只能做一次交易（買入一次、賣出一次，且賣出必須在買入之後）。請求最大利潤；若無法獲利則回傳 0。

- [Problem](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Learning Objectives

- [x] 單次掃描找最大差值（max subarray / prefix minimum 思維）
- [x] 維護到目前為止最小買入價
- [x] 邊界：只買不賣、永遠下跌

## Solution Approach（依本程式碼）

### Algorithm Logic

1. `min_pos` 記錄目前為止最低價格的位置（最佳買點候選）。
2. `res` 記錄目前找到的最大利潤。
3. 逐日掃描：
   - 若 `prices[i] < prices[min_pos]`，更新 `min_pos=i`（更便宜的買入價）。
   - 否則可以嘗試在第 i 天賣出，利潤 `prices[i] - prices[min_pos]`，若更大則更新 `res`。
4. 回傳 `res`。

### Key Insights

- 每一天的最佳賣出利潤只取決於「這天以前的最低價」。
- 所以只要一路維護 prefix minimum，就能在 \(O(n)\) 內完成。

## Code

- [source code](./src/s1143338-LeetCode121.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n)\)
- **Space Complexity:** \(O(1)\)

## References

- [LeetCode 121](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

