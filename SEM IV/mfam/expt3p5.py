#p5 Matrix operations
#add ,subtract and divide
import numpy as np
x = np.array([[1,2],[4,5]])
y = np.array([[7,8],[9,10]])
print("Element wise addition")
print(np.add(x,y))
print("Element wise subtraction")
print(np.subtract(x,y))
print("Element wise division")
print(np.divide(x,y))
print("Element wise multiplication")
print(x*y)
print("The product of 2 matrices")
print(np.dot(x,y))
z = np.array([[4,9],[16,25]])
print("Square root")
print(np.sqrt(z))
#SUM of all matrix elements in z
print("Sum of all the matrix elements in z")
print(np.sum(z))
print("The column wise summation of all matrices x y and z is")
print(np.sum(x,axis=0))
print(np.sum(y,axis=0))
print(np.sum(z,axis=0))
print("The row wise summation of all matrices x y z is")
print(np.sum(x,axis=1))
print(np.sum(y,axis=1))
print(np.sum(z,axis=1))
print("Transpose of matrix x ")
print(x.T)
#Arranging and reshapng arrays
A = np.arange(4)
print("A=",A)

B = np.arange(12).reshape(2,6)
print("B=",B)
