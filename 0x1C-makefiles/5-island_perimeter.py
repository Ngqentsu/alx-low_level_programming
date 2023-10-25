#!/usr/bin/python3
"""A function that determines the perimeter of an island."""


def island_perimeter(grid):
    """Calculates the perimiter of the island.

    Args:
        grid (list): A list of list of integers.
    """
    height = len(grid[0])
    width = len(grid)
    count = 0
    size = 0

    for i in range(width):
        for j in range(height):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    count += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    count += 1
    perimeter = (size * 4) - (count * 2)
    return perimeter
