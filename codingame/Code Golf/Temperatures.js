// Problem: Temperatures
// Mode: Code Golf
// URL: https://www.codingame.com/multiplayer/codegolf/temperature-code-golf

r=readline;r();u=Math.abs,s=r().split(" ").map(Number).sort((a,b)=>a-b);console.log(s.reduce((p,c)=>(u(c)==u(p)?Math.max(p,c):u(c)<u(p)?c:p)));