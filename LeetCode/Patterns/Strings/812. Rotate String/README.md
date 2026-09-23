# 📝 812. Rotate String (LeetCode)

🔗 [Problem Link](https://leetcode.com/problems/rotate-string/)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
String, String Matching

### 🚀 Performance
- **Runtime:** 0 ms
- **Memory:** 8.1 MB

---

### 📜 Problem Description

Given two strings  `s`  and  `goal` , return  `true`   *if and only if*   `s`   *can become*   `goal`   *after some number of  **shifts**  on*   `s` .

A  **shift**  on  `s`  consists of moving the leftmost character of  `s`  to the rightmost position.

	
- For example, if  `s = "abcde"` , then it will be  `"bcdea"`  after one shift.

**Example 1:**

```
Input: s = "abcde", goal = "cdeab"
Output: true

```

**Example 2:**

```
Input: s = "abcde", goal = "abced"
Output: false

```

**Constraints:**

	
- `1 <= s.length, goal.length <= 100`
	
- `s`  and  `goal`  consist of lowercase English letters.