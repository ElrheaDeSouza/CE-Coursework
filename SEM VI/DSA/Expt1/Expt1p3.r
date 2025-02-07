#3Basic Calculator
calc = function(x) {
  y = readline("Enter first number: ")
  z = readline("Enter second number: ")
  y = as.numeric(y)
  z = as.numeric(z)

  switch(x,
	"1" = {
  	cat("Input y =", y, "z =", z, "\n")
  	cat("Sum =", (y + z), "\n")
	},
	"2" = {
  	cat("Input y =", y, "z =", z, "\n")
  	cat("Diff =", (y - z), "\n")
	},
	"3" = {
  	cat("Input y =", y, "z =", z, "\n")
  	cat("mul =", (y * z), "\n")
	},
	"4" = {
  	cat("Input y =", y, "z =", z, "\n")
  	cat("Div =", (y / z), "\n")
	},
	"5" = {
  	cat("Input y =", y, "z =", z, "\n")
  	cat("Mod =", (y %% z), "\n")
	},
	stop("Invalid input")
  )
}
print("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Modulus")
n=readline("Enter your choice: ")
n= as.character(n)
calc(n)  
