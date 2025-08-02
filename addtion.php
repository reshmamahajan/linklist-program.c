<?php

// Two numbers
$num1 = 20;
$num2 = 10;

// Arithmetic operations
$sum = $num1 + $num2;
$difference = $num1 - $num2;
$product = $num1 * $num2;
$quotient = $num2 != 0 ? $num1 / $num2 : "Cannot divide by zero";

// Display results
echo "Number 1: $num1\n";
echo "Number 2: $num2\n";
echo "Addition: $sum\n";
echo "Subtraction: $difference\n";
echo "Multiplication: $product\n";
echo "Division: $quotient\n";

?>
