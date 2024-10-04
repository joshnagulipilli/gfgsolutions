<h2><a href="https://www.geeksforgeeks.org/problems/sub-array-sum-divisible-by-k2617/1">Sub-Array sum divisible by K</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given an array of integers and a value <strong>k</strong>. The task is to find the count of all sub-arrays whose sum is divisible by k.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [4, 5, 0, -2, -3, 1], k = 5
<strong>Output:</strong> 7
<strong>Explanation</strong>: There are 7 sub-arrays whose is divisible by k: [4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3] and [-2, -3]
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2, 2, 2, 2, 2, 2], k = 2
<strong>Output:</strong> 21
<strong>Explanation</strong>: All subarray sums are divisible by 2
</span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(n+k).<br><strong>Expected Auxiliary Space:</strong> O(k).</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>6<br></sup></span><span style="font-size: 14pt;"><span style="font-size: 18.6667px;">-10<sup>4</sup> ≤ arr[i]≤ 10<sup>4<br></sup></span></span><span style="font-size: 14pt;"><span style="font-size: 18.6667px;"><span style="font-size: 18.6667px;">1 ≤ k ≤ 10<sup>3</sup></span></span></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;