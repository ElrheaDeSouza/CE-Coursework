data <- data.frame(
Rollno = c(1, 2, 3, 4, 5),
Sname = c("Jack", "Jacob", "Joan", "Jasmine", "Justin"),
dept = c("Computer Engineering", "IT", "Computer Engineering", "IT", "Computer Engineering"),
Sem = c(3, 5, 5, 4, 3),
Subject1_IT_marks = c(78, 90, 85, 82, 88),
Subject2_IT_marks = c(77, 75, 80, 85, 79),
Subject3_IT_marks = c(88, 91, 79, 83, 82),
Subject1_Semester_Theory_marks = c(80, 85, 77,75, 79),
Subject2_Semester_Theory_marks = c(70, 75, 73, 76, 80),
Subject3_Semester_Theory_marks = c(80, 90, 83,85, 86),
Attendance = c(90, 85, 92, 88, 91),
Grade = c("A", "B", "A", "B", "A")
)
print(data[1:3, ])