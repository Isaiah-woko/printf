# 🐉 printf
This repo would contain the codes for creating a custom printf function and it would be a team project

## Flowchart to Some Files
<img src="https://github.com/Isaiah-woko/printf/blob/master/documentation_files/Untitled%20Diagram.drawio.png">

## 📂 Files : _printf 
|File|Description|
|---|---|
|_printf.c| the main function _printf|
|specifier_handler.c| the switch case to chose the right specifier|
|helpingFunctions.c|Helping function for digit and string manipluation|
|print_chr.c|print a character '%c' |
|print_int.c|print a integer '%d' or '%i'|
|print_str.c|prints a string '%s' |
|print_percent.c|prints the percentage symbol '%' |
|print_binary.c|print the integer number in binary '%b'|
|print_pointer.c|print the value of a pointer '%p'|
|print_unsigned_int.c|prints an unsigned integer '%u' |
|print_unsigned_octal.c|prints an unsigned octal '%o' |
|print_bigstr.c|print the value of a String '%S'|

## 📂 Files : tests
|File|Description|
|---|---|
|tests/0-main.c | test cases for task 0 .'%s','%c','%%'|
|tests/1-main.c | test cases for task 1 .'%d', '%i'|
|tests/2-main.c | test cases for task 2 .'%b'|
|tests/3-main.c | test cases for task 3 .'%u', '%o', '%x', '%X'|
|tests/4-main.c | test cases for task 4 . buffer[1024]|
|tests/5-main.c | test cases for task 5 .'%S'|
|tests/6-main.c | test cases for task 6 . '%p'|




## Run Commands
To check different test cases use the right test/{}-main.c file

     gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format tests/0-main.c *.c && ./a.out
