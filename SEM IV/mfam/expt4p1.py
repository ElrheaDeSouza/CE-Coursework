#p1 Diagonal elements, determinant, eigenvalues, eigenvectors, #trace
import numpy as np
x = np.array([[1,-1,3],[1,1,6],[3,8,9]])

diagonal = x.diagonal()
print("Diagonal elements of matrix x are")
print(diagonal)

det = np.linalg.det(x)
print("Determinant of matrix x is ")
print(det)
eigenvalues,eigenvectors = np.linalg.eig(x)
print("The eigenvalues of matrix is")
print(eigenvalues)
print("The eigenvectors of matrix is")
print(eigenvectors)
trace = np.trace(x)
print("Trace of matrix x is ")
print(trace)
