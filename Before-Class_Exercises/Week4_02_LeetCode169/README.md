# LeetCode 169. Majority Element

**Week 4 | Before Class**

## Problem Description

給定整數陣列 `nums`，保證存在一個元素出現次數嚴格大於 \(\lfloor n/2 \rfloor\)。請回傳該元素（majority element）。

- [Problem](https://leetcode.com/problems/majority-element/)

## Learning Objectives

- [x] 使用計數統計找出出現次數最多的元素
- [x] 了解不同解法取捨（hash map vs Boyer-Moore）
- [x] 複雜度分析

## Solution Approach（依本程式碼）

### Algorithm Logic

1. 使用 `unordered_map<int,int> mp` 統計每個數字出現次數。
2. 掃描 `mp` 找出最大出現次數對應的元素 `maxx_id`。
3. 回傳 `maxx_id`。

### Key Insights

- 題目保證 majority element 一定存在，因此找出計數最高者即可。
- 這份程式碼採用 hash map，時間快、實作直觀，但會使用額外空間；若要 \(O(1)\) 空間可改 Boyer-Moore 投票法。

## Code

- [source code](./src/s1143338-LeetCode169.cpp)

## Complexity Analysis

- **Time Complexity:** \(O(n)\)
- **Space Complexity:** \(O(n)\)（最壞情況所有元素皆不同）

## References

- [LeetCode 169](https://leetcode.com/problems/majority-element/)
