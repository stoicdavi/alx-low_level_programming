#!/usr/bin/python3
"""this module contains function that returns perimeter of an island"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    # Initialize perimeter
    perimeter = 0

    # Get the dimensions of the grid
    height = len(grid)
    width = len(grid[0])

    # Iterate through the grid
    for i in range(height):
        for j in range(width):
            # Process only land cells
            if grid[i][j] == 1:
                # Start with 4 sides for each land cell
                perimeter += 4

                # Subtract sides that are adjacent to other land cells
                if i > 0 and grid[i-1][j] == 1:  # Land above
                    perimeter -= 1
                if j > 0 and grid[i][j-1] == 1:  # Land on the left
                    perimeter -= 1
                if i < height - 1 and grid[i+1][j] == 1:  # Land below
                    perimeter -= 1
                if j < width - 1 and grid[i][j+1] == 1:  # Land on the right
                    perimeter -= 1

    return perimeter
