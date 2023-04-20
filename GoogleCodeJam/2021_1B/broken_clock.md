# Problem

Emmett found an old clock in his attic. The clock is a circle with 3 hands that attach to the center and rotate clockwise at constant speeds. They are called the hours hand, the minutes hand and the seconds hand. At midnight, all hands point up. The hours hand completes a full revolution in 12 hours, the minutes hand completes a full revolution in 1 hour, and the seconds hand completes a full revolution in 1 minute. 1 hour is equal to 60 minutes, 1 minute is equal to 60 seconds, and 1 second is equal to 10^9 nanoseconds.

For example, the clock depicted below is showing that the time is exactly 6 hours and 30 minutes after midnight. The hours hand (short black) is halfway between 6 and 7 (completed 6.5/12 of a revolution), the minutes hand (long black) is pointing straight down because it has completed exactly 6

and a half full revolutions and the seconds hand (red) is pointing straight up because it has completed an integer number of full revolutions.

a clock showing 6:30

Unfortunately, the hands are broken, so they all look identical and there is no way to know which hand is which. The clock in the picture above, with its hands broken, would look like this.

a clock showing 6:30 with all equal hands

In addition, no markings remain that allow Emmett to know which way is up, so any rotation of the clock could be the correct one (the clock can only be rotated, not reflected). To continue with our example, the fully broken clock could look like this.

a clock showing 6:30 with all equal hands and rotated 45 degrees clockwise

Emmett does know that the time was strictly before noon, that is, strictly less than 12 hours after midnight. Emmett has taken a picture of the clock. Given that picture (represented by the angles of the hands relative to a single arbitrary axis), figure out what time it could correspond to.

Notice that Emmett has already figured out a viable orientation of the clock in some cases (Test Set 1) and has managed to narrow down the possible times to a whole integer number of seconds (Test Sets 1 and 2) or nanoseconds (Test Set 3). Please see the limits sections for more details.
