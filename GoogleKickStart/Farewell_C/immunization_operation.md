# Problem

Making every vaccine available to the entire world population is a complicated problem in many respects. Ñambi is leading the charge to optimize delivery. To reduce the access barriers as much as possible, she is trying to have automated robots deliver and apply vaccines directly in patients' homes.

In the current iteration, the robot that Ñambi is designing will work on a single street that runs from west to east. As such, the robot accepts a single command 'move x
meters'. If x is positive, the robot moves x meters to the east. If x is negative, the robot moves −x

meters to the west.

The robot is loaded at the start of the day with the information about all immunizations it must provide that day. Each of these pieces of information consists of the current location of the vaccine, for pickup, and the location of the patient that must receive it, for delivery. Each vaccine is custom-made for one patient. Of course, the delivery location of a vaccine is never the same as its own pickup location. The robot must pick up the vaccine before it delivers it to the patient.

The robot is programmed to automatically pick up and load onto its cargo area vaccines when it passes through their pickup locations for the first time. The robot is also programmed to deliver the vaccine to its recipient as soon as it passes through their location if the vaccine was already picked up. Ñambi wants to track how many vaccinations happen after each movement command. A vaccination happens when the vaccine is delivered. Notice that the vaccine might be picked up during any of the previous commands, or during the same command, but before delivery.

The following picture illustrates one possible scenario (Sample Case #1 below). The smiley face represents the initial position of the robot, and the long black line is the street. The marks above the line are the pickup locations and the marks below are the delivery locations. Finally, the arrows below represent the moves the robot makes, in order from top to bottom, labeled with how many deliveries are completed during the move.

Illustration of Sample Case #1

This is what happens during each move, in order:

- Move 1. The robot picks up vaccines 5 and 1, then delivers vaccine 1, and then picks up vaccine 3 just as the move is finishing. Notice that the robot passes through the delivery location for vaccine 3, but since that happens before picking vaccine 3 up, it cannot deliver it.
- Move 2. The robot passes through the delivery locations of vaccines 1 and 4. However, vaccine 1 is already delivered and vaccine 4 has not been picked up, so no vaccination is finished.
- Move 3. The robot delivers vaccine 3.
- Move 4. The robot picks up vaccine 2
, delivers vaccine 5 and picks up vaccine 4.

Notice that vaccine 2
and 4 were picked up but not delivered because the delivery location of vaccine 2 was never reached, and the delivery location of vaccine 4

was not reached after the vaccine had been picked up.

Given the list of immunizations to be given and the list of moving commands to be executed by the robot in order, compute how many vaccinations are completed after each command.
