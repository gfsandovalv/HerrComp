#init options
set terminal cairolatex
set output "campo_terrestre.tex"
set angles degrees

#functions to fit
f(x)=m*x+b
g(x)=n*x+c
h(x)=l*x+d

#fitting functions
fit f(x) "datos1.dat" u 1:(tan($2)) via m, b
fit g(x) "datos2.dat" u 1:(tan($2)) via n, c
fit h(x) "datos3.dat" u 1:(tan($2)) via l, d


set key left top
set xl "I(mA)"
set yl "$\\theta (\\degree)$" rotate by 90

plot "datos1.dat" u 1:(tan($2)) t '15 vueltas', f(x), "datos2.dat" u 1:(tan($2)) t '10 vueltas', g(x), "datos3.dat" u 1:(tan($2)) t '5 vuetas', h(x)



