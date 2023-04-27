# Problem

You are a duelist aspiring to become the next Swordmaster. You will work toward this title by dueling with opponents until you win against every opponent. Every opponent is always available for dueling, and opponents do not duel each other.

Each duelist (including you) knows at least one attack, and at least one defense. There are at most P pairs of attacks and defenses in the world; the i-th defense only counters the i-th attack, and the i-th attack is only countered by the i-th defense. It is possible that there are attacks and/or defenses that no duelist knows. You can use any attack or defense that you know as many times as you like; they do not get "used up".

Here are the rules for each individual duel with an opponent:

- As the aspiring Swordmaster, you always get to attack first. You select an attack that you know. If the opponent knows the corresponding defense, they may choose to use it. If they do not know that defense, or they choose not to use it, then they do not defend.
- Then, the opponent selects an attack that they know. If you know the corresponding defense, you may choose to use it. If you do not know that defense, or you choose not to use it, then you do not defend.
- If you successfully defended and the opponent did not, you win the duel! Otherwise, you do not win, but your quest to become the Swordmaster can continue.

You can fight as many duels as you want, including multiple duels with the same opponent, regardless of the outcomes of any previous duels. You do not need to determine a complete schedule of duels in advance; you can base your next decision on what has already happened. Once you have won at least once against every opponent, you become the Swordmaster!

You are an especially quick learner. After each duel, regardless of the outcome of the duel, you can add the attack and the defense (if any) used by the opponent to your own set of known attacks/defenses. (Note that if an opponent uses an unfamiliar defense against you, you do not learn it during the duel itself, so you cannot use it against the opponent's attack in the same duel.) Only you have this advantage; the attacks and defenses known by your opponents never change.

Moreover, after you win against an opponent, and before your next duel, that opponent will teach you all of the attacks and defenses that they know and that you do not already know. (Once they have lost to you, it looks better for them if you eventually do become the Swordmaster!)

You know which attacks and defenses each opponent knows. If you make optimal choices, is it possible to guarantee that you will become the Swordmaster, regardless of what choices your opponents make?

## Input

The first line of the input gives the number of test cases, T. T test cases follow.

- Each case begins with one line with two integers N and P: the number of duelists (including you), and the maximum number of attack/defense pairs in the world.
- Then, there are N groups of three lines each. The i-th of these groups represents one of the duelists; in particular, the first of them represents you. Each group has the following structure:
  1. One line with two integers Attacksi and Defensesi: the numbers of different attacks and defenses, respectively, known by the i-th duelist.
  1. One line with Attacksi different integers Aij, sorted in increasing order: the identities of the attacks known by the i-th duelist.
  1. One line with Defensesi different integers Dij, sorted in increasing order: the identities of the defenses known by the i-th duelist.
