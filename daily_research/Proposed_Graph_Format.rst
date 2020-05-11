Proposed Graph Format
**********************
From my observations the arena is made up of the following elements

1. Nodes
2. Straight lines
3. Curved lines
4. Jagged lines
5. Inverse lines

.. note:: There may also exist Inverse jagged or Inverse curvel lines but i did not see them in any of our arenas

The Proposal is to make a Binary file by Pickling a Python object to store the data required to build our arena. The way each element be stored is as follows.

* A node object will have:
	1. Its x,y position
	2. A pointer list tahi stores references to all lines that connect to the node

* A Straight line object will have:
	1. its start and end (x,y) position
	2. pointers pointing to the nodes it connects

* A Jagged line object will have:
	1. its start and end (x,y) position
	2. pointers pointing to the nodes it connects
	3. A Flag indicationg its a jagged line

* An Inverse Line object will have:
	1. its start and end (x,y) position
	2. pointers pointing to the nodes it connects
	3. A Flag indicationg its an inverse line

* A Curved Line object will have:
	1. its start and end (x,y) position
	2. pointers pointing to the nodes it connects
	3. A Flag indicationg its a curved line
	4. a string that will show the svg repesentation of the curved line

The arena Object will have lists for all these objects.
With this Information we can exhaustively and completely describe the arena with out file.