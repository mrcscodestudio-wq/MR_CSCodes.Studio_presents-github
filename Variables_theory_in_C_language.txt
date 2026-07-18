What is a Variable?

A variable is a named location in your computer's memory that stores data.

Think of it like a labeled box:

Age Box
+------+
|  18  |
+------+

Here:

Variable name = age
Value = 18


### 1. `int`

• `int` is a fundamental data type used to store 
  whole numbers.
• It can represent both positive and negative integer 
  values.
• It does not store decimal or fractional values.
• It is one of the most commonly used data types in 
  C.

Explanation
• int age = 18;
    • Declares an integer variable named age.
    • The value 18 is assigned to the variable during 
      initialization.
• int year = 2025;
    • Declares an integer variable named year.
    • The value 2025 is assigned to the variable.
• int quantity = 3;
    • Declares an integer variable named quantity.
    • The value 3 is assigned to the variable.
• %d
    • %d is the format specifier used to print an int 
      value.
    • Each %d is replaced by the value of the 
      corresponding integer variable passed to 
      printf().
• Output
Your age is : 18
This year is : 2025
You took 3 items

---

### 2. `float`

• `float` is a data type used to store single-precision floating-point numbers.
• It can represent numbers with decimal points.
• It provides moderate precision for decimal values.
• It is suitable when less precision is acceptable than `double`.

Explanation
• float each_item_price = 249.99;
    • Declares a floating-point variable named 
      each_item_price.
    • The value 249.99 is assigned to the variable 
      during initialization.
• float gpa = 9.9;
    • Declares a floating-point variable named gpa.
    • The value 9.9 is assigned to the variable.
• float temperature = -4.71;
    • Declares a floating-point variable named 
      temperature.
    • The value -4.71 is assigned to the variable.
• printf("Each item price is : %f\n", 
  each_item_price);
    • printf() displays the text and the value of the 
      variable.
    • %f is the format specifier used to print a 
      float value.
• printf("Your gpa is : %f\n", gpa);
    • Prints the value stored in the gpa variable 
      using the %f format specifier.
• printf("Temperature is : %f°F\n", temperature);
    • Prints the value stored in the temperature        
      variable using the %f format specifier.
    • °F is printed as normal text to indicate the 
      temperature is in degrees Fahrenheit.
• Output
Each item price is : 249.990005
Your gpa is : 9.900000
Temperature is : -4.710000°F

• Note: By default, %f displays 6 digits after the 
  decimal point. That's why values like 249.99 may 
  appear as 249.990005 due to the way floating-point 
  numbers are represented in computer memory. If you 
  want to control the number of decimal places, you 
  can use a precision specifier such as %.2f.


---

### 3. `double`

• `double` is a data type used to store double-precision floating-point numbers.
• It can represent decimal values with greater precision and a larger range than `float`.
• It is preferred when calculations require higher accuracy.

Explanation
• double pi = 3.141592;
    • Declares a double-precision floating-point 
      variable named pi.
    • The value 3.141592 is assigned to the variable 
      during initialization.
• double e = 2.7568496;
    • Declares a double-precision floating-point 
      variable named e.
    • The value 2.7568496 is assigned to the variable 
      during initialization.
• printf("Value of pi is : %.3lf\n", pi);
    • printf() displays the text and the value of the 
      variable.
    • %lf is the format specifier used to print a 
      double value.
    • .3 specifies that the value should be displayed 
      with 3 digits after the decimal point.
• printf("Value of e is : %.5lf\n", e);
    • Prints the value stored in the e variable using 
      the %lf format specifier.
    • .5 specifies that the value should be displayed 
      with 5 digits after the decimal point.
• Output
Value of pi is : 3.142
Value of e is : 2.75685

• Note: In printf(), %f and %lf both print a double 
  value. However, many beginners use %lf to clearly 
  indicate that the variable is of type double, while 
  %f is commonly associated with float.

---

### 4. `bool`

* `bool` is a data type used to represent logical values.
* It has only two possible values: `true` and `false`.
* In C, `bool` is available by including the `<stdbool.h>` header file.
* It is commonly used in conditions and decision-making.

Explanation
• bool areOnline = true;
    • Declares a Boolean variable named areOnline.
    • The value true is assigned to the variable 
      during initialization.
    • A bool variable can store only two values: true 
      or false.
• printf("%d\n", areOnline);
    • %d is used to print the integer representation 
      of the Boolean value.
    • true is printed as 1 and false is printed as 0.
• if (areOnline)
    • The if statement checks whether the value of 
      areOnline is true.
    • If the condition is true, the code inside the 
      if block is executed.
• printf("You are online\n");
    • This statement is executed when areOnline is 
      true.
• else
    • The else block is executed if the if condition 
      evaluates to false.
• printf("You are offline\n");
    • This statement is executed when areOnline is 
      false.
• Output
1
You are online

• Note: In C, the bool data type is available after 
  including the <stdbool.h> header file. Internally, 
  true is represented as 1 and false is represented 
  as 0.

---

### 5. `char`

• `char` is a data type used to store a single character.
• It stores characters according to a character encoding, such as ASCII.
• It is also an integer type and can store small integer values.
• Character arrays are commonly used to represent strings in C.

Explanation
• char grade = 'A';
    • Declares a character variable named grade.
    • The character 'A' is assigned to the variable 
      during initialization.
    • A char variable stores a single character 
      enclosed in single quotation marks (' ').
• char symbol = '@';
    • Declares a character variable named symbol.
    • The character '@' is assigned to the variable.
• printf("We use %c just before gmail\n", symbol);
    • printf() displays the text and the value of the 
      variable.
    • %c is the format specifier used to print a char 
      value.
• printf("Your grade is %c\n", grade);
    • Prints the value stored in the grade variable 
      using the %c format specifier.
• Output
We use @ just before gmail
Your grade is A

• Note: In C, character values are enclosed in single 
  quotation marks (' '), while text (strings) is 
  enclosed in double quotation marks (" "). The %c 
  format specifier is used to print a single 
  character.


---

### 6. `Array`

• An array is a collection of elements of the same data type stored in contiguous memory locations.
• Every element in an array has the same data type.
• Each element is accessed using an index.
• The number of elements in an array is generally fixed when the array is created.
• Arrays provide an efficient way to store and manage multiple related values under a single name.

Explanation
• char GRADE[] = "A++";
    • Declares a character array named GRADE.
    • The string "A++" is assigned to the array.
• printf("Your grade is %s\n", GRADE);
    • printf() displays the text and the value of the 
      character array.
    • %s is the format specifier used to print a 
      string.
    • \n moves the cursor to the next line after 
      printing.
• Output
Your grade is A++

• Note: In C, a string is stored as a character 
  array. Strings are enclosed in double quotation 
  marks (" "), and the %s format specifier is used to 
  print them.

