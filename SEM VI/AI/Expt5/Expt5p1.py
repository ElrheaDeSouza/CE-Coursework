#Water Jug Problem (2 Jugs)
a = int(input("Enter the capacity of jug A: "))
b = int(input("Enter the capacity of Jug B: "))
ai = int(input("enter the initial water in Jug A: ")) #going to change everytime
bi = int(input("Enter the initial water in Jug B: "))
bf = int(input("Enter the final capacity of Jug B: "))
af = int(input("Enter the final capacity of Jug A: "))

print("List of operations you can perform are: ")
print("Op1: Fill the Jug A completely")
print("Op2: Fill the Jug B completely")
print("Op3: Empty the Jug A completely")
print("Op4: Empty the Jug B completely")
print("Op5: Pour water forom Jug A to B until it is full ")
print("Op6: Pour water forom Jug B to A until it is full ")
print("Op7: Pour all the water from Jug A to B ")
print("Op8: Pour all the water from Jug B to A ")

while(  ai != af or bi != bf):
    op = int(input("Enter the operation number: "))
    if op == 1:
        ai = a
    elif op == 2:
        bi = b
    elif op == 3:
        ai = 0
    elif op == 4:
        bi = 0
    elif op == 5:
        if (b - bi > ai):
            bi = bi + ai
            ai = 0
        else:
            ai = ai - (b-bi)
            bi = b
    elif op == 6:
        if (a - ai > bi):
            ai = ai + bi
            bi = 0
        else:
            bi =  bi - (a - ai)
            ai = a
    elif op == 7:
        bi = ai + bi
        ai = 0
    elif op == 8:
        ai = ai + bi
        bi = 0
    print(ai, "\t", bi)