#!/usr/bin/python3
def island_perimeter(grid):
    """
    Calculates perimeter of island with no lakes
    """
    area = 0
    for y, row in enumerate(grid):
        for x, column in enumerate(row):
            if column == 1:
                area += 4
                if grid[y - 1][x] == 1:
                    area -= 1
                if grid[y + 1][x] == 1:
                    area -= 1
                if grid[y][x - 1] == 1:
                    area -= 1
                if grid[y][x + 1] == 1:
                    area -= 1
    return area
