#!/usr/bin/python3
"""Defines a function to calculate the perimeter of an island."""


def calculate_island_perimeter(grid):
    """Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in the grid.
    """
    width_count = len(grid[0])
    height_count = len(grid)
    edge_count = 0
    land_count = 0

    for i in range(height_count):
        for j in range(width_count):
            if grid[i][j] == 1:
                land_count += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge_count += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge_count += 1
    return land_count * 4 - edge_count * 2

