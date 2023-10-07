# Exercise 8

Write a program that repeatedly asks the user to enter two money amounts expressed in old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in Chapter 2, “C++ Programming Basics.”) The program should then add the two amounts and display the answer, again in pounds, shillings, and pence. Use a `do` loop that asks the user whether the program should be terminated. Typical interaction might be

	Enter first amount: £5.10.6
	Enter second amount: £3.2.6
	Total is £8.13.0
	Do you wish to continue (y/n)?

To add the two amounts, you’ll need to carry 1 shilling when the pence value is greater than 11, and carry 1 pound when there are more than 19 shillings.