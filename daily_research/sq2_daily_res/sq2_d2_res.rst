****************************
Squad 2's Day 2 research log
****************************

.. _md_d2_1:

Understanding Nuances of current svg files
------------------------------------------

   We currently have .cdr files that were designed in corel draw to represent our arenas.
   we decided to use .svg files to parse our graphs from as the .xml fromat svg is based on is easy to understand and has vast library support in python.
   to convert the .cdr files we had into .svg we had two options
   1. use corel draw
   2. use inkscape
   we setteled on using corel draw as the svg files outputted wer cleaner and easier to deal with
   We had three specific classes of objects we intented to extract from the svg file namely

   1. Nodes : 
      these typically existed as <rect> objects with width and height od 30 mm but on rare ocassions they may also present themseves in the forma of a <polygon> object with a solid intereor of the same dimensions

   2. Straight Paths : 
      these typically seisted in the <line> tag but sometimes a <polygon> would represnt multiple pats this had to be properly accounted for

   3. Curved Paths : 
      these existed exclusively as <path> objects

   .. note:: in some arenas dotted lines represent object palcement spaces these were also polygons but had the stroke-dasharray: property. these need to be filtered out

   .. note:: in some arenas the properties are predefined in a comment. as this is a comment parsing libraries are unable to handle them so we need to use raw data manuplation to get the appropriate classes to filter out

   .. warning:: i orignally built the parser as a command line program but later added opencv imagr processing to visualise our parsed nodes. this is useful for dbugging but in release versions this script may need to be called from other programs. for this just remove the opencv part and replace the input statement with sys.argv[1]

