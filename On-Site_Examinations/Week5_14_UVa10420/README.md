# UVa 10420 — List of Conquests

**Week 5 | On-site**

## Problem Description

給你 \(N\) 行資料，每行以「國家名稱」開頭（第一個空白前的字串），後面是人名。請統計每個國家出現的次數，並依國名字典序輸出 `country count`。

- [Problem PDF](https://onlinejudge.org/external/104/10420.pdf)

## Learning Objectives

- [x] 字串前綴擷取（取第一個空白前的 country）
- [x] 統計次數（frequency counting）
- [x] 排序輸出（字典序）

## Solution Approach

### Algorithm Logic

本解法流程如下：

1. 讀入 \(N\) 後，逐行讀取整行字串。
2. 取出第一個空白前的字串作為 `country`。
3. 用 `vector<pair<string,int>>` 儲存（國家, 次數）：
   - 若已存在該國家，次數 +1
   - 否則新增一筆
4. 將整個 vector 以 `country` 進行排序。
5. 依序輸出 `country count`。

### Key Insights

- 使用 map 會更直觀（查找 \(O(\log C)\)），但本程式以 vector 線性查找也能完成統計。
- 擷取 country 時只需要讀到第一個空白即可，不必解析整行後面的姓名。

## Code

- [source code](./src/s1143338-UVa10420.cpp)

## Complexity Analysis

- **Time Complexity:**  
  - 統計階段最壞 \(O(N\cdot C)\)（vector 線性查找）  
  - 排序 \(O(C\log C)\)  
  - \(C\) 為不同國家數
- **Space Complexity:** \(O(C)\)

## References

- [UVa 10420](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1361)

