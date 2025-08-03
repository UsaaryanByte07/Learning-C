# C Projects

This folder contains various projects built while learning the C programming language. Each project here is designed to apply and reinforce different concepts of C programming, from basic to advanced topics.

## 📂 Project List

1. [**Project 1**](./Project%201/)
   - **Name of Project**: Number Guessing Game
   - **Description**: We will write a program that generates a random number and asks the player to guess 
                      it. If the player’s guess is higher than the actual number, the program displays “Lower 
                      number please”. Similarly, if the user’s guess is too low, the program prints “Higher 
                      number please”. When the user guesses the correct number, the program displays the number of 
                      guesses the player used to arrive at the number.
   - **Key Concepts**: Variables, Random Number Generation, Conditional Statements, Loops, User Input, Input Validation, Functions (if used), Control Flow
   - **Status**: Complete
   - **Level**: Basic

2. [**Project 2**](./Project%202/)
   - **Name of Project**: Star Pattern Printing
   - **Description**: The Program takes input from the user as number of rows and Accordingly prints the following star patterns
                      which includes Right Angle Triangle(Left Aligned), Right Angle Triangle(Right Aligned), Inverted Right Angle Triangle(Left Aligned), Inverted Right Angle Triangle(Right Aligned), Pyramid, Inverted Pyramid, Diamond .
   - **key Concepts**: Nested Loops, User input, Input Validation
   - **Status**: Complete
   - **Level**: Basic

3. [**Project 3**](./Project%203/)
   - **Name of Project**: Multiplication Table
   - **Description**: This C program generates multiplication tables based on user input. The user specifies the length of each     table and the number of tables they want to generate. For each table, the program prompts the user to provide a number, then  calculates the table by multiplying the number with integers from 1 to the specified length. The program then displays all the  multiplication tables in a tabular format, where each column corresponds to a table and each row represents a multiple.
   - **key Concepts**: Nested Loops, Dynamic input, Multidimensional Arrays(2-D Arrays), Variable-Length Arrays (VLA), Formatted Output 
   - **Status**: Complete
   - **Level**: Moderate

4. [**Project 4**](./Project%204/)
   - **Name of Project**: Text Encryption and Decryption (User Input)
   - **Description**: This C program performs encryption and decryption of **user-inputted strings** using a Caesar cipher-like technique. The user enters a string and sets an encryption ID. Each character of the string is shifted by a fixed value (+12) and stored as an encrypted string. To decrypt, the user must re-enter the correct encryption ID (within 5 attempts). If successful, the original string is displayed.
   - **Key Concepts**: Character Arrays (Strings), ASCII Manipulation, Caesar Cipher Logic, Functions, Loops, Conditional Statements, User Authentication (Simple)
   - **Status**: Complete
   - **Level**: Basic to Moderate
   - **Note**: This project focuses on encrypting **text entered by the user** through the terminal. A future version will handle **file-based encryption and decryption**.

## 🔨 How to Run the Projects

To run any project, navigate to the project directory and compile the C file(s) with a C compiler:

```bash
gcc project_name.c -o project_name
./project_name
