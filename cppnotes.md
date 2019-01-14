# **Basic C ++ Concepts**
![Screenshot](./Pictures/cpp-basic.jpeg)
![Screenshot](./Pictures/execute-cpp.png)
## Compiling with C
https://courses.cs.washington.edu/courses/cse373/99au/unix/g++.html

## Variables

| Type   | Usage                  | Examples     |
|--------|:-----------------------|--------------|
|int     | integer numbers        | 0 , 420      |
|double  | floating-point number  | 3.14, -200.0 |
|char    | characters             |'a, '@'       |
|string  | sequence of characters | "Hello World!|
|bool    | truth values           | true false   |

## Arithmetic Operators 

&rarr; + addition<br>
&rarr; - subtraction<br>
&rarr; * multiplication<br>
&rarr; / division<br>
&rarr; % modulo which gives remainder<br>
&rarr; pow () is exponents (7.0, 3.0) = 343<br>

### Input and Output
We have cout for output, and there is something called cin is used for input!
```cpp
string password;

std::cout << "Enter your password: ";
std::cin >> password;
std:: cout << "Your password is " << password "\n";
```

## Relational Operators
+ == equal to
+ != not equal to
+ > greater than
+ < less than
+ >= greater than or equal to
+ <= less than or equal to

## if, if else and else Statements

```cpp
 double ph = 4.6;  
  
  if (ph > 7)
  {
    std::cout << "Basic\n";
  }
  else if (ph < 7)
  {
    std::cout << "Acidic\n";
  }
  else 
  {
    std::cout << "Neutral\n";
  }
```

## Switch Statements

```cpp

switch (grade) {

  case 9:
    std::cout << "Freshman\n";
    break;
  case 10:
    std::cout << "Sophomore\n";
    break;
  case 11:
    std::cout << "Junior\n";
    break;
  case 12:
    std::cout << "Senior\n";
    break;
  default:
    std::cout << "Invalid\n";
    break;

}
```
## Loop
- A loop is a programming tool that runs until a specified condition are fulfilled.
#### While Loop
```cpp
  while(condition) {statements}
  ```
  + it looks very similar to a if statement, however the loop while continue to run as long as the condition is true. In other words, instead of executing *if* something is true, it keeps running *while* it is true.
##### Example 
  ```cpp
    while (guess != 8) {

      std::cout << "Wrong guess, try again: ";
      std::cin >> guess;

    }
  ```
+ in this example while guess is not equal to 8, it will keep asking for an input till it is 8.

#### For Loop
```cpp
  for (int i = 0; i < 20; i++) 
  {

    std::cout << "I will not throw paper airplanes in class.\n";

  }
```
  + the for loop is for when we know exactly how many times we want to iterate.  There are three parts: 
  The initialization of a counter ```cpp int i = 0; ```
  The condition: ```cpp i < 20; ```
  The incrementor/decrementor ```cpp i++  ```