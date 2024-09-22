# p2 To access matrix elements
import numpy as np

# Accessing matrix element
A = np.array([1, 2, 3, 4, 5])
print("A[0]= ", A[0])  # First element
print("A[1]= ", A[2])  # Third element
print("A[-1]= ", A[-1])  # Last  element
A = np.array(([4, 7, 6, 2],
              [1, 8, 4, 5],
              [2, 1, 9, 3]))

print("A[0][0]= ", A[0][0])  # First row First element
print("A[1][2]= ", A[1][2])  # Second row Third element
print("A[-1][-1]= ", A[-1][-1])  # Third row third element
