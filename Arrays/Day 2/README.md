# Day 2 - DSA Journey 🚀

## Topics Covered Today

### Hashing (unordered_set)

* insert()
* count()
* find()
* erase()
* size()
* Duplicate detection
* Missing Number
* Happy Number concept
* Contains Duplicate II

### Two Pointer

* Basic Two Pointer Technique
* Left & Right Pointer Movement
* Opposite Direction Traversal
* Palindrome Checking
* Reverse String
* Sorted Array Pair Search

---

## LeetCode Solved

### Hashing

* 217 - Contains Duplicate
* 219 - Contains Duplicate II
* 268 - Missing Number
* 202 - Happy Number (Concept)

### Two Pointer

* 125 - Valid Palindrome
* 344 - Reverse String
* 167 - Two Sum II
* 392 - Is Subsequence
* 283 - Move Zeroes
* 1768 - Merge Strings Alternately
* 977 - Squares of a Sorted Array
* 11 - Container With Most Water
* 15 - 3Sum
* 42 - Trapping Rain Water

---

## Important Concepts Learned

### unordered_set

```cpp
unordered_set<int> st;

st.insert(10);
st.count(10);
st.erase(10);
```

### Two Pointer

```cpp
int left = 0;
int right = n - 1;

while(left < right){
    // process
}
```

### Trapping Rain Water

Formula:

```text
Water = min(leftMax, rightMax) - height[i]
```

Optimal Solution:

```text
Time  : O(n)
Space : O(1)
```

---

## Mistakes Fixed

* unordered_set indexing error
* Happy Number loop logic
* Is Subsequence pointer increment bug
* Valid Palindrome special character handling
* Trapping Rain Water intuition

---

## Progress

Completed:

* Arrays Basics
* HashMap (unordered_map)
* HashSet (unordered_set)
* Two Pointer

Next Topic:

* Sliding Window

---

## Tomorrow's Target

1. 643 - Maximum Average Subarray I
2. 1456 - Maximum Number of Vowels in a Substring of Given Length
3. 3 - Longest Substring Without Repeating Characters

---

## Day Summary

Day: 2 ✅

Topics Mastered:

* Hashing
* Two Pointer

Current Focus:
Sliding Window 🚀
