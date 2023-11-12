# 🐉 printf
This repo would contain the codes for creating a custom printf function and it would be a team project

## Flowchart to Some Files
<img src="https://github.com/Isaiah-woko/printf/blob/master/documentation_files/Untitled%20Diagram.drawio.png">

## 📂 Files 
|File|Description|
|---|---|
|_printf.c| the main function _printf|
|specifier_handler.c| the switch case to chose the right specifier|
|helpingFunctions.c|Helping function for digit and string manipluation|
|print_chr.c|print a character '%c' |
|print_int.c|print a integer '%d' or '%i'|
|print_str.c|prints a string '%s' |
|print_percent|prints the percentage symbol '%' |
|print_binary.c|print the integer number in binary '%b'|
|0-main.c | main function to test 'd' , 'i' , 'c' and normal string in format variable|
|main.c |The Alx main.c to test all specifier formats| 


## Run Commands
     gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format tests/0-main.c *.c && ./a.out
