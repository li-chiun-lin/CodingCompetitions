# Problem

Mr. Jolly teaches football (or soccer, for US speakers) to N
children numbered from 1 to N. He has taken to leaving sweets on the field where the games take place, one for each child. After the game is finished, each child can grab and eat one sweet as their reward.

The children are tired after games, so each child wants to grab the sweet closest to them (using Euclidean distance). This could lead to fights — if the same sweet is closest to two or more children. To avoid that, after the game all the children stop where they are, and Mr. Jolly calls out their names, one by one. When a child's name is called, they grab the closest sweet to them (out of the ones that weren't already grabbed, of course). In the case where two or more sweets are tied for the smallest distance, Mr. Jolly can decide which one the child grabs.

Illustration of Sample Case #2.

This has worked very well for Mr. Jolly for a while now, but today disaster struck! While laying out the sweets, Mr. Jolly accidentally dropped his blueberry jelly that he planned to eat after all the children go home. So now there are N children on the field, and N+1 sweets. The sweets are numbered from 1 to N+1, with sweet 1 being Mr. Jolly's blueberry jelly. Is there a way for Mr. Jolly to save his blueberry jelly by calling the children's names in such an order that the blueberry jelly is the one sweet left over?
