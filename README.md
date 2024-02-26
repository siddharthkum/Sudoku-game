# Sudoku-game
SUDOKU


In this project I have to tried implement a very popular board game Sudoku. The implementation of this game have been partially done with the help of data structure list and singly linked list. Also, there is a very heavy use of doubly linked list in its complete execution.

Before further digging on the questions how and why I have used the above mentioned data structures in this game, firstly I would like to give a short information on what is Sudoku and how it is played.

So, Sudoku is a logic-based, combinational number-placement puzzle. In classic Sudoku, the objective is to fill a 9×9 grid with digits so that each column, each row, and each of the nine 3×3 sub grids that compose the grid (also called "boxes", "blocks", or "regions") contains all of the digits from 1 to 9. The puzzle setter provides a partially completed grid, which for a well-posed puzzle has a single solution. The primary motive is that, we have to fill the numbers [1-9] in such a way that there is no repetition of any number either in a whole row or a column or a 3x3 sub quadrant.

Coming on to the question why I have used the fore mentioned data structures. So, the answer is quite simple. Firstly, we have to understand that Sudoku is a board game which involves pre-placement of certain numbers, and the rest numbers are to be filled by the user. So, firstly we need a structure which helps us in entering the numbers and storing them which can be easily done with the help of list and singly linked list and also though the concept of dynamic memory allocation. Also, we need a structure which involves the linking of each cells in the 9x9 board such that we are able to concatenate all the rows and columns successfully. Concatenation of each cells will help us in identifying any errors the user does while entering the numbers [1-9] into the puzzle which will be neatly done by doubly linked list. So in this way with the help of list and singly linked list we can easily fill our elements or numbers [1-9] in the puzzle and the data structure doubly linked list will help in the easy traversal of the numbers in the puzzle through which the compiler can easily point out the error user does while filling of numbers. (The error here to point out is nothing but the prevention of filling any number in such a way that it causes repetition either in the whole row of that cell, or the whole column of that cell belongs to, or the 3x3 quadrant that cell belongs to.)

Now answering to the question that how I have brought this concept in formation and what is the  algorithm used. So, lets answer this question in parts of three(1. Basic information/ 2. Logic/ 3.Algorithm)
1. Basic information| Firstly, lets come to the basics of what is list, singly linked list and doubly linked list, also how they are used and are different from each other.
-Lists
In c programming, lists are nothing but the arrays. It comes under static memory allocation and is helpful in storing elements.
 


-Singly Linked lists
A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers as shown in the below image:
 
In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.
-Doubly linked lists
A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list.
 
2. Logic
A) Coming to the logic part, using looping and arrays we are able to store elements which will be pre-placed in the game. So in this way a will get a board with partial numbers already placed on the board. Using singly linked list and scanf command we enable the insertion process in the game. So in this way we make the user to take the input and store it in the cell. Now comes one of the most important aspect, that is concatenation. So here make the combined use of function pointers and doubly linked list. We create a function and pass parameters in the form of pointers which will be acting as the nodes. This nodes will help us in the storing the addresses of each cell with previous as well as the next one. In this we can traverse throughout a row from all the directions.
B) Now we create an another function through which we will be able to link all the rows with their previous rows and through double looping we we include columns as well. In this way each and every cell of the board are linked to each other and we are now ready with the board and some pre placed numbers. 
C) Now again we will create 3 functions through which will put constraints on the filling of numbers in the empty cells such that there occurs no repetition. So one function will handle the prevention of repetition of numbers along a row/line. In the similar fashion other two functions will handle the prevention of repetition in column and quadrant respectively.
