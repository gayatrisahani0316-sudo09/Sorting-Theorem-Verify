# Sorting-Theorem-Verify
📊 Sorting Algorithm Analysis & Theorem Verification

This project implements six core sorting algorithms in C++ to verify their theoretical time complexities. By tracking real-time execution and exact iteration counts, we can prove the mathematical predictions of the Master's Theorem and Akra-Bazzi.

🛠️ Project Architecture

The project is modular for better organization:

    algorithms.h: The central bridge for declarations and shared global counters.

    mainFile.cpp: The testing hub that provides Input/Output and performance reporting.

    Algorithm Files: Dedicated .cpp files for Merge, Quick, Bubble, Selection,binary recursion and Insertion sorts.

## 📈 Complexity Verification Table

| Algorithm | Recurrence Relation | Theorem Used | Complexity |
| :--- | :--- | :--- | :--- |
| **Merge Sort** | T(n) = 2T(n/2) + n | Master's (Case 2) | O(n log n) |
| **Quick Sort** | T(n) = T(k) + T(n-k-1) + n | Akra-Bazzi | O(n log n) |
| **Bubble Sort** | T(n) = T(n-1) + n | Iterative Analysis | $O(n^2)$ |
| **Selection Sort** | T(n) = T(n-1) + n | Iterative Analysis | $O(n^2)$ |
| **Insertion Sort** | T(n) = T(n-1) + n | Iterative Analysis | $O(n^2)$ |
| **Binary Recursion**| $T(n) = T(n-1) + T(n-2)$ | Recursion Tree | $O(2^n)$ |

🧠 Mathematical Proofs

1. Master's Theorem (Merge Sort)

For Merge Sort, the work is divided into two equal sub-problems (a=2,b=2) with linear work f(n)=n to merge.

    Verification: logb​a=log2​2=1. Since f(n)=Θ(n1), this satisfies Case 2 of the Master's Theorem.

    Code Proof: For an array of 10 elements, the iteration count is approximately 34. This is significantly lower than n^2 (100), verifying the nlogn growth.

2. Akra-Bazzi (Quick Sort)

Quick Sort partitions may be unequal (e.g., T(n/3)+T(2n/3)). Akra-Bazzi provides a generalized solution that proves the average-case performance remains O(nlogn).

    Code Proof: By comparing qCount (Quick Sort) to mCount (Merge Sort), the code shows they follow a similar logarithmic growth curve compared to O(n^2) algorithms.

3. Iterative Analysis (For Bubble, Selection, and Insertion Sort)
   
These algorithms do not use the Master's Theorem because they don't "divide" the problem. Instead, they use nested loops.

    The Logic: For every element in the array (n), the algorithm has to look at almost every other element (n−1,n−2...).

    The Math: This creates a summation (n+n−1+n−2...). In mathematics, this series sums up to approximately n squared (n^2).

    Verification: In my program's output, you will see that the "Iteration Count" for these three algorithms is much higher (closer to 100 for 10 items) compared to Merge Sort.
For Bubble and Selection Sort, the complexity is derived using the summation of nested loops.

    Theoretical Expectation: For n=10, the number of comparisons is n(n−1)/2=45.

    Actual Code Result: 45 Iterations.

    Conclusion: The experimental data perfectly matches the O(n^2) theoretical complexity.

For Insertion Sort, the complexity is also $O(n^2)$, but it is data-sensitive.

    Actual Code Result: 15 Iterations.

    Explanation: Because the input array was partially sorted, Insertion Sort performed fewer swaps, demonstrating its superior "Best Case" performance while still belonging to the O(n^2) family.

4. Recursion Tree (Binary Recursion)

    The Logic: This function calls itself twice for every level of the recursion.

    The Math: This creates a branching tree structure where the number of calls doubles at each level.

    Verification: Even for a small input of n=10, the iteration count jumps to 177. This proves the Exponential (O(2^n)) growth rate, showing it is far less efficient than O(nlogn).

💻 How to Compile and Run

To link all modular files and execute the analysis:
Bash

g++ *.cpp -o SortAnalysis
./SortAnalysis

📝 Key Features

    Time Tracking: Uses <chrono> for microsecond-level precision.

    Iteration Counting: Uses global counters to show the "Work Done" by each algorithm.

    I/O Verification: Displays the array before and after sorting to ensure algorithm integrity.

## 📊 Live Test Results
<img width="1062" height="843" alt="image" src="https://github.com/user-attachments/assets/4f8b19e2-78ac-4ec5-aef1-8cb0d494a249" />
<img width="1017" height="252" alt="image" src="https://github.com/user-attachments/assets/a4823175-fd17-4905-b910-4e15362ccc18" />


🏁 Conclusion

Through this project, I have successfully verified the theoretical time complexity of five sorting algorithms using real-world data:

    Divide and Conquer (O(nlogn)): Using Master's Theorem (Merge Sort) and Akra-Bazzi (Quick Sort), the iteration counts (34 and 26) were significantly lower, proving these theorems correct for recursive algorithms.

    Iterative Analysis (O(n^2)): Bubble and Selection Sort matched the mathematical prediction of 45 iterations for N=10 perfectly (2n(n−1)​).

    Data Sensitivity: Insertion Sort showed only 15 iterations, demonstrating that while its theoretical complexity is O(n^2), it performs efficiently on partially sorted data.
    
    Exponential (O(2^n)): Binary Recursion (Verified by Recursion Tree Analysis).This visually proves that Exponential Complexity grows much faster and is less efficient than Log-Linear Complexity.

Final Result: The experimental iteration counts align perfectly with the Big-O complexity derived from mathematical theorems, confirming that O(nlogn) is strictly more efficient than $O(n^2)$ and $O(2^n)$ as the data size increases.


    
