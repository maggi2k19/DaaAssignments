## Problem Statement
Tracing sorted subsequence in a random matrix row-wise and column-wise.

---

## Running the Code 

```
Download project
git clone https://github.com/maggi2k19/DaaAssignments
```
Initialisation: 
```
Go to assignment folder
cd DAA/Assignment - 06
```
---


### Theory
The idea is to use recursion for each row and column in the randomly generated matrix.Using recursion we call another problem to solve the current problem. 

---

### Analysis

**Time Complexity**

The time complexity of this algorithm is O(n * 2^n).Where n is Maximum of Row and column of the randomly generated matrix.

**Space Complexity**

The space complexity of the Program is O(n^2).Where n is Maximum of Row and column of the randomly generated matrix.

----

### References

https://www.codespeedy.com/generate-a-matrix-of-random-numbers-in-cpp/

https://www.geeksforgeeks.org/number-of-longest-increasing-subsequences/

https://www.inf.unibz.it/~calvanese/teaching/06-07-ip/lecture-notes/uni11.pdf
