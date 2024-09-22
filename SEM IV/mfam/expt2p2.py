def equation(a,b,c,d):
  if a==c and b==d:
    print("Infinite Solutions")
  elif a==c:
    print("Wrong Equation: No Solution")
  else:
    X = (d-b)/(a-c)
    print("Solution is X = ",X)
a=int(input("enter the value of a: "))
b=int(input("enter the value of b: "))
c=int(input("enter the value of c: "))
d=int(input("enter the value of d: "))
equation(a,b,c,d)
