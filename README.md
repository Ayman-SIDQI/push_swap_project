# push_swap_project

##Introduction:

The Push Swap project is a sorting algorithm implementation using two stacks in the C programming language. The goal is to sort a random amount of integers in ascending order using the minimum number of operations, with a limited set of available operations. The project requires a deep understanding of algorithms and their complexity, as well as rigor and attention to detail in programming.

The Rules:

The project has two stacks, A and B, and the goal is to sort stack A in ascending order. The following operations are available:

    sa: Swap the first two elements at the top of stack A.
    sb: Swap the first two elements at the top of stack B.
    ss: sa and sb at the same time.
    pa: Push the first element at the top of stack B to the top of stack A.
    pb: Push the first element at the top of stack A to the top of stack B.
    ra: Rotate stack A, shifting up all elements by one. The first element becomes the last one.
    rb: Rotate stack B, shifting up all elements by one. The first element becomes the last one.
    rr: ra and rb at the same time.
    rra: Reverse rotate stack A, shifting down all elements by one. The last element becomes the first one.
    rrb: Reverse rotate stack B, shifting down all elements by one. The last element becomes the first one.
    rrr: rra and rrb at the same time.

The objective is to sort the numbers in ascending order using the minimum number of operations.
