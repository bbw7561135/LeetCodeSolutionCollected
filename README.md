# LeetCodeSolutionCollected
### A collection of solutions for Leetcode
###  LeetCode Solution Collected For Self-learning<br>
###  Codes are listed in each dir's built-in README.md for simplicity<br>
###  the questions are displayed in the main dir's README.md i.e. below here
<br>
<br>

#### Q1:Given an array of integers, return indices of the two numbers such that they add up to a specific target.
#### You may assume that each input would have exactly one solution, and you may not use the same element twice.
#### Example:
#### Given nums = [2, 7, 11, 15], target = 9,
#### Because nums[0] + nums[1] = 2 + 7 = 9,
#### return [0, 1].

<br>
<br>

#### Q4:There are two sorted arrays nums1 and nums2 of size m and n respectively.
#### Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
#### You may assume nums1 and nums2 cannot be both empty.<br>

#### Example 1:
#### nums1 = [1, 3]
#### nums2 = [2]
#### The median is 2.0

#### Example 2:
#### nums1 = [1, 2]
#### nums2 = [3, 4]
#### The median is (2 + 3)/2 = 2.5

<br>
<br>

#### Q7:Given a 32-bit signed integer, reverse digits of an integer.<br>

#### Example 1:
#### Input: 123
#### Output: 321

#### Example 2:
#### Input: -123
#### Output: -321
#### Example 3:

#### Input: 120
#### Output: 21
#### Note:
#### Assume we are dealing with an environment which could only store <br>
#### integers within the 32-bit signed integer range: [−231,  231 − 1]. 
#### For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

<br>
<br>

#### Q11：Given n non-negative integers a1, a2, …, an, where each represents a point at coordinate (i, ai). <br>
#### n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). <br>
#### Find two lines, which together with x-axis forms a container, such that the container contains the most water. <br>
#### Note: You may not slant the container and n is at least 2. <br>
#### 给定 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点 (i, ai)<br>
#### 在坐标内画 n 条垂直线，垂直线 i 的两个端点分别为 (i, ai) 和 (i, 0)<br>
#### 找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水<br>
#### 输入: [1,8,6,2,5,4,8,3,7] 输出: 49

<br>
<br>

#### Q15:给定一个包含 n 个整数的数组 nums
#### 判断 nums 中是否存在三个元素 *a，b，c ，*使得 a + b + c = 0 ？
#### 找出所有满足条件且不重复的三元组。
#### 答案中不可以包含重复的三元组。
#### 例如, 给定数组 nums = [-1, 0, 1, 2, -1, -4]，
#### 满足要求的三元组集合为：
#### [-1, 0, 1],
#### [-1, -1, 2]

<br>
<br>

#### Q16:给定一个包括 n 个整数的数组 nums 和 一个目标值 target<br>
#### 找出 nums 中的三个整数，使得它们的和与 target 最接近<br>
#### 返回这三个数的和。假定每组输入只存在唯一答案<br>
#### 例如 给定数组 nums = [-1，2，1，-4], 和 target = 1.<br>
#### 与 target 最接近的三个数的和为 2. (-1 + 2 + 1 = 2).


<br>
<br>

#### Q18:给定一个包含 n 个整数的数组 nums 和一个目标值 target <br>
#### 判断 nums 中是否存在四个元素 a，b，c 和 d <br>
#### 使得 a + b + c + d 的值与 target 相等<br>
#### 找出所有满足条件且不重复的四元组。<br>
#### 给定数组 nums = [1, 0, -1, 0, -2, 2]，和 target = 0 <br>
#### 满足要求的四元组集合为：<br>
#### [
####  [-1,  0, 0, 1],
####  [-2, -1, 1, 2],
####  [-2,  0, 0, 2]
#### ]


<br>
<br>


#### Q39:给定一个无重复元素的数组 candidates 和一个目标数 target <br>
#### 找出 candidates 中所有可以使数字和为 target 的组合 <br>
#### candidates 中的数字可以无限制重复被选取<br>
#### 输入: candidates = [2,3,5] 所求解集为:<br>
#### [
####  [2,2,2,2],
####  [2,3,3],
####  [3,5]
#### ]
