# Pair Of Numbers Cpp
The program takes input from stdin in the format "a|b", where a,b are positive integers. As output, the program produces 
multiple lines using the format [X of Y], where Y counts the amount of different second parts.<br/><br/>
Written in C++, Ubuntu 16.04.3 LTS.

## Example
If the input is<br/>
3|78 <br/>
4|7765<br/>
3|82<br/>
2|8<br/>
4|14<br/>
3|78<br/>
2|8<br/>
4|12<br/>

then the output is

3|78 [1 of 2] <br/>
4|7765 [1 of 3] <br/>
3|82 [2 of 2]<br/>
2|8 [1 of 1] <br/>
4|14 [2 of 3] <br/>
3|78 [1 of 2] <br/>
2|8 [1 of 1] <br/>
4|12 [3 of 3] <br/>

## Restrictions and Assumptions
- No more than 2000 characters (see `make count`)
- Complexity at most O(logn)
- Not required: big integers, input validation

## Makefile
- `make` to compile
- `make clean` to delete the object files and the executable 
- `make count` to count lines, characters and bytes of the code
