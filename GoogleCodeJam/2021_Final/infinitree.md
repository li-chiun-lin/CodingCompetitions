# Problem

This problem is about finding the distance between two nodes of a strictly binary tree. Oh, is that too easy?! Ok, the tree is potentially infinite now. Keep it up and we will start going up the aleph numbers.

In this problem, a tree is either a single node X
, or a node X with two trees attached to it: a left subtree and a right subtree. In both cases, X is the root of the tree. If the tree is not a single node, the roots of both the left and right subtrees are the only children of X

.

There is a set of colors numbered from 0
to N, inclusive. Each node is of exactly one color. There might be zero, one, or multiple nodes of each color. Each node of color 0 (white) is a leaf node (that is, it has no children). Each node of color i, for 1≤i≤N, has exactly 2 children: the left one is color Li and the right one is color Ri. The root of the tree is color 1

(black). Note that the tree may have a finite or countably infinite number of nodes.

For example, the following picture illustrates a finite tree defined by the lists L=[3,0,0]
and R=[2,0,2]. Color 2 is blue and color 3

is yellow.

A tree with colored nodes

The distance between two nodes in the tree is the minimum number of steps that are needed to get from one node to the other. A step is a move from a node to its direct parent or its direct child.

Nodes in the tree are indexed using positive integers. The root has index 1

. Then, other nodes are indexed using consecutive integers, with nodes with smaller distances to the root being indexed first. For nodes that are equidistant to the root, nodes that are further to the left are indexed first. For example, the following picture adds indices to each node in the tree we presented before. Notice that each node's index is independent from its color.

A tree with colored and indexed nodes

As another example, the following picture shows the first 33
nodes of an infinite tree defined by the lists L=[3,4,2,4] and R=[2,2,4,0]. Color 4

is green.

An infinite tree with colored and indexed nodes

Given the lists L
and R that define a tree and the indices of two different nodes in the tree, return the distance between those two nodes.
