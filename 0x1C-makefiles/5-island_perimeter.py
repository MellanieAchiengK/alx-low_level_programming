#!/usr/bin/python3
""" island perimeter
"""


def island_perimeter(grid):
    """ returns the perimeter of land

    Args:
        grid ([list of list]): map of the island
    """
    perimeter = 0
    if not grid:
        return perimeter
    if not grid[0]:
        return perimeter
    num_col = len(grid[0])
    for row in grid:
        for actual in range(len(row)):
            prev_val = actual - 1
            next_val = actual + 1
            if (row[actual] == 1):
                if (row[prev_val] == 0 and prev_val >= 0):
                    perimeter += 1
                elif (prev_val < 0):
                    perimeter += 1
                if (next_val >= len(row)):
                    perimeter += 1
                elif (row[next_val] == 0):
                    perimeter += 1
    for i in range(num_col):
        column = [row[i] for row in grid]
        for actual in range(len(column)):
            prev_val = actual - 1
            next_val = actual + 1
            if (column[actual] == 1):
                if (column[prev_val] == 0 and prev_val >= 0):
                    perimeter += 1
                elif (prev_val < 0):
                    perimeter += 1
                if next_val >= len(column):
                    perimeter += 1
                elif (column[next_val] == 0):
                    perimeter += 1
    return(perimeter)
