import math

def area_triangle():
    base = float(input("Enter base : "))
    height = float(input("Enter height : "))
    area = ((1/2) * (base) * (height))
    print(area)
    
def area_circle():
    radius = float(input("Enter radius : "))
    area = math.pi * pow(radius,2)
    print(area)

print("Area Calculator")
print("1. Triangle")
print("2. Circle")
n = int(input("Enter choice (1/2) : "))
if n==1:
    area_triangle()
elif n==2:
    area_circle()
else:
    print("Invalid choice")
    