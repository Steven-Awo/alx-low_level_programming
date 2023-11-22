#!/usr/bin/python3
"""Defining an island's perimeter for measuring the function."""


def island_perimeter(grid):
    """Returning the perimiter of the island.

    The grid that represents the water by 0 and for the land by 1.

    Args:
        grid (list): A list of the list of ints representing the island.
    Returns:
        The perimeter for the island to define in grid.
    """
    widthh = len(grid[0])
    heightt = len(grid)
    edgesr = 0
    sizes = 0

    for x in range(heightt):
        for y in range(widthh):
            if grid[x][y] == 1:
                sizes += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edgesr += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edgesr += 1
    return sizes * 4 - edgesr * 2
