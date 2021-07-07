#!/usr/bin/python3
"""this module defines an function to calculate a perimeter in a grid"""


def island_perimeter(grid):
    """This function returns the perimeter of the island described in grid

    args:
        Grid([[int]]): is a list of list of integers where:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    """
    perimeter = 0
    width = len(grid[0])
    height = len(grid)

    for row in range(height):
        for cell in range(width):
            if grid[row][cell] == 1:
                if row == 0 or grid[row - 1][cell] == 0:  # north
                    perimeter += 1
                if cell + 1 == width or grid[row][cell + 1] == 0:  # east
                    perimeter += 1
                if row + 1 == height or grid[row + 1][cell] == 0:  # south
                    perimeter += 1
                if cell == 0 or grid[row][cell - 1] == 0:  # west
                    perimeter += 1
    return perimeter
