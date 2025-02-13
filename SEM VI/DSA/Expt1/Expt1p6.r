# R program to calculate the area of a circle, rectangle, and square

# Function to calculate the area of a circle
area_circle <- function(radius) {
  return(pi * radius^2)
}

# Function to calculate the area of a rectangle
area_rectangle <- function(length, width) {
  return(length * width)
}

# Function to calculate the area of a square
area_square <- function(side) {
  return(side^2)
}

# Main program
cat("Choose a shape to calculate the area:\n")
cat("1. Circle\n")
cat("2. Rectangle\n")
cat("3. Square\n")
choice <- as.integer(readline(prompt = "Enter your choice (1-3): "))

if (choice == 1) {
  radius <- as.numeric(readline(prompt = "Enter the radius of the circle: "))
  area <- area_circle(radius)
  print(paste("The area of the circle is:", area))
} else if (choice == 2) {
  length <- as.numeric(readline(prompt = "Enter the length of the rectangle: "))
  width <- as.numeric(readline(prompt = "Enter the width of the rectangle: "))
  area <- area_rectangle(length, width)
  print(paste("The area of the rectangle is:", area))
} else if (choice == 3) {
  side <- as.numeric(readline(prompt = "Enter the side length of the square: "))
  area <- area_square(side)
  print(paste("The area of the square is:", area))
} else {
  print("Invalid choice. Please select a valid option.")
}
