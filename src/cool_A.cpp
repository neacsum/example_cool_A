/*
  This is part of an example showing how to manage multiple projects using
  symbolic links and CPM - A C/C++ Package Manager. For more details
  see: https://github.com/neacsum/cpm
*/

// cool_A.cpp : Defines the functions for the static library.
//

#include <cool_A/hdr1.h>
#include <cool_A/hdr2.h>

//include header of a dependent package
#include <module_A/A.h>

#include <ipow.h>

// This is an example of a library function
long long ackermann (int m, int n)
{
  if (m == 0)
    return n + 1;
  if (n == 0)
    return ackermann (m - 1, 1);
  
  return ackermann (m - 1, (int)ackermann (m, n - 1));
}

// Another example. Accelerates computations by using formulas from
// Wikipedia page: https://en.wikipedia.org/wiki/Ackermann_function#Table_of_values
// for small values of m
long long faster_ackermann (int m, int n)
{
  if (m == 0)
    return n + 1;

  if (m == 1)
    return n + 2;
  
  if (m == 2)
    return 2 * n + 3;
  
  if (m == 3)
    return twopow (n+3) - 3;

  return ackermann (m, n);
}
