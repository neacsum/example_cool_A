#pragma once

///integer exponentiation function
template <typename T>
T ipow (T base, int exp)
{
  T result = 1;
  while (exp)
  {
    if (exp & 1)
      result *= base;
    exp >>= 1;
    base *= base;
  }
  return result;
}

inline
long long twopow (int exp)
{
  return (1LL << exp);
}