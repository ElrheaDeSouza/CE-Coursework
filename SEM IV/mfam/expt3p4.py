# p4 To access Columns of matrix
import numpy as np

A = np.array(([4, 7, 6, 2],
              [1, 8, 4, 5],
              [2, 1, 9, 3]))

print("A[:,0]= ", A[:, 0])  # First column
print("A[:,1]= ", A[:, 1])  # Second column
print("A[:,2]= ", A[:, 2])  # Third column
print("A[:,-1]= ", A[:, -1])  # Last column
