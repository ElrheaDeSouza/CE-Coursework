<?php
function factorial($n)
{
if ($n == 0 || $n == 1)
{
return 1;
}
else
{
return $n * factorial($n - 1);
}
}

$num = 7;
$result = factorial($num);
echo "Factorial of $num is: " . $result;
?>