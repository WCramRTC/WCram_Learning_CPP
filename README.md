# WCram_Learning_CPP
 
### 1. First goal, get C++ properly installed and running inside my IDE of choice ( probably vs code )

[How to install C++](https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/)

[How To Run C++ In VS Code](https://www.freecodecamp.org/news/how-to-write-and-run-c-cpp-code-on-visual-studio-code)

---

### 2. Get my first hello world in c++ going and learn how to deploy.

[G4G - First Hello World C++](https://www.geeksforgeeks.org/writing-first-c-program-hello-world-example/)

---

### 3. Find out what's going on in my main
   1. What is #include <iostream>
      * iostream is the library for reading input and output streams  
   2. what is using namespace std;
      * `std` stands for standard, as in C++ standard library
      * without std we would have to use `std::cout`

      * ***Is it bad practice?***
      * [G4G : using std, bad practice](https://www.geeksforgeeks.org/using-namespace-std-considered-bad-practice/#)
   3. int main() - why int?
      * ints are used to return if the program was succesfully ended. Anything other than 0 is an error
      * void main() is an option, but not really used
   4. what is cout and <<
      * used to display characters to the screen. The c stands for character, so character output
   5. why does main return 0, what does it mean.
      * 0 stands for succesfull exit. Anything else means an error happened.

### 4. Get my fundamentals down

   1. [Inputs](https://www.w3schools.com/cpp/cpp_user_input.asp)
      * cin ( using `std`)
        * Ex : `cin << variable_Name`

   2. [Outputs](https://www.w3schools.com/cpp/cpp_output.asp)
      * cout ( using `std`)
        * Ex : `cout >> "Display This Message`
      * printf( using `stdio.h`)
        * Ex : `printf("Message")`
   3. Loops
   * [For](https://www.w3schools.com/cpp/cpp_for_loop.asp)
       * `for(int i = 0; i < 5 ; i++)`
     * **ForEach**
       * `for(type name : arrayName)`
   * [While](https://www.w3schools.com/cpp/cpp_while_loop.asp)
     * `while(condition) { }`
   4. [Conditions](https://www.w3schools.com/cpp/cpp_conditions.asp)
      * `if(condition) {code}`
      * `else if (condition){code}`
      * `else {code}`
      * `switch(expression)`
        * `case:`
        * `break;`
        * `default`
   2. [Variables](https://www.w3schools.com/cpp/cpp_variables.asp)
      * `int` - whole numbers
      * `double` - decimal
      * `char` - single character ' '
      * `string` - multiple characters " "
      * `bool` - true / false
   3. [Operation]()
      * [Arithmatic]()  
      * 
         | Operator  | Description         | Example         |
         |-----------|---------------------|-----------------|
         | +         | Addition            | `a + b`         |
         | -         | Subtraction         | `a - b`         |
         | *         | Multiplication      | `a * b`         |
         | /         | Division            | `a / b`         |
         | %         | Modulus (Remainder) | `a % b`         |
         | ++        | Increment           | `a++` or `++a`  |
         | --        | Decrement           | `a--` or `--a`  |
      * [Assignment Operation](https://www.w3schools.com/cpp/cpp_operators_assignment.asp)
         | Operator  | Description         | Example         |
         |-----------|---------------------|-----------------|
         | =         | Assignment          | `a = b`         |
         | +=        | Addition assignment | `a += b`        |
         | -=        | Subtraction assignment | `a -= b`      |
         | *=        | Multiplication assignment | `a *= b`   |
         | /=        | Division assignment | `a /= b`        |
         | %=        | Modulus assignment  | `a %= b`        |
         | &=        | Bitwise AND assignment | `a &= b`      |
         | \|=       | Bitwise OR assignment | `a \|= b`      |
         | ^=        | Bitwise XOR assignment | `a ^= b`      |
         | <<=       | Left shift assignment | `a <<= b`      |
         | >>=       | Right shift assignment | `a >>= b`     |


      * [Comparison Operation](https://www.w3schools.com/cpp/cpp_operators_comparison.asp)

         | Operator  | Description            | Example         |
         |-----------|------------------------|-----------------|
         | ==        | Equal to               | `a == b`        |
         | !=        | Not equal to           | `a != b`        |
         | <         | Less than              | `a < b`         |
         | >         | Greater than           | `a > b`         |
         | <=        | Less than or equal to  | `a <= b`        |
         | >=        | Greater than or equal to | `a >= b`      |

      * [Logical Operation](https://www.w3schools.com/cpp/cpp_operators_logical.asp)

         | Operator  | Description          | Example       |
         |-----------|----------------------|---------------|
         | &&        | Logical AND          | `a && b`      |
         \| \|       | Logical OR           | `a \|\| b`    |
         | !         | Logical NOT          | `!a` or `not a`|


   4. [Arrays](https://www.w3schools.com/cpp/cpp_arrays.asp)
      * `type name[count]`
      * No need to declare new
      * Can I use a regular for loop with them?
      * More to come

   8. Classes
      1. Creating external classes create a bit more work. We have to link through Header files
      * [Geeks for Geeks - Headers](https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/) 
  

---
1. Document my journey along the way
   * C++ has a lot of similarites in the structure of C#, which makes sense, I believe C# is built on top of C++.
   * Even a little knowledge of pointers and reference has lead to a far greater understand of whats happening under the hood. I want to dive into the specifics of how and when to properly utilize memory management. 
   * Question to self : Are deconstructors made by default? They must only be called when I remove items from memory... how do I remove items from memory? ( Found 5 seconds later, delete operator? )
2. Find the difference between ( C Sharp ) and CPP
   * You have to declare classes and functions before calling them in the main ( errors pop otherwise )
   * There are no interfaces. C++ can have multi class inheritance
   * Memory Management - C# has garbage collection, CPP you have to manually delete objects no longer in use, otherwise this will lead to memory leaks.
3. Why do I want to learn CPP. 
   1. CPP is a very popular lower level programming language that gives more power to the programmer for minute detail over garbage collection among other things. It's commonly used in game development and is the primary language ( besides the proprietary Blueprint System. )
4. What Tutorials am I considering using for my project?  
[Unreal Quick Start - UE 5](https://docs.unrealengine.com/5.0/en-US/unreal-engine-cpp-quick-start/)  
[Unreal for Students](https://www.unrealengine.com/en-US/students)  


5. End goal : What do I want to have built within 4 weeks of starting to learn CPP. A Game for the game dev class.

6. Experience doing the code review in a new language :
   1. C++ has a lot more neuince than other languages. Leanring how to manage pointers and references. The need for headers. There's a lot to take in. You come to realize how my C# does for you.