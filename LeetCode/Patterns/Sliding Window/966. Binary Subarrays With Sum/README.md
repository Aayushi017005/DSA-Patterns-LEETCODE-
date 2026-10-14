# 📝 966. Binary Subarrays With Sum (LeetCode)

🔗 [Problem Link](https://leetcode.com/problems/binary-subarrays-with-sum/)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
Array, Hash Table, Sliding Window, Prefix Sum

### 🚀 Performance
- **Runtime:** 1 ms
- **Memory:** 32.6 MB

---

### 📜 Problem Description

Given a binary array  `nums`  and an integer  `goal` , return  *the number of non-empty  **subarrays**  with a sum*   `goal` .

A  **subarray**  is a contiguous part of the array.

**Example 1:**

```
Input: nums = [1,0,1,0,1], goal = 2
Output: 4
Explanation: The 4 subarrays are bolded and underlined below:
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]

```

**Example 2:**

```
Input: nums = [0,0,0,0,0], goal = 0
Output: 15

```

**Constraints:**

	
- `1 <= nums.length <= 3 * 104`
	
- `nums[i]`  is either  `0`  or  `1` .
	
- `0 <= goal <= nums.length`