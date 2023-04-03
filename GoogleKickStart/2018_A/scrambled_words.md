# Problem

Professor Scrmable noticed spelling mistakes in a research paper she was reviewing, but she had no difficulty in reading or understanding the words. Upon doing some research, she found an interesting article as described below:

According to a study at an English University, it doesn't matter in what order the letters in a word are, the only important thing is that the first and last letter be at the correct place. The rest can be a total mess and you can still read it without a problem. This is because the human mind does not read every letter by itself but the word as a whole.

Or rather ...

Aoccdrnig to a study at an Elingsh uinervtisy, it deosn't mttaer in waht oredr the ltteers in a wrod are, the olny iprmoetnt tihng is taht the frist and lsat ltteer be at the corecrt pclae. The rset can be a toatl mses and you can sitll raed it wouthit a porbelm. Tihs is bcuseae the huamn mnid deos not raed ervey lteter by istlef, but the wrod as a wlohe.

Professor Scrmable wants to explore this concept further and starts compiling different sentences containing similarly scrambled words to send to a popular publication. Unfortunately, the space key on the professor's keyboard is not working, so she has produced one long string of characters. She has asked you to determine how many of the words in her dictionary appear (at least once) as substrings in the long string of characters, either in their original or scrambled forms. (A scrambled form consists of the same set of letters with the first and last letters in the same places, and the others in any order.)

Note that a dictionary word can appear multiple times in the string (though it should be counted only once since we only need to know whether it shows up at least once). For example, if we had the word this in the dictionary, the possible valid words which would be counted are this (original version) and tihs (scrambled version), whereas tsih, siht and other variations are not valid since they do not start with t and end with s. Also, tis, tiss, and thiss are not scrambled forms, because they are not reorderings of the original set of letters.

Since the professor is extremely busy, she gives this task to you, her favorite and most trusted research assistant. Given a dictionary, can you count the number of words in the dictionary that appear as a substring in the professor's string at least once, in either their scrambled or original forms.
