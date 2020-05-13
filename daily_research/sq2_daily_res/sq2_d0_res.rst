****************************
Squad 2's Day 0 research log
****************************


.. _md_d0_1:

A technique to change Sphinx Themes
-----------------------------------

   ( ^ A short searchable descripttion of the for future access by anyone.)
   Details with links here.

   In the reference tag:
   1. Intial of member
   2. Day
   3. Index
      

.. _md_ns_d0_2:

Exploration of PDFs as alternatives
-----------------------------------

   ( ^ A short searchable descripttion of the for future access by anyone.)
   Details with links here.

   1. Image processing method
   2. Parser method
   3. Elaboration and links
      
.. _ns_d0_3:

Texture imports into V-REP
--------------------------

   Use the reStructured Text features to code

.. _md_d0_4:

Proposed Graph Format
---------------------

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
   	2. The Pick/Place_Spot connected to that node.
   	3. A pointer list that stores references to all lines that connect to the node

   * A Straight line object will have:
   	1. Its start and end (x,y) position
   	2. The Weight of the Line.
   	3. Pointers pointing to the nodes it connects to
   	
   .. note:: Weight is a number, measured in dependance with the distance, Path above the ground or below.

   * A Jagged line object will have:
   	1. Its start and end (x,y) position
   	2. Pointers pointing to the nodes it connects to
   	3. The Weight of the Line.
   	4. A Flag indicationg its a jagged line

   * An Inverse Line object will have:
   	1. its start and end (x,y) position
   	2. Pointers pointing to the nodes it connects to
   	3. The Weight of the Line.
   	4. A Flag indicationg its an inverse line

   * A Curved Line object will have:
   	1. its start and end (x,y) position
   	2. Pointers pointing to the nodes it connects to
   	3. The Weight of the Line.
   	4. A Flag indicationg its a curved line
   	5. a string that will show the svg repesentation of the curved line

   The arena Object will have lists for all these objects.
   With this Information we can exhaustively and completely describe the arena with out file.


