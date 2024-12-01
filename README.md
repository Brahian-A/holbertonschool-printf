<H1>Customized printf</H1>
<h2>Project Description:</h2>The project consists of creating a function similar to printf.
<hr>
<h3>Structures Creation</h3>
<ul>
<li>printing_char</li>
Handles printing a single character.
<li>printing_string</li>
Handles printing a string of characters.
<li>printing_percent</li>
Handles printing the percent sign (%).
<li>printing_integers</li>
Handles printing integer numbers, both positive and negative.
<li>printing_unsigned</li>
Handles printing unsigned integers (positive whole numbers).
</ul>
<hr>
<h3><strong><li>printing_char</li></strong></h3>
The function takes a parameter of type <strong>(va_list args)</strong> and returns a value of type <strong>(int)</strong>.
We declare the variable <strong>char c</strong> to store 1 character.<br>
In <strong>c = va_arg(args, int)</strong>, it retrieves the argument from the list and assumes it is of type <strong>int.</strong>
<hr>
<h3><strong><li>printing_string</li></strong></h3>
The function prints a string character by character and then returns the number of characters written.
<h4>How does it work?</h4>
It takes an argument of type string <strong>(pointer to char*)</strong>, prints it character by character using <strong>write</strong>, and returns the number of characters printed.<br>
Additionally, if the string is NULL, it prints <strong>"(null)"</strong> instead of failing.<br>
With the keyword <strong>return</strong>, it brings back the stored value of the number of characters.
<hr>
<h3><strong><li>printing_percent</li></strong></h3>
The function uses <strong>(va_list args)</strong>, takes an argument, and returns a value of type <strong>int</strong>.
In the line <strong>(void)args</strong>, this indicates that the parameter exists but will not be used for anything.
<hr>
<h3><strong><li>printing_int</li></strong></h3>
The function takes a parameter of type <strong>(va_list args)</strong>, from which an integer of type <strong>int</strong> is extracted and printed.
<h4>How does it work?</h4>
It receives the integer number from an argument list <strong>(va_list args)</strong> and processes it based on its value.
<ul>
    <li>If the number is 0, it prints the character directly and returns 0.</li>
    <li>If the negative integer is the lowest possible value, it compares it with the input and, if it matches, returns it as a string and prints (-2147483648).</li>
    <li>If the number is positive, it decomposes it into digits.</li>
    <li>It calculates the digits by breaking them down and stores them in a temporary array.</li>
    <li>Finally, it traverses the number, prints it, and returns the total number of characters printed.</li>
</ul>
<hr>
<h2>To sum up</h2>
<ul>
    <li><strong>printing_char:</strong> Prints a single character passed via `va_list` and returns the number of characters printed.</li>
    <li><strong>printing_string:</strong> Prints a string character by character, handling `NULL` strings by printing "(null)" and returning the number of characters printed.</li>
    <li><strong>printing_percent:</strong> Prints a `%` symbol, ignores the argument, and returns `1` for the character printed.</li>
    <li><strong>printing_int:</strong> Processes and prints an integer, handling special cases for `0` and the minimum integer value. It decomposes positive integers into digits for printing and returns the total number of characters.</li>
    </ul>
    <hr>
<div style="line-height: .3;">
    <h3>Authors:</h3> <h4>Brahian Amaral & Pablo Perez</h4>
</div>
