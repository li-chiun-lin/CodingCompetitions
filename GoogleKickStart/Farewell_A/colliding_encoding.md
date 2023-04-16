# Problem

Alan just had his first cryptography class in school today. He decided to apply what he learned and come up with his own cipher. He will map each English letter from A to Z to a decimal digit 0 through 9. He will then try to encode each word to a string consisting of decimal digits by replacing each letter in the word with its mapped digit.

In his excitement, Alan failed to notice that there are 26 letters in the English alphabet and only 10 decimal digits. As a result, there might be collisions, that is, pairs of different words whose encoding is the same.

Given a list of N words that Alan wants to encode and the mapping that he uses, can you find out if there would be any collisions between words on the list?
