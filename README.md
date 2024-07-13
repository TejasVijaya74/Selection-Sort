# Selection-Sort

# Analyzing the design and algorithm with the method of selection sorting.

# Generalized by : Tejas

Selection sort is a simple comparison-based sorting algorithm. Here's a brief explanation of how it works:

# The algorithm divides the input list into two parts:

* A sorted portion at the left end

* An unsorted portion at the right end
<br>
Initially, the sorted portion is empty and the unsorted portion is the entire list.<br>
The algorithm repeatedly selects the smallest (or largest, depending on the desired order) element from the unsorted portion and swaps it with the leftmost element of the unsorted portion.This process continues, growing the sorted portion and shrinking the unsorted portion, until the entire list is sorted.

# The main characteristics of selection sort are:<br>
 * Simple to implement<br>
 * Performs well on small lists<br>
 * Inefficient on large lists<br>
 * Has a time complexity of O(n²), where n is the number of items<br>
 * Performs the same number of comparisons regardless of the initial order of the list

# This corrected version should work as intended. It will:

* Ask the user for the number of elements<br>
* Generate an array of random integers<br>
* Sort the array using selection sort<br>
* Print the sorted array<br>
* Display the time taken for sorting.

# Output:
Enter the number of elements: 10
Sorted array:
50 1099 1717 1878 1974 2200 3423 4497 5479 9261 
Time taken for sorting: 0.000002 seconds


=== Code Execution Successful ===