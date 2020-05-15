****************************
Squad 2's Day 3 research log
****************************

.. _md_d3_1:

Flatenning svg Path Functions
-----------------------------

	svg <path> objects are comprized of majorly four components.

	1. Line Objects [start,end] : these are straight lines between start and end

	2. Biezer Quadratic [start, control, end] : quadratic functions representing curves need to be interpolated to line array

	3. Biezer cubic [start, control1, control2, end] : cubic functions representing second order curves need to be interpolated into line array

	4. Arc [start, radius, rotation, arc, sweep, end] : a part of an ellipse need to be intrrpolated into line array

	The plan is to first use pythons svg.parse madule to break the path into its components then interpolate the non linear components

	To interpolate non linear components we use the equations for bezier curves 

	Wikipedia <https://en.wikipedia.org/wiki/B%C3%A9zier_curve>

	Lets concider interpolating into n points

	* We linearly interpolate the x values between start and end of the curve

	* We Calculate the y value for each x value

	* We store them together to get an interpolated biezer curve

	.. note:: The larger the n the better the accurecy. The smaller the n the better the performance.

