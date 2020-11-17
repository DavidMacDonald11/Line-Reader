# README
By default, the make file will compile the program to *bin/lineReader*.
You may need to make modifications to the Makefile for your OS (I'm working on Manjaro Linux).

I wrote this program to create a decently efficient way to read a single line of a file.
It's easier than doing it manually in bash everytime, and hypothetically more efficient.
I hope this can be useful to you in some way!
See the *LICENSE* file for details.

You can move the generated *lineReader* file to wherever you need it.
Then, run *./lineReader fileName line*.
This will then print out that line of the file.

## Things To Note
If you read a line that doesn't exist, it will output nothing.

## Future Plans
- Adding the ability to read multiple lines at once.
