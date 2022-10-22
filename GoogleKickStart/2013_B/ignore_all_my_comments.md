# Problem

Good programmers write fabulous comments. Igor is a programmer and he likes the old C-style comments in /\* ... */ blocks. For him, it would be ideal if he could use this style as a uniform comment format for all programming languages or even documents, for example Python, Haskell or HTML/XML documents.

Making this happen doesn't seem too difficult to Igor. What he will need is a comment pre-processor that removes all the comment blocks in /\*, followed by comment text, and by another */. Then the processed text can be handed over to the compiler/document renderer to which it belongs—whatever it is.

Igor's pre-processor isn't quite that simple, though. Here are some cool things it does:

The comments the pre-processor reads can be nested the same way brackets are nested in most programming languages. It's possible to have comments inside comments. For example, the following code block has an outer level of comments that should be removed by the comment pre-processor. The block contains two inner comments.

```c
printf("Hello /* a comment /* a comment inside comment */ 
        inside /* another comment inside comment */ 
        string */ world");
```

After the pre-process step, it becomes:

```c
printf("Hello  world");
```

Igor recognizes comments can appear anywhere in the text, including inside a string "/*...*/", a constant number 12/*...*/34 or even in a character escape \/*...*/n

Or more formally:

```text
text:
  text-piece
  text-piece remaining-text
text-piece:
  char-sequence-without-/*
  empty-string
remaining-text:
  comment-block text

comment-block:
  /* comment-content */
comment-content:
  comment-piece
  comment-piece remaining-comment
comment-piece:
  char-sequence-without-/*-or-*/
  empty-string
remaining-comment:
  comment-block comment-content

char:
  letters
  digits
  punctuations
  whitespaces
```

Our pre-processor, given a text, removes all comment-block instances as specified.

## Notes

Igor only needs to remove the comment in one pass. He doesn't remove additional comment blocks created as a result of the removal of any comment block. For example:

```c
//*no recursion*/* file header */
```

should generate:

```c
/* file header */
```

The \* character in any /\* or /\* cannot be re-used in another /\* or */. For example the following does NOT form a proper comment block

```c
/*/
```
