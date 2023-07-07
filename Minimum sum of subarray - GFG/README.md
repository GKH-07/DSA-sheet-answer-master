# Minimum sum of subarray
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of integers of size N, for all, i's [1, N], the task is to find the minimum subarray sum in the subarray [i, N]</span>.</p>

<p><span style="font-size:18px"><strong>Input: </strong><br>
1. The first line of the input contains a single integer<em> </em> T denoting the number of test cases. The description of&nbsp;T test cases follows.<br>
2. The first line of each test case contains a single integer N.<br>
3. The second line contains</span> <span style="font-size:18px">N space-separated positive integers represents array.</span><br>
<br>
<span style="font-size:18px"><strong>Output:</strong> For each test case, print N space-separated integers<br>
<br>
<strong>Constraints:</strong><br>
1. 1 &lt;= T &lt;= 10</span><br>
<span style="font-size:18px">2. 1 &lt;= N &lt;= 100000<br>
3. -10000 &lt;= arr[i] &lt;= 10000</span><br>
<br>
<span style="font-size:18px"><strong>Example:<br>
Input:</strong></span><br>
<span style="font-size:18px">2<br>
3<br>
3 -1 -2<br>
5<br>
5 -3 -2 9 4</span></p>

<p><strong><span style="font-size:18px">Output:</span></strong><br>
<span style="font-size:18px">-3 -3 -2<br>
-5 -5 -2 4 4 </span></p>

<p><span style="font-size:18px"><strong>Explanation:</strong><br>
Test case 1: </span></p>

<p><span style="font-size:18px">1. i = 1, subarray is [3, -1, -2], all possible subarrays are [3], [-1], [-2], [3, -1], [-1, -2], [3, -1, -2]. Minnimum sum is -3 [-1, -2].</span><br>
<span style="font-size:18px">2. i = 2, subarray is [-1, -2], all possible subarrays are [-1], [-2], [-1, -2]. Minnimum sum is -3 [-1, -2].<br>
3. i = 3, subarray is [-2], all possible subarrays are [-2]. Minnimum sum is -2[-2].</span></p>
</div>