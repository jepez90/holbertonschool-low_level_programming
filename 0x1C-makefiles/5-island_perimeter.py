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
    for row_index, row in enumerate(grid):
        for cell_index, cell in enumerate(row):
            if cell == 1:
                perimeter += (1 - grid[row_index - 1][cell_index])# north
                perimeter += (1 - grid[row_index][cell_index + 1])# east
                perimeter += (1 - grid[row_index + 1][cell_index])# south
                perimeter += (1 - grid[row_index][cell_index - 1])# west
    return perimeter
