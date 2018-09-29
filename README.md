# PP1-2018
PL Lecture 1 Notes:
1. Introduction
2. Syllabus
    1. Setup, data types, unary/binary operations, bit manipulations, cin, cout, freopen
    2. if else conditional statements, loop (for, while, do while)
    3. Arrays
    4. Nested loops, 2d arrays
    5. String, ssteam, string functions, scanf, printf
    6. Functions
    7. Recursion 
    8. STL1 (vector, set, iterators)
    9. STL2 (map, stack, queue, dequeue, comparator)
    10. STL3 (algorithms)
    11. Struct, pointers
3. About laboratory works, quizzes (quiz(15 points) - W4, midterm(15 points) - W8, quiz(15 points) - W12, endterm(15points) - W15, Final (40 points))
4. telegram (http://tny.im/fFZ), piazza (http://tny.im/fF-) — access code - pp1, GitHub (http://tny.im/fG0)
5. MinGW - cpp compiler (link on piazza), VS Code - can be any text editor (sublime text, notepad++, etc)
6. Introduction to code structure, explain how compiler works
7. Compiling and executing program (hello world program), return 0, code after return 0.
8. Variables, declaration of variables (int, long long - explain how many numbers we can store)
    1. int a;...
    2. cin >> a >> b example
    3. a + b + c (cin, several parameters in cout) binary operators (+, -, *, /, % examples)
9.   char (‘A’ - 65, ‘B’ - 97, ‘0’ - 48) Examples
10. string simple, concatenating strings (with strings and chars)
11. bool (example of ‘or’, ‘and’, ‘xor’)
12. double (float) example
13. int and double multiplying dividing
14. Comments
15. Math functions (sqrt, abs, sin, cos, min, max)
16. bit manipulations (how to calculate 2 power of N etc)
17. examples from informatics (first lab from piazza) 

PL Lecture 2 Notes:
1. piazza 1, 2 lab works
2. data type sizeof
3. (++, --, +=, -=, *=, /=, %=)
4. comparison operators (==, !=, >, <, >=, <=)
5. printf with floating numbers (M_PI) 
6. math functions - pow, round, ceil, floor
7. bit manipulation, or, xor, and, >>, <<, |=, &=, ^=
8. 2^n example 1 << n
9. set 1 for i-th bit of number: A |= (1<<i);
10. invert i-th bit of number: A ^= (1<<i);
11. identify i-th bit of number: int b = (A>>i)&1;
12. if else conditions. If —> return 0, absolute value of number, minimum of three numbers, triangle problem (&&, and)
13. even odd example
14. find grade from points example
15. loop operators: for, while, do while
16. even numbers / odd numbers till 100
17. infinity loop
18. all numbers which divisible by 3 in range (a, b)
19. count number of dividers of N
20. prime number
21. fibonacci sequence (0, 1, 1, 2, 3, 5, …)
22. factorial
23. infinite loop (for (;;)) break, continue
24. while loop statement (power of 2, count of digits)
25. sum of numbers (cin reads numbers in the loop) freopen
26. string: number of words 


PL Lecture notes 3
1. From previous lectures
    Loop samples
        1. Sum of digits (for, while)
        2. list of all squares < N (while)
        3. do while & while
            1. factorial using — while
            2. sum all numbers until user enter 0 — do while
        4. string: number of words (freopen)
2. What is array?
    1. value
    2. index
3. Init samples
    1. Array declaration — int a[10]; bool b[10]; 
    2. Declaration and init — int a[3] = {1, 2, 3}; int a[] = {1, 2, 3};
4. Accessing the values of an array: a[0] = 3; 
5. Other operations with arrays: a[0] = b; c = a[n+2]; a[a[2]] = a[1] + 3;

6. 1D array samples
    1. Read N number and show them
    2. Sum of all elements int array
    3. Create array with size N — int a[N]; Read N elements
    4. Show even numbers from given array
    5. Show numbers in odd position from given array
    6. Count number of positive numbers in array
    7. Find Max/Min from given array
    8. Linear search of K from given array
    9. Find number K and remove it, shift left all rest elements add 0 at the end
    10. String samples
        1. s.size(); s.length()
        2. Show all digits from string
        3. convert all letter to UPPER

PL lecture 4 notes:
1. Quiz problems, upsolving and marks
    1.1. 

2. Nested loop
    2.1. Multiplication table
    2.2.  1 1 1 1
          2 2 2 2
          3 3 3 3

    2.3   1
          1 2 
          1 2 3 
          1 2 3 4
    
3. 2D array (matrix)
    3.1 input, output
    3.2 table of multiplication
    3.3 max element in matrix
    3.4   
    1 0 0 0
    2 1 0 0
    2 2 1 0
    2 2 2 1
    3.5
    0  0  0  0  0  0  0  0  0  0
    0  1  2  3  4  5  6  7  8  9
    0  2  4  6  8 10 12 14 16 18
    0  3  6  9 12 15 18 21 24 27
    3.6
    0 0 0 1
    0 0 1 2
    0 1 2 2
    1 2 2 2
    3.7
    Дано число n и квадратный массив int A[n][n]. Проверьте, является ли массив симметричным относительно главной диагонали. Программа должна выводить слово yes для симметричного массива и слово no для несимметричного. Пример
        Вход                   Выход
        3                     yes
        0 1 2
        1 2 3
        2 3 4
    3.8
    Состязания-1. В метании молота состязается n спортcменов. Каждый из них сделал m бросков. Победителем считается тот спортсмен, у которого сумма результатов по всем броскам максимальна.
Если перенумеровать спортсменов числами от 0 до n-1, а попытки каждого из них – от 0 до m-1, то на вход программа получает массив int A[n][m], состоящий из неотрицательных чисел. Программа должна определить максимальную сумму чисел в одной строке и вывести на экран эту сумму и номер строки, для которой достигается эта сумма. Если таких строк несколько, то выводится номер наименьшей из них. Пример для n=4 спортсменов и m=3 попыток:

        Вход                   Выход
        4 3                    19
        5 6 7                  1
        6 6 7
        7 6 6
        4 3 5
 



