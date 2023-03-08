// Problem: Temperatures
// Mode: Code Golf
// URL: https://www.codingame.com/multiplayer/codegolf/power-of-thor

p=parseInt,i = readline().split(' '),LX=p(i[0]),LY=p(i[1]),TX=p(i[2]),TY=p(i[3]);ig=((p,x)=>(px=p,py=x,(p,x)=>px>p&&py>x?(px--,py--,"NW"):px<p&&py>x?(px++,py--,"NE"):px<p&&py<x?(px++,py++,"SE"):px>p&&py<x?(px--,py++,"SW"):px<p?(px++,"E"):px>p?(px--,"W"):py>x?(py--,"N"):py<x?(py++,"S"):void 0));g=ig(TX,TY);while(1){console.log(g(LX,LY))}