# Problem

You are given a string of uppercase English letters. You can highlight any number of the letters (possibly all or none of them). The highlighted letters do not need to be consecutive. Then, a new string is produced by processing the letters from left to right: non-highlighted letters are appended once to the new string, while highlighted letters are appended twice.

For example, if the initial string is $HELLOWORLD$, you could highlight the $H$, the first and last $L$s and the last $O$ to obtain

$HELLOWORLD ⇒ HHELLLOWOORLLD$

Similarly, if you highlight nothing, you obtain $HELLOWORLD$, and if you highlight all of the letters, you obtain $HHEELLLLOOWWOORRLLDD$. Notice how each occurrence of the same letter can be highlighted independently.

Given a string, there are multiple strings that can be obtained as a result of this process, depending on the highlighting choices. Among all of those strings, output the one that appears first in alphabetical (also known as lexicographical) order.
