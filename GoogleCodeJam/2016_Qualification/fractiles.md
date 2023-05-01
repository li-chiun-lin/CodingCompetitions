# Problem

Long ago, the Fractal civilization created artwork consisting of linear rows of tiles. They had two types of tile that they could use: gold (G) and lead (L).

Each piece of Fractal artwork is based on two parameters: an original sequence of K tiles, and a complexity C. For a given original sequence, the artwork with complexity 1 is just that original sequence, and the artwork with complexity X+1 consists of the artwork with complexity X, transformed as follows:

    replace each L tile in the complexity X artwork with another copy of the original sequence
    replace each G tile in the complexity X artwork with K G tiles

For example, for an original sequence of LGL, the pieces of artwork with complexity 1 through 3 are:

    C = 1: LGL (which is just the original sequence)
    C = 2: LGLGGGLGL
    C = 3: LGLGGGLGLGGGGGGGGGLGLGGGLGL

Here's an illustration of how the artwork with complexity 2 is generated from the artwork with complexity 1:

You have just discovered a piece of Fractal artwork, but the tiles are too dirty for you to tell what they are made of. Because you are an expert archaeologist familiar with the local Fractal culture, you know the values of K and C for the artwork, but you do not know the original sequence. Since gold is exciting, you would like to know whether there is at least one G tile in the artwork. Your budget allows you to hire S graduate students, each of whom can clean one tile of your choice (out of the KC tiles in the artwork) to see whether the tile is G or L.

Is it possible for you to choose a set of no more than S specific tiles to clean, such that no matter what the original pattern was, you will be able to know for sure whether at least one G tile is present in the artwork? If so, which tiles should you clean?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with three integers: K, C, and S.
