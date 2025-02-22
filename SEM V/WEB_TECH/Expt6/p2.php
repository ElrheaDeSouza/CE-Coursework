<?php
// Numeric Array
$numericArray = array(45, 76, 28, 40, 11);
echo "Numeric Array: <br>";

foreach ($numericArray as $value)
{

echo $value . "<br>";
}

echo "<br>";

// Associative Array
$associativeArray = array(
"Name" => "John",
"Age" => 45,
"State" => "Mumbai",
"Occupation" => "Artist"
);

echo "Associative Array: <br>";

foreach ($associativeArray as $key => $value)
{
echo $key . " - " . $value . "<br>";
}
?>