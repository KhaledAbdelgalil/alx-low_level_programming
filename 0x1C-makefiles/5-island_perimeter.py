#!/usr/bin/python3
""""
5-island_perimeter.py
"""


def island_perimeter(grid):
    """calculates the primeter of island"""
    cells = 0
    edges = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                cells = cells + 1
                if row != 0 and grid[row - 1][col] == 1:
                    edges = edges + 1
                if col != 0 and grid[row][col - 1] == 1:
                    edges = edges + 1
    return 4 * cells - 2 * edges
