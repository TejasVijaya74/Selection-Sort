# Selection-Sort

## Analyzing the design and algorithm with the method of selection sorting.
<br>
# Generalized by : Tejas
<br>
Selection sort is a simple comparison-based sorting algorithm. Here's a brief explanation of how it works:
<br>
# The algorithm divides the input list into two parts:
<br>
$ A sorted portion at the left end
<br>
$ An unsorted portion at the right end
<br>
Initially, the sorted portion is empty and the unsorted portion is the entire list.<br>
The algorithm repeatedly selects the smallest (or largest, depending on the desired order) element from the unsorted portion and swaps it with the leftmost element of the unsorted portion.This process continues, growing the sorted portion and shrinking the unsorted portion, until the entire list is sorted.
<br>
# The main characteristics of selection sort are:<br>
1.Simple to implement<br>
2.Performs well on small lists<br>
3.Inefficient on large lists<br>
4.Has a time complexity of O(n²), where n is the number of items<br>
5.Performs the same number of comparisons regardless of the initial order of the list
<br>
# This corrected version should work as intended. It will:
<br>
1.Ask the user for the number of elements<br>
2.Generate an array of random integers<br>
3.Sort the array using selection sort<br>
4.Print the sorted array<br>
5.Display the time taken for sorting.
<br>
# Output:
Enter the number of elements: 10
Sorted array:
50 1099 1717 1878 1974 2200 3423 4497 5479 9261 
Time taken for sorting: 0.000002 seconds


=== Code Execution Successful ===