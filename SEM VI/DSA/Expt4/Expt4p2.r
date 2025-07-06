movies <- data.frame(
  movie_name <- c("Invincibles", "Phir Hera Pheri", "The dictator", "MS. Dhoni" ),
  movie_language <-c("English", "Hindi", "English", "Hindi"),
  movie_rating <-c(7.8, 9.2, 8.2, 6.9),
  no_of_viewers <-c(2000, 1500, 3400, 2100)
)

write.table(movies, "movie_info.txt", sep="\t\t\t\t\t\t", row.names=TRUE, quote=FALSE)
