# Assignment-4
#### Team Members

|Enrollment No.|Name|GithubId|
|--------------|----|--------|
|IIT2019094|Sangam K Barnwal|sangam65|
|IIT2019095|Nandipati Sanjana Reddy|sanjana179|
|IIB2019039|Suhaib Khan|appleear|

**Group No-14**

**Faculty Name-** Dr. Rahul Kala

**Mentor Name-** Md. Meraz

---
## Problem Statement
Given a sorted array and a value x, the floor of x is the largest
element in array smaller than or equal to x. Write efficient functions
to find floor of x. Solve using divide and conquer algorithm.

---
## How to use code

Download project
```
git clone https://github.com/sangam65/DaaAssingment1.git
```
Project Initialize
```
#Opening Assingment folder
cd DaaAssingment1

#Compiling The code
g++ daa.cpp -o output
```
---

Run the code
```
./output
```
Input
```
First line of input contains  n and x.
where n is the size of the array  .
Then there are n numbers given .
```
Ouput
```
Floor of x and floor of x means the largest
element in array smaller than or equal to x.
```
---
**Test case**

Test Case-1
```
Input:
5 3
2 3 4 5 6
Output:
3
```

Test Case-2
```
Input:
5 3
1 2 4 5 6
Output:
2
```
---
### Theory
Logic
```
We will use divide and conquer and find the largest element in array smaller than or equal to x.
```
Implementation
```
We will take input n and x from the user.Then we will use binary search to find the floor of x and if x is smaller than a[0] we will print -1 else the floor of x. 

```
---
### Analysis

**Time Complexity**
```
For all the cases : o(log(n))
```
We are using binary search, so the time complexity required is O(log n).
**Space Complexity**
```
For all the cases : o(1)
```
As no extra space is required, so the space complexity is constant.

---
### References

GFG : Divide and Conquer

Tutorials Point : UpperBound
