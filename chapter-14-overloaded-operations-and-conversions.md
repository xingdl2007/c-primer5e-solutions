# Chapter 14 Overloaded Operations and Conversions

**Exercise 14.1:** In what ways does an overloaded operator differ from a built-in opera-tor? In what ways are overloaded operators the same as the built-in operators?

**Exercise 14.2:** Write declarations for the overloaded input, output, addition, andcompound-assignment operators for Sales_data.

**Exercise 14.3:** Both string and vector define an overloaded == that can be used tocompare objects of those types. Assuming svec1 and svec2 are vectors that holdstrings, identify which version of == is applied in each of the following expressions:

```c++
(a) "cobble" == "stone" (b) svec1[0] == svec2[0] 
(c) svec1 == svec2 (d) "svec1[0] == "stone"
```

**Exercise 14.4:** Explain how to decide whether the following should be class members:

```c++
(a)% (b)%= (c)++ (d)-> (e)<< (f)&& (g)== (h)()
```

**Exercise 14.5:** In exercise 7.40 from § 7.5.1 (p. 291) you wrote a sketch of one of the following classes. Decide what, if any, overloaded operators your class should provide.

```c++
(a) Book (b) Date (c) Employee (d) Vehicle (e) Object (f) Tree
```

**Exercise 14.6:** Define an output operator for your Sales_data class.

**Exercise 14.7:** Define an output operator for you String class you wrote for the exercises in § 13.5 (p. 531).

**Exercise 14.8:** Define an output operator for the class you chose in exercise 7.40 from§ 7.5.1 (p. 291).

**Exercise 14.9:** Define an input operator for your Sales_data class.

**Exercise 14.10:** Describe the behavior of the Sales_data input operator if given the following input:

```c++
(a) 0-201-99999-9 10 24.95 (b) 10 24.95 0-210-99999-9
```

**Exercise 14.11:** What, if anything, is wrong with the following Sales_data input operator? What would happen if we gave this operator the data in the previous exercise?

```c++
istream& operator>>(istream& in, Sales_data& s) {
	double price;
	in >> s.bookNo >> s.units_sold >> price; 
  	s.revenue = s.units_sold * price; return in;
}
```

**Exercise 14.12:** Define an input operator for the class you used in exercise 7.40 from § 7.5.1 (p. 291). Be sure the operator handles input errors.

**Exercise 14.13:** Which other arithmetic operators (Table 4.1 (p. 139)), if any, do youthink Sales_data ought to support? Define any you think the class should include.

**Exercise 14.14:** Why do you think it is more efficient to define operator+ to calloperator+= rather than the other way around?

**Exercise 14.15:** Should the class you chose for exercise 7.40 from § 7.5.1 (p. 291) defineany of the arithmetic operators? If so, implement them. If not, explain why not.

**Exercise 14.16:** Define equality and inequality operators for your StrBlob (§ 12.1.1,p. 456), StrBlobPtr (§ 12.1.6, p. 474), StrVec (§ 13.5, p. 526), and String (§ 13.5,p. 531) classes.

**Exercise 14.17:** Should the class you chose for exercise 7.40 from § 7.5.1 (p. 291) definethe equality operators? If so, implement them. If not, explain why not.

**Exercise 14.18:** Define relational operators for your StrBlob, StrBlobPtr, StrVec,and String classes.

**Exercise 14.19:** Should the class you chose for exercise 7.40 from § 7.5.1 (p. 291) definethe relational operators? If so, implement them. If not, explain why not.

**Exercise 14.20:** Define the addition and compound-assignment operators for yourSales_data class.

**Exercise 14.21:** Write the Sales_data operators so that + does the actual additionand += calls +. Discuss the disadvantages of this approach compared to the way theseoperators were defined in § 14.3 (p. 560) and § 14.4 (p. 564).

**Exercise 14.22:** Define a version of the assignment operator that can assign a stringrepresenting an ISBN to a Sales_data.

**Exercise 14.23:** Define an initializer_list assignment operator for your versionof the StrVec class.

**Exercise 14.24:** Decide whether the class you used in exercise 7.40 from § 7.5.1 (p. 291)needs a copy- and move-assignment operator. If so, define those operators.

**Exercise 14.25:** Implement any other assignment operators your class should define.Explain which types should be used as operands and why.

**Exercise 14.26:** Define subscript operators for your StrVec, String, StrBlob, and StrBlobPtr classes.

**Exercise 14.27:** Add increment and decrement operators to your StrBlobPtr class.

