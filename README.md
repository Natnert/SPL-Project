# Structure of Programming Languages Project

# Dynamic Typing vs Static Typing(Python vs C++)
Python is a dynamically typed language, meaning the type of the variable does not have to be declared when assigning a value to it. The type is decided at runtime of the program and can be changed throughout its lifecycle, which unfortunately means the code could result in an error if its run but the developer won’t know that unless that specific line is run. 

Example Python Code:

  ![image](https://user-images.githubusercontent.com/20974299/145721504-f0fb4928-1c99-498e-83fc-ffc382b1b35b.png)

Output:

 ![image](https://user-images.githubusercontent.com/20974299/145721507-70b20704-6633-4baf-b714-09ad23711c3a.png)

 

C++ is a statically typed language, which requires types to be defined and declared before the program is compiled, and once compiled they are unable to be changed. The first example below show an if statement that is not satisfied, yet the statement must be compliable before the program is executed. The second example shows a variable declared as an integer attempting to be reassigned a type and failing to compile.	
Example 1:  If Statement

 ![image](https://user-images.githubusercontent.com/20974299/145727811-fbb3e372-94d5-4510-ad50-c92cf9dead8b.png)

Example 2: Reassigning Variable Type

 ![image](https://user-images.githubusercontent.com/20974299/145721518-f53d7703-937b-4f20-8857-c6666cc04ce2.png)

 
# Compiled vs. Interpreted(Python vs. C++)

Python is an interpreted language, while C++ is a compiled language. Therefore Python needs no entry point and is simply executed. C++ must be compiled and have an entry point. 
Python Interpreted Example: Note no entry point

![image](https://user-images.githubusercontent.com/20974299/145728667-a22cd18b-508e-4755-b131-1e01d552e892.png)

C++ Compiled Example:

![image](https://user-images.githubusercontent.com/20974299/145728678-30e71249-4644-4c94-90bb-1e46df90896a.png)

