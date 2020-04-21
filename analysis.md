
# analysis.md


Fourth homework of ECE 231: Intermediate Programming. Assigned 3/10/2020. Due 4/20/2020, 11:59 pm


## Runtime report
You must create a file called `analysis.md` in which you will compare:

Part 1: linear search and binary search, as well as compare:
Part 2: bubble sort and merge sort, and finally compare the:
Part 3: `-O0` option and `-O3`. 

You must discuss algorithm runtime and compare and share how long it took for you algorithms to run.


### A word of warning
Some of the code here is used from an online reference and all submission will be compared to various online resources. Please adapt all code used from an online resource into your own form. 


## Rubric
    Program runs with no errors: 20%
    Complete searching algorithm implementation: 20%
    Complete sorting algorithm implementation: 20%
    Runtime report: 10%
    Makefile creation: 10%
    Clean code: 20%




Part 1: Comparison of Linear Search and Binary Search for -O0 (All) and -O3 (Fast) Run-Time Options:



Linear Search and Binary Search Comparison for the "make all" Compiler:

  Below are the averages computed for ten trial runs. i.e., ten samples. Here we go . . .


linear search all values:     157.2017 secs = 1.572017E+02 secs
binary search all values:     4.01E-07 secs = 0.000000401 secs

  A difference of nine (9) orders of magnitude! Binary search all values, for the "make all" compiler, is much, much faster - by about a billion times!


linear search all values (pointers):     7.55E-07 secs = 0.000000755 secs
binary search all values (recursive):    3.50E-07 secs = 0.000000350 secs

  Binary search all values (recursive) is greater than twice as fast as linear search all values (pointers).


linear search all values:                157.2017 secs = 1.572017E+02 secs
linear search all values (pointers):     7.55E-07 secs = 0.000000755 secs

  There is a difference of nine (9) orders of magnitude between the two methods! Linear search all values (pointers), for the "make all" compiler, is much faster - by about a billion times!


binary search all values:                4.01E-07 secs = 0.000000401 secs
binary search all values (recursive):    3.50E-07 secs = 0.000000350 secs

  The two search algorithms are very commensurate in speed. Binary search all values (recursive) is a little faster than binary search all values.



Linear Search and Binary Search Comparison for the "make fast" Compiler:

  Below are the averages computed for ten trial runs. i.e., ten samples. Here we go (again) . . .


linear search all values:     156.8229 secs = 1.568229E+02 secs
binary search all values:     3.97E-07 secs = 0.000000397 secs 

  A difference of nine (9) orders of magnitude! Binary search, for the "make fast" compiler, is much, much faster - by about a billion times!


linear search all values (pointers):     7.80E-07 secs = 0.000000780 secs
binary search all values (recursive):    3.57E-07 secs = 0.000000357 secs

  Binary search all values (recursive) is greater than twice as fast as linear search all values (pointers).


linear search all values:                156.8229 secs = 1.568229E+02 secs
linear search all values (pointers):     7.80E-07 secs = 0.000000780 secs

  There is a difference of nine (9) orders of magnitude between the two methods! Linear search all vlaues (pointers), for the "make fast" compiler, is much faster - by about a billion times!


binary search all values:                3.97E-07 secs = 0.000000397 secs
binary search all values (recursive):    3.57E-07 secs = 0.000000357 secs

  The two search algortihms are very commensurate in speed. Binary search all values (recursive) is a little faster than binary search all values.




Part 2:



Bubble Sort and Merge Sort Comparison for the "make all" Compiler:

  Below are the averages computed for ten trial runs. i.e., ten samples. Here we go . . .
 

sort array with bubble sort:    3.89E-07 = 0.389 microsecs
sort array with merge sort:     3.43E-07 = 0.343 microsecs

  There is not much of a difference between "sort array with bubble sort" and "sort array with merge sort" for the "make all" compiler. The difference in time between the two being 0.46E-07 secs = 0.046 microseconds - a very small difference, indeed. It does appear that "merge sort" is the faster algorithm, however!



Bubble Sort and Merge Sort Comparison for the "make fast" Compiler:

  Below are the averages computed for ten trial runs. i.e., ten samples. Here we go (again) . . .
 
 
