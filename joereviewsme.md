Joe Reviews my Code
-------------------
Running each test case ran successfully on my machine, it was a good idea to test each function in funcs.cpp 
independently because it encourages accurate return values. After reviewing if the tests return accurate values, 
I searched for any of the techniques that my previous partner and I talked about in producing efficient test checks. 
One suggestion to make the test cases of the unindent/ indent methods more efficient would be to pass test files 
as addresses to the “bad-code” file(s) in the indent and unindent checks. This will make testing easier as you
won’t have to go line by line and write the formatted code by hand. I also agree with the points we talked about 
in class regarding writing for scaling. You brought up a good point that directly editing a file when testing is 
better than printing the correct style in the terminal. This will be more efficient if the test case of this styling
program was used for bigger projects and larger code snippets as the user won’t have to copy and paste the formated
code to another file. As for the code itself, we both used similar algorithms to parse and style the file. I recommend 
making a helper function for the ifstreams input as it would be safe to test if the ifstream input fails in each ifstream 
occurrence.
