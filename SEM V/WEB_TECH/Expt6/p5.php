<?php
// Variable Function
function greet()
{
echo "Hello<br>";
}

$varFunction = 'greet';
$varFunction();

// Callback Function
function f1()
{
echo "<br> f1() function executing";
}

function f2()
{
echo "<br>f2() function executing ";
}

function compute($a, $b)
{
echo "<br>compute() function executing ";
$a();
$b();
}

compute("f1", "f2");
?>