# Problem

While working for the police, you've identified a house where people go to commit crimes, called Crime House. One day, you set up a camera over the door of the house and record a video.

You don't know how many people were in Crime House at the start of the day, but you can see people enter and leave through the front door. Unfortunately, because the people entering and leaving Crime House are criminals, sometimes they wear masks; and you aren't quite sure if the front door is the only way in or out.

Sometimes you can guess who was wearing a mask. If criminal #5 entered the house, then someone wearing a mask left, then criminal #5 entered the house again, then either the person wearing the mask was criminal #5, or there is another way out of Crime House.

At the end of the day, when Crime House has closed its doors for the night, you watch your video. Because you're an optimist, you want to figure out if it's possible that there are no other entrances or exits from crime house; and if so, you want to figure out the minimum number of people who could be in Crime House at the end of the day.

## Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing a single integer N, the number of times people pass through the front door of Crime House in the day. Next follows N lines, each of which contains information about one person entering or leaving Crime House through the front door.

That information consists of a single character, E or L, followed by a space and then an integer id. If the first character is E, that indicates someone entered Crime House through the front door; if it's L, someone left through the front door. If id is greater than zero, the person with that identifier entered or left Crime House. If id is zero, then the person who entered or left Crime House was wearing a mask, and we don't know who he or she was.
