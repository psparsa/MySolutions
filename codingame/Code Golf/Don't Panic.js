// Problem: Don't Panic
// Mode: Code Golf
// URL: https://www.codingame.com/multiplayer/codegolf/don't-panic

r=readline,p=parseInt,ii=r().split(" "),e={};for(i=0;i<p(ii[7]);i++){j=r().split(" ");e[p(j[0])]=p(j[1])}while(1){x=r().split(" "),cf=p(x[0]),a=p(x[1]),b=e[cf<0?0:cf]??p(ii[4]),t=a>b?"LEFT":a<b?"RIGHT":"NONE";console.log(t!=x[2]&&t!="NONE"?"BLOCK":"WAIT")}