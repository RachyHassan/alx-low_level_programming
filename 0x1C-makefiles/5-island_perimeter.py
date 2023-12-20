#!/usr/bin/python3
""" A function that returns the perimeter of the island
described in grid. """


def island_perimeter(grid):
    """
    grid is a list of list of integers.
    0 represents a waterzone,
    1 represents a land zone.
    it returns the perimeter of the island, defined by grid.
    """
    height = len(grid)
    width = len(grid[0])
    perimeter = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter -= 2
                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter -= 2

    return perimeter
