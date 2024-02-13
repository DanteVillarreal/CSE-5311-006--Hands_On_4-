//Problem 0:
  #include <stdio.h>
  
  int fib(int n) 
  {
      if (n == 0) 
      {
          return 0;
      }
      if (n == 1) 
      {
          return 1;
      }
      return fib(n-1) + fib(n-2);
  }
  
  int main() 
  {
      int n = 5;
      int x = fib(n);
      printf("Fibonacci of %d is: %d\n", n, x);
      return 0;
  }



/*
Calls:
fib(5) -> fib(4) -> fib(3) -> fib(2) -> fib(1) -> fib(0) -> fib(1) -> fib(2) -> fib(1) -> fib(0) -> fib(3) -> fib(2) -> fib(1) -> fib(0) -> fib(1)

fib(5) calls 4 and 3
fib(4) calls 3 and 2
fib(3) calls 2 and 1
fib(3) calls 2 and 1
fib(2) calls 1 and 0
fib(2) calls 1 and 0
fib(1) returns 1
fib(2) calls 1 and 0
fib(1) returns 1
fib(1) returns 1
fib(0) returns 0
fib(1) returns 1
fib(0) returns 0
fib(1) returns 1
fib(0) returns 0

add all the returns and you get 5.
*/
