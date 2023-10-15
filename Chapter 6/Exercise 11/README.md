# Exercise 11

Modify the four-function fraction calculator of Exercise 12 in Chapter 5 to use a `fraction` class rather than a structure. There should be member functions for input and output, as well as for the four arithmetical operations. While you’re at it, you might as well install the capability to reduce fractions to lowest terms. Here’s a member function that will reduce the `fraction` object of which it is a member to lowest terms. It finds the greatest common divisor (gcd) of the fraction’s numerator and denominator, and uses this gcd to divide both numbers.

```c++
void fraction::lowterms()          // change ourself to lowest terms
{
  long tnum, tden, temp, gcd;
  tnum = labs(num);        // use non-negative copies
  tden = labs(den);       // (needs cmath)
  if(tden==0 )           // check for n/0
    { cout << “Illegal fraction: division by 0”; exit(1); }
  else if( tnum==0 )      // check for 0/n
    { num=0; den = 1; return; }
  // this ‘while’ loop finds the gcd of tnum and tden
  while(tnum != 0)
  {
    if(tnum < tden)     // ensure numerator larger
      { temp=tnum; tnum=tden; tden=temp; }    // swap them
    tnum = tnum - tden;     // subtract them
  }
  gcd = tden;         // this is greatest common divisor
  num = num / gcd;   // divide both num and den by gcd
  den = den / gcd;   // to reduce frac to lowest terms
}
```

You can call this function at the end of each arithmetic function, or just before you perform output. You’ll also need the usual member functions: four arithmetic operations, input, and display. You may find a two-argument constructor useful.
