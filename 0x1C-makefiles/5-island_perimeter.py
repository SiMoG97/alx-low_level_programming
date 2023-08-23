#!/usr/bin/python3
"""5. Island Perimeter"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid

    Args:
        grid (list): a list of lists

    Returns:
        int: the perimeter of the island
    """
    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if j - 1 >= 0 and grid[i][j - 1] == 0:
                    perim += 1
                if j + 1 < len(grid[i]) and grid[i][j + 1] == 0:
                    perim += 1
                if i - 1 >= 0 and grid[i - 1][j] == 0:
                    perim += 1
                if i + 1 < len(grid) and grid[i + 1][j] == 0:
                    perim += 1

    return perim
