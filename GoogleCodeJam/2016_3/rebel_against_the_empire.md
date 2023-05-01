# Problem

You are a rebel against the evil Galactic Empire, and you are on the run!

You have sabotaged the Empire's Factory of Evil, and imperial security forces will be after you soon! The factory is located on asteroid 0 in a system of N numbered asteroids. Your getaway ship, the Century Quail, is located on asteroid 1, and if you can get there, you will be able to fly away safely.

Each asteroid is a single point in space with a velocity, and you move through space along with whichever asteroid you are currently on. Your Asteroid Jumper will allow you to instantaneously jump between any two asteroids in the system. Long jumps are scarier than short ones (and the vacuum of space is terrifying), so you want to minimize the maximum distance you need to jump. However, starting now, if you ever spend more than a continuous S seconds without jumping, the imperial security forces will catch you. That is, the interval from now until your first jump, and each interval between subsequent jumps, must be less than or equal to S. You may jump at any instant; it does not have to be after an integer number of seconds have elapsed. You escape the instant you jump to asteroid 1.

The i-th asteroid starts at position (xi, yi, zi) in space, and it will move a total distance of (Vxi, Vyi, Vzi) each second. This movement is continuous throughout time; it does not update discretely each second. (It is also possible for an asteroid to be stationary.) Nothing happens if asteroids occupy the same point in space at the same time. You can only travel between two asteroids by jumping, even if they happen to occupy the same point at the instant of your jump.

In the escape plan that minimizes the maximum jump distance, what is that maximum jump distance?

## Input

The first line of the input gives the number of test cases, T. T test cases follow. The first line of each test case contains two integers: N (the number of asteroids) and S (the limit on how long you can go without jumping). Next, there are N lines describing the asteroids. The i-th of these lines (counting starting from 0) contains six integers: the initial (xi, yi, zi) position of the i-th asteroid in space, and the distance ( Vxi, Vyi, Vzi) it moves in a single second.
