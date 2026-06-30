# Sphere Geometry Calculator 🔴

This is a quick C++ command-line tool I built to calculate the surface area and volume of a sphere. 

It is a great practice project for using math libraries in C++ and, more importantly, handling user input safely. It asks for a radius, actively checks to make sure you actually entered a valid positive number (no crashing if someone types a letter!), and then lets you choose what you want to calculate from a simple menu.

# What it does
* Input Sanitization: Uses a `while` loop to catch invalid inputs (like letters or negative numbers) and asks the user to try again instead of breaking the program.
* Math Formulas: Implements the `<cmath>` library to pull in the exact value of Pi (`M_PI`) and calculate exponents.
* Interactive Menu: Uses a `switch` statement to let you calculate just the area, just the volume, or both at the same time.
* Clean Output: Uses the `<iomanip>` library to cleanly format the final answers to exactly two decimal places.

# How to run it locally
If you want to test it out on your own machine, clone the repository and compile the C++ file. 

Using g++ in your terminal (assuming you named the file `sphere.cpp`):
```bash
g++ sphere.cpp -o sphere
./sphere
