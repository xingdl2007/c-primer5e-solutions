# Chapter 4 Expressions

**Exercise 4.1:** What is the value returned by `5 + 10 * 20/2`?

**Exercise 4.2:** Using Table 4.12 (p. 166), parenthesize the following expressions to indicate the order in which the operands are grouped:

```c++
(a) * vec.begin() (b) * vec.begin() + 1
```

**Exercise 4.3:** Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?

**Exercise 4.4:** Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression (without parentheses) and printing its result.

```c++
   12 / 3 * 4 + 5 * 15 + 24 % 4 / 2	
```

**Exercise 4.5:** Determine the result of the following expressions.

```c++
(a) -30*3+21/5 
(b) -30+3*21/5
(c) 30/3*21%5 
(d) -30/3*21%4
```

**Exercise 4.6:** Write an expression to determine whether an int value is even or odd.

**Exercise 4.7:** What does overflow mean? Show three expressions that will overflow.

**Exercise 4.8:** Explain when operands are evaluated in the logical AND, logical OR, andequality operators.


**Exercise 4.9:** Explain the behavior of the condition in the following if:

```c++
const char *cp = "Hello World";
if (cp && *cp)
```

**Exercise 4.10:** Write the condition for a while loop that would read ints from the standard input and stop when the value read is equal to 42.

**Exercise 4.11:** Write an expression that tests four values, a, b, c, and d, and ensuresthat a is greater than b, which is greater than c, which is greater than d.

**Exercise 4.12:** Assuming i, j, and k are all ints, explain what `i != j < k` means.

**Exercise 4.13:** What are the values of i and d after each assignment?

```c++
int i; double d;
(a) d=i=3.5; (b) i=d=3.5;
```

**Exercise 4.14:** Explain what happens in each of the if tests:

```c++
if(42=i) // ...
if(i=42) // ...
```

**Exercise 4.15:** The following assignment is illegal. Why? How would you correct it?

```c++
double dval; int ival; int *pi;
dval = ival = pi = 0;
```

**Exercise 4.16:** Although the following are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be.

```c++
(a) if (p = getPtr() != 0) (b) if (i = 1024)
```

**Exercise 4.17:** Explain the difference between prefix and postfix increment.

**Exercise 4.18:** What would happen if the while loop on page 148 that prints the elements from a vector used the prefix increment operator?

**Exercise 4.19:** Given that ptr points to an int, that vec is a vector<int>, and thatival is an int, explain the behavior of each of these expressions. Which, if any, arelikely to be incorrect? Why? How might each be corrected?

```c++
(a) ptr != 0 && *ptr++ (b) ival++ && ival (c) vec[ival++] <= vec[ival]
```

**Exercise 4.20:** Assuming that iter is a vector<string>::iterator, indicate which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren’t legal are in error.

```c++
(a) *iter++; (b) (*iter)++; (c) *iter.empty() 
(d) iter->empty(); (e) ++*iter; (f) iter++->empty();
```

**Exercise 4.21:** Write a program to use a conditional operator to find the elements in avector<int> that have odd value and double the value of each such element.

**Exercise 4.22:** Extend the program that assigned high pass, pass, and fail grades toalso assign low pass for grades between 60 and 75 inclusive. Write two versions: One version that uses only conditional operators; the other should use one or more if statements. Which version do you think is easier to understand and why?

**Exercise 4.23:** The following expression fails to compile due to operator precedence.Using Table 4.12 (p. 166), explain why it fails. How would you fix it?

```c++
string s = "word";
string pl = s + s[s.size() - 1] == ’s’ ? "" : "s" ;
```

**Exercise 4.24:** Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative.

**Exercise 4.25:** What is the value of ~’q’ << 6 on a machine with 32-bit ints and 8 bitchars, that uses Latin-1 character set in which ’q’ has the bit pattern 01110001?

**Exercise 4.26:** In our grading example in this section, what would happen if we usedunsigned int as the type for quiz1?

**Exercise 4.27:** What is the result of each of these expressions?

```c++
unsigned long ul1 = 3, ul2 = 7;
(a) ul1 & ul2 
(b) ul1 | ul2 
(c) ul1 && ul2 
(d) ul1 || ul2
```

**Exercise 4.28:** Write a program to print the size of each of the built-in types.

**Exercise 4.29:** Predict the output of the following code and explain your reasoning. Now run the program. Is the output what you expected? If not, figure out why.

```c++
int x[10];   int *p = x;
cout << sizeof(x)/sizeof(*x) << endl; 
cout << sizeof(p)/sizeof(*p) << endl;
```

**Exercise 4.30:** Using Table 4.12 (p. 166), parenthesize the following expressions to match the default evaluation:

```c++
(a) sizeof x + y 
(b) sizeof p->mem[i] 
(c) sizeof a < b 
(d) sizeof f()
```

**Exercise 4.31:** The program in this section used the prefix increment and decrementoperators. Explain why we used prefix and not postfix. What changes would have tobe made to use the postfix versions? Rewrite the program using postfix operators.

**Exercise 4.32:** Explain the following loop.

```c++
constexpr int size = 5;
   int ia[size] = {1,2,3,4,5};
   for (int *ptr = ia, ix = 0;
		ix != size && ptr != ia+size; 
        ++ix,++ptr) {/* ... */}
```

**Exercise 4.33:** Using Table 4.12 (p. 166) explain what the following expression does:

```c++
someValue ? ++x, ++y : --x, --y
```


**Exercise 4.34:** Given the variable definitions in this section, explain what conversions take place in the following expressions: Remember that you may need to consider the associativity of the operators.

```c++
(a) if (fval) (b) dval = fval + ival; (c) dval + ival * cval;
```

**Exercise 4.35:** Given the following definitions, 

```c++
char cval; int ival; unsigned int ui; float fval;    double dval;
```

identify the implicit type conversions, if any, taking place:

```c++
(a) cval=’a’+3; 		(b) fval=ui-ival*1.0;
(c) dval = ui * fval; 	(d) cval = ival + fval + dval;
```

**Exercise 4.36:** Assuming i is an int and d is a double write the expression i *= d so that it does integral, rather than floating-point, multiplication.

**Exercise 4.37:** Rewrite each of the following old-style casts to use a named cast:

```c++
int i; double d; const string *ps; char *pc; void *pv; 
(a) pv = (void*)ps; (b) i = int(*pc);
(c) pv = &d; 		(d) pc = (char*) pv;
```

**Exercise 4.38:** Explain the following expression:

```c++
double slope = static_cast<double>(j/i);
```

### Notes