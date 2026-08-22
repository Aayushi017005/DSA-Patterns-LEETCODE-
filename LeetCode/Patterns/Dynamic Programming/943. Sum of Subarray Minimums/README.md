# 📝 943. Sum of Subarray Minimums (LeetCode)

🔗 [Problem Link](https://leetcode.com/problems/sum-of-subarray-minimums/)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
Array, Dynamic Programming, Stack, Monotonic Stack

### 🚀 Performance
- **Runtime:** 75 ms
- **Memory:** 193.7 MB

---

### 📜 Problem Description

Given an array of integers arr, find the sum of  `min(b)` , where  `b`  ranges over every (contiguous) subarray of  `arr` . Since the answer may be large, return the answer  **modulo**   `109 + 7` .

**Example 1:**

```
Input: arr = [3,1,2,4]
Output: 17
Explanation: 
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.

```

**Example 2:**

```
Input: arr = [11,81,94,43,3]
Output: 444

```

**Constraints:**

	
- `1 <= arr.length <= 3 * 104`
	
- `1 <= arr[i] <= 3 * 104`