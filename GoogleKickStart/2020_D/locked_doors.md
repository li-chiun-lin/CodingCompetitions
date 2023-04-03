# Problem

Bangles is preparing to go on a tour of her local museum. The museum is made up of N rooms in a row, numbered from 1 to N from left to right. The rooms are connected by N-1 locked doors, each connecting a pair of adjacent rooms. Each door has a difficulty level indicating how difficult it is for Bangles to open the door. No two doors will have the same difficulty level. The door between the i-th room and (i+1)-th room has difficulty level Di.

Bangles will pick one of the rooms to start in, and visit each of the rooms in the museum one at a time, taking pictures as she goes. She takes a picture in her starting room, then she repeats the following procedure until she has taken a picture in all the rooms: Of the two locked doors available to her, she will open the door with the lower difficulty level and take a picture in the newly unlocked room. If there is only one locked door available to her, then she will unlock that door. Once a door is unlocked, it remains unlocked.

Bangles is not yet sure which room she would like to start in, so she needs you to answer Q queries. For the i-th query, she would like to know: What is the Ki-th room that she will take a picture in if she starts in the Si-th room?
