#To chek if the numbers entered in the vector are even or odd
vec = c()
n = readline("Enter number of elements: ")
n = as.integer(n)

for (i in 1:n) {
  t = readline("Enter the value: ")
  t = as.numeric(t)
  vec = append(vec, t)
  
  if (t %% 2 == 0) {
    cat(t, "is even\n")
  } else {
    cat(t, "is odd\n")
  }
}