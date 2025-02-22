<?php 
   
   $a = 3;
   echo "Datatype of a is ";
   echo gettype($a) . "<br>";
   
   $b = 3.2;
   echo "Datatype of b is ";
   echo gettype($b) . "<br>";
   
   $c = "Hello";
   echo "Datatype of c is ";
   echo gettype($c) . "<br>";
   
   $d = array();
   echo "Datatype of d is ";
   echo gettype($d) . "<br>";
   
   $e = array("red", "green", "blue");
   echo "Datatype of e is ";
   echo gettype($e) . "<br>";
   
   $f = NULL;
   echo "Datatype of f is ";
   echo gettype($f) . "<br>";
   
   $g = false;
   echo "Datatype of g is ";
   echo gettype($g) . "<br>";

   echo "<br><br>";
   echo "the value of h is ";
   $h = [23, 45, 67, 78];
   foreach($h as $i){
       echo"<br>".$i;
   }
   echo "<br> and the datatype of h is ".gettype($h);
?>
