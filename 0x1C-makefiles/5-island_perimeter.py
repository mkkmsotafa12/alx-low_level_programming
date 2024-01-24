#!/usr/bin/python3
""" the perimeter of the island described in grid """


def island_perimeter(grid):
    """" this function returns the perimeter of the island described in grid """
    _ = 0
    for _ in grid:
        for j in _:
            if j == 1:
                _+= 1
    
    if _ == 0:
        return 0
    
    return (_ * 2) + 2