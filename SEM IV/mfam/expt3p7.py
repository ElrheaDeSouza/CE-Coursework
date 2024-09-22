#p7  Rank Determinant and inverse of a matrix
import numpy as np
x = np.array([[2,3],[1,2]])

matrix_rank = np.linalg.matrix_rank(x)
print("Rank of matrix x is ")
print(matrix_rank)

det = np.linalg.det(x)
print("Determinant of matrix x is ")
print(det)

inverse_matrix = np.linalg.inv(x)
print("Inverse of matrix is ")
print(inverse_matrix)
