x = 8 # setting the variable x to an integer 8
print(type(x)) # type() is a function that tells the type of the variable passed, in this case prints class "int"
x = "variable" # setting the variable x to a string variable
print(type(x)) # prints class "str"
if x == True:
    x = x + 2 # This won't run since x is not a bool, therefore it won't error when adding an int to a str
print(type(x)) # still prints class "str"