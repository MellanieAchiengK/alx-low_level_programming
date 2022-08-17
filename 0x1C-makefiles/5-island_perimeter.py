#!/usr/bin/python3
"""
island perimeter
"""


def island_perimeter(grid):
    """ returns perimeter of grid """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for c in range(height):
        for h in range(width):
            if grid[c][h] == 0:
                if (h > 0 and grid[c][h - 1] == 1):
                    perimeter += 1
                if (c > 0 and grid[c - 1][h] == 1):
                    perimeter += 1
                if (h < width - 1 and grid[c][h + 1] == 1):
                    perimeter += 1
                if (c < height - 1 and grid[c + 1][h] == 1):
                    perimeter += 1
    return perimeter
