# Loops
  Loops allow us to execute a given block of code N times.

  In C++, we have three types of repetition structures, two of which are conditional loops (while and do    while), and we have a countable repetition loop (for).

## While
  The while loop needs a condition to start, it will be used to end the loop
  
As long as the condition is being met, the loop will continue to run
```cpp
while (condition)
{
// commands to be repeated
// commands to be repeated
}
// commands after 'while'
```

## Do While
  In the do while loop, the code block will be executed at least once, if the condition is met, it will repeat the loop N times until the condition is no longer true
 
```cpp
 do
{
// commands to be repeated
// commands to be repeated
} while (condition);
// commands after do-while
```

## For
  The for loop is a little different, in this loop, we have a sense of how long the loop will be          repeated.
 ```cpp
 for (start variable; operating condition; increment/decrement)
{
// commands to be repeated
// commands to be repeated
}
// commands after the 'for'
 ```
  - The start variable, will be where our loop will start
  - The operating condition, will be our condition for the loop to execute. Is normally used as (start variable <= stop value)
  - Increment/decrement, it will assign a value to the start variable, whenever the loop executes. Is normally used as (start variable++ (to increment) || start variable-- (to decrement))
  
  
