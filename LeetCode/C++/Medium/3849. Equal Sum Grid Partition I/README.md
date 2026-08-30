# 📝 3849. Equal Sum Grid Partition I (LeetCode)

🔗 [Problem Link](https://leetcode.com/problems/equal-sum-grid-partition-i/)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
Array, Matrix, Enumeration, Prefix Sum

### 🚀 Performance
- **Runtime:** N/A
- **Memory:** N/A

---

### 📜 Problem Description

You are given an  `m x n`  matrix  `grid`  of positive integers. Your task is to determine if it is possible to make  **either one horizontal or one vertical cut**  on the grid such that:

	
- Each of the two resulting sections formed by the cut is  **non-empty** .
	
- The sum of the elements in both sections is  **equal** .

Return  `true`  if such a partition exists; otherwise return  `false` .

**Example 1:**

**Input:**  grid = [[1,4],[2,3]]

**Output:**  true

**Explanation:**

![image](https://assets.leetcode.com/uploads/2025/03/30/lc.png)  ![image](https://assets.leetcode.com/uploads/2025/03/30/lc.jpeg)

A horizontal cut between row 0 and row 1 results in two non-empty sections, each with a sum of 5. Thus, the answer is  `true` .

**Example 2:**

**Input:**  grid = [[1,3],[2,4]]

**Output:**  false

**Explanation:**

No horizontal or vertical cut results in two non-empty sections with equal sums. Thus, the answer is  `false` .

**Constraints:**

	
- `1 <= m == grid.length <= 105`
	
- `1 <= n == grid[i].length <= 105`
	
- `2 <= m * n <= 105`
	
- `1 <= grid[i][j] <= 105`