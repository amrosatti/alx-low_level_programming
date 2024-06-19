#!/usr/bin/python3
"""Defines `island_perimeter()` function
"""


def island_perimeter(grid):
    """Computes the perimeter of the island described in `grid`

    Args:
        grid (:obj:list): A list of lists of integers,
                            with values 0 or 1.

    Returns:
        The perimeter of the island (if exists)
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # initially adding four
                perimeter += 4

                # decrease the value of each side contains land
                if (i - 1) >= 0 and grid[i-1][j] == 1:
                    perimeter -= 1

                if (j - 1) >= 0 and grid[i][j-1] == 1:
                    perimeter -= 1

                if (i + 1) < len(grid) and grid[i+1][j] == 1:
                    perimeter -= 1

                if (j + 1) < len(grid[0]) and grid[i][j+1] == 1:
                    perimeter -= 1

    return perimeter