sort array with bubble sort:    3.89E-07 secs = 0.389 microsecs
sort array with merge sort:     3.49E-07 secs = 0.349 microsecs

  There is not much of a difference between "sort array with bubble sort" and "sort array with merge sort" for the "make fast" compiler. The difference in time between the two being 0.40E-07 secs = 0.040 microseconds - a very small difference. It does appear, once again, that "merge sort" is the faster algorithm, however, by a very small amount!




Part 3:



Comparison of the -O0 and -O3 Options:

  Below are the averages computed for ten trial runs. i.e., ten samples. Here we go . . .
 

                                      -O0 (All) Option      -O3 (Fast) Option                              Comparison

linear search all values                157.2017 secs         156.8229 secs         -O3 (Fast) Option is indeed faster      
linear search all values (pointers)     7.55E-07 secs         7.80E-07 secs         -O0 (All) Option is apparently faster
binary search all values                4.01E-07 secs         3.97E-07 secs         -O3 (Fast) Option is a little bit faster
binary search all values (recursive)    3.50E-07 secs         3.57E-07 secs         -O0 (All) Option is a little bit faster
sort array with bubble sort             3.89E-07 secs         3.89E-07 secs         -O0 (All) and -O3 (Fast) Options are apparently the same!
sort array with merge sort              3.43E-07 secs         3.49E-07 secs         -O0 (All) Option is a little bit faster than the -O3 Option

  Even though the -O3 Option call itself "fast," this algorithm was faster than the -O0 (All) Option in only two cases: the "linear search all values" and the "binary search all values." The -O0 Option was faster in three cases: the "linear search all values (pointers)" case, the "binary search all values (recursive)" case, and the "sort array with merge sort" case. The only other outstanding case was the "sort array with bubble sort" case, in which both the -O0 (All) and -03 (Fast) Options registered as a tie! What may be concluded?




Conclusions:



  In the first part (Part 1) for comparison, it can be seen that the "linear search all values" and the "binary search all values" for both the -O0 (All) Option and the -O3 (Fast) Option have a difference of about a billion parts! Their orders of magnitude in performing these searches differ by a factor of approximately one billion! This is important for computational complexity and cost when running these two algorithms in a computer. The "binary search all values" algorithm is about a billion times faster than the "linear search all values" algorithm. This is in accordance with the theory that the "binary search all values" algorithm should be faster.  

  The "linear search all values (pointers)" and the "binary search all values (recursive)" for both the -O0 (All) and the -O3 (Fast) options demonstrate that the "binary search all values (recursive)" algorithm is greater than twice as fast as the "linear search all values (pointers)" algorithm. This is in accordance with the theory that the "binary search all values (recursive)" algorithm should be faster.

  The "linear search all values (pointers)" algorithm is about a billion times faster than the "linear search all values" algorithm for both the "make all" and "make fast" compiling options. This is in accordance with the theory of what pointers should do, that is, speed up the process for the same algorithm!

  The "binary search all values" and the "binary search all values (recursive)" algorithms are commensurate in speed for both the "make all" and "make fast" compiling options. The recursive algorithm adds a little more speed. This is in accordance with the theory: a recursive addition in the same algorithm should speed up the process! 


  In the second part (Part 2) for comparison, the "merge sort" algorithm was faster than the "bubble sort" algorithm, but not by much. The difference between the two methods was a very small 0.04 to 0.05 microseconds. This may seem like a small amount of time, but if the code is lengthened and compounded, this may add to a significant amount of computational complexity and time to run a program. The "merge sort" algorithm, in theory, should run faster than the "bubble sort" algortihm, and we do see that here for the "make all" and "make fast" compiling options, which is indeed the case.  


  In the third part (Part 3) of the comparison, it was seen that although the option may call itself "fast," the -03 (fast) Option failed in four tests in run-time against the -O0 (all) Option, with one test being a tie in amount of run-time used. This is curious? Why call this option "fast," then? But, the data explains itself. Indeed, the "fast" option, the -O3 Option, was only faster than the -O0 Option in the "linear search all values" and the "binary search all values" categories. The categories "linear search all values (pointers)," the "binary search all values (recursive)," and the "sort array with merge sort" found the -O0 (All) Option faster. Curiously, the "sort array with bubble sort" category found the run-time of the -O0 (All) Option and the -O3 (Fast) Option the same!


  In conclusion, this has been a compeling and revealing exercise in exhibiting the theory and actual run-time experiments of the various algorithms/methods employed of a searching and sorting program in the C++ programming language!




