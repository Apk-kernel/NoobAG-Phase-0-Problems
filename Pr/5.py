def maximum_function(a, b):
    if(a>b):
        return a
    else:
        return b
a = float(input("Enter first number : "))
b = float(input("Enter second number : "))
print("Maximum number  = ", maximum_function(a,b))