**Exercise 14.28:** Define addition and subtraction for StrBlobPtr so that these operators implement pointer arithmetic (§ 3.5.3, p. 119).

**Exercise 14.29:** We did not define a const version of the increment and decrement operators. Why not?

**Exercise 14.30:** Add dereference and arrow operators to your StrBlobPtr class andto the ConstStrBlobPtr class that you defined in exercise 12.22 from § 12.1.6 (p. 476).Note that the operators in constStrBlobPtr must return const references becausethe data member in constStrBlobPtr points to a const vector.

**Exercise 14.31:** Our StrBlobPtr class does not define the copy constructor, assign-ment operator, or a destructor. Why is that okay?

**Exercise 14.32:** Define a class that holds a pointer to a StrBlobPtr. Define the over-loaded arrow operator for that class.

**Exercise 14.33:** How many operands may an overloaded function-call operator take?

**Exercise 14.34:** Define a function-object class to perform an if-then-else operation: Thecall operator for this class should take three parameters. It should test its first parame-ter and if that test succeeds, it should return its second parameter; otherwise, it shouldreturn its third parameter.

**Exercise 14.35:** Write a class like PrintString that reads a line of input from anistream and returns a string representing what was read. If the read fails, returnthe empty string.

**Exercise 14.36:** Use the class from the previous exercise to read the standard input,storing each line as an element in a vector.

**Exercise 14.37:** Write a class that tests whether two values are equal. Use that objectand the library algorithms to write a program to replace all instances of a given valuein a sequence.

**Exercise 14.38:** Write a class that tests whether the length of a given string matchesa given bound. Use that object to write a program to report how many words in aninput file are of sizes 1 through 10 inclusive.

**Exercise 14.39:** Revise the previous program to report the count of words that are sizes1 through 9 and 10 or more.

**Exercise 14.40:** Rewrite the biggies function from § 10.3.2 (p. 391) to use function-object classes in place of lambdas.

**Exercise 14.41:** Why do you suppose the new standard added lambdas? Explainwhen you would use a lambda and when you would write a class instead.

**Exercise 14.42:** Using library function objects and adaptors, define an expression to

```c++
(a) Count the number of values that are greater than 1024 
(b) Find the first string that is not equal to pooh
(c) Multiply all values by 2
```

**Exercise 14.43:** Using library function objects, determine whether a given int value is divisible by any element in a container of ints.

**Exercise 14.44:** Write your own version of a simple desk calculator that can handle binary operations.


**Exercise 14.45:** Write conversion operators to convert a Sales_data to string andto double. What values do you think these operators should return?

**Exercise 14.46:** Explain whether defining these Sales_data conversion operators isa good idea and whether they should be explicit.

**Exercise 14.47:** Explain the difference between these two conversion operators:

```c++
struct Integral {
       operator const int();
       operator int() const;
};		
```

**Exercise 14.48:** Determine whether the class you used in exercise 7.40 from § 7.5.1(p. 291) should have a conversion to bool. If so, explain why, and explain whether theoperator should be explicit. If not, explain why not.

**Exercise 14.49:** Regardless of whether it is a good idea to do so, define a conversionto bool for the class from the previous exercise.

**Exercise 14.50:** Show the possible class-type conversion sequences for the initializations of ex1 and ex2. Explain whether the initializations are legal or not.

```c++
struct LongDouble { 
	LongDouble(double = 0.0); 
	operator double(); 
	operator float();
};
LongDouble ldObj;
int ex1 = ldObj;
float ex2 = ldObj;
```

**Exercise 14.51:** Show the conversion sequences (if any) needed to call each version of calc and explain why the best viable function is selected.

```c++
void calc(int);
void calc(LongDouble); 
double dval; 
calc(dval);// whichcalc?				
```

**Exercise 14.52:** Which `operator+`, if any, is selected for each of the addition expressions? List the candidate functions, the viable functions, and the type conversions on the arguments for each viable function:

```c++
struct LongDouble {
	// memberoperator+forillustrationpurposes;+isusuallyanonmember 
  	LongDouble operator+(const SmallInt&);
	// other members as in § 14.9.2 (p. 587)
};
LongDouble operator+(LongDouble&, double); SmallInt si;
LongDouble ld;
ld = si + ld;
ld = ld + si;
```

**Exercise 14.53:** Given the definition of SmallInt on page 588, determine whether the following addition expression is legal. If so, what addition operator is used? If not, how might you change the code to make it legal?

```c++
SmallInt s1;
double d = s1 + 3.14;
```

### Notes