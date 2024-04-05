# Geometric-shapes
It's geometric shapes week at kindergarten. Today, the children learned how to draw squares, rectangles, and circles. Of course, a competition arises: who can draw the biggest geometric shape? The kindergarten teacher is the referee and needs to determine the winner. Can you help her?
Requirement
Establish the hierarchy of geometric shapes, ordering them by area from largest to smallest.

Input data
The following data will be read from the keyboard (stdin stream):
- An integer value N representing the number of geometric shapes entered into the competition, followed by the newline character (Enter key);
- N lines, each line containing the name of the geometric shape ("square", "rectangle", "circle") and information about it (the length of the side for squares, the lengths of the sides for rectangles, the radius of the circle for circles), in the following format:
    square <L>
    circle <R>
    rectangle <L1> <L2>
The entities that make up the lines are separated by a space, as in the example given at the end. Each of the N lines representing results is followed by the newline character (Enter key).

Output data
The program will display on the screen (the standard output stream) information about the shapes, in the same format in which the input data were introduced and ordered by area, from the largest to the smallest.
Example
Input

6

square 2.10

rectangle 1.20 7.90

circle 3.11

square 4.40

rectangle 9.10 0.40

square 1.50


Output

circle 3.11

square 4.40

rectangle 1.20 7.90

square 2.10

rectangle 9.10 0.40

square 1.50
