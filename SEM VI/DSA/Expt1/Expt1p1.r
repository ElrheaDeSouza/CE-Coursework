#1 To check if the entered number is a multiple of 3
n = readline("Enter a number:")
n = as.numeric(n)  
#n=5
if (n %% 3 == 0) {  
  print("Multiple of 3")
} else {
  print("Not a multiple of 3")
}
