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