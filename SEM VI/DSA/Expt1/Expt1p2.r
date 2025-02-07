# R program to find the minimum of three numbers
find_minimum <- function(a, b, c) {
  return(min(a, b, c))
}

# Main program
num1 <- as.numeric(readline(prompt = "Enter the first number: "))
num2 <- as.numeric(readline(prompt = "Enter the second number: "))
num3 <- as.numeric(readline(prompt = "Enter the third number: "))

minimum_value <- find_minimum(num1, num2, num3)
print(paste("The minimum value is:", minimum_value))
