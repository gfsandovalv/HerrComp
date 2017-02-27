set terminal x11
set pm3d
set dgrid3d
splot "error_cosine.dat" u 2:1:3 w l

