The pixels in the image are numbered 0..99 for the first row, 100..199 for the second row etc. White pixels represent ascii codes. The ascii code for a particular white pixel is equal to the offset from the last white pixel. For example, the first white pixel at location 65 would represent ascii code 65 ('A'), the next at location 131 would represent ascii code (131 - 65) = 66 ('B') and so on.

The text contained in the image is the answer encoded in Morse, where "a test" would be encoded as ".- / - . ... -"


You have 15 seconds time to send the solution.

<h1> Prequisites </h1>

>OPENCV2

>C++ Compiler
