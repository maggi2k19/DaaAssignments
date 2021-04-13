## Problem Statement
Given a string, print the longest repeating subsequence such that the two subsequences don’t have same string character at same position, i.e., any j’th character in the two subsequences shouldn’t have the same location
index in the given original string. Solve using dynamic programming

---

## Running the Code 

```
Download project
git clone https://github.com/maggi2k19/DaaAssignments
```
Initialisation: 
```
Go to assignment folder
cd DAA/Assignment-05
```
---

### TestCases
```
Testcase -1 
Input : aabebcdd 
Output : 
3
abd
#--------------------------#
Testcase -2 
Input : aab
Output : 
1
a
```
---
### Theory
The idea is to store the solutions of the previous sub-problems and then from them we can compute the final Longest Repeating sub-sequence . We used bottom-up approach to solve and store the solutions of the sub problems.

---

### Analysis

**Time Complexity**

The time complexity of this algorithm is O(n^2).Where n is the Length of string Input(randomly generated or User defined).

**Space Complexity**

The space complexity of the Program is O(n^2).Where n is the Length of string Input(randomly generated or User defined).

----

### References

http://web.mit.edu/15.053/www/AMP-Chapter-11.pdf

https://www.geeksforgeeks.org/printing-longest-common-subsequence/

https://en.wikipedia.org/wiki/Dynamic-programming
