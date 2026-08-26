# 📝 148. Sort List (LeetCode)

🔗 [Problem Link](https://leetcode.com/problems/sort-list/)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
Linked List, Two Pointers, Divide and Conquer, Sorting, Merge Sort

### 🚀 Performance
- **Runtime:** 57 ms
- **Memory:** 75.8 MB

---

### 📜 Problem Description

Given the  `head`  of a linked list, return  *the list after sorting it in  **ascending order*** .

**Example 1:**

 ![image](https://assets.leetcode.com/uploads/2020/09/14/sort_list_1.jpg) 

```
Input: head = [4,2,1,3]
Output: [1,2,3,4]

```

**Example 2:**

 ![image](https://assets.leetcode.com/uploads/2020/09/14/sort_list_2.jpg) 

```
Input: head = [-1,5,3,4,0]
Output: [-1,0,3,4,5]

```

**Example 3:**

```
Input: head = []
Output: []

```

**Constraints:**

	
- The number of nodes in the list is in the range  `[0, 5 * 104]` .
	
- `-105 <= Node.val <= 105`

**Follow up:**  Can you sort the linked list in  `O(n logn)`  time and  `O(1)`  memory (i.e. constant space)?