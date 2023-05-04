# Problem

You are a landlord who owns a building that is an R x C grid of apartments; each apartment is a unit square cell with four walls. You want to rent out N of these apartments to tenants, with exactly one tenant per apartment, and leave the others empty. Unfortunately, all of your potential tenants are noisy, so whenever any two occupied apartments share a wall (and not just a corner), this will add one point of unhappiness to the building. For example, a 2x2 building in which every apartment is occupied has four walls that are shared by neighboring tenants, and so the building's unhappiness score is 4.

If you place your N tenants optimally, what is the minimum unhappiness value for your building?

## Input

The first line of the input gives the number of test cases, T. T lines follow; each contains three space-separated integers: R, C, and N.
