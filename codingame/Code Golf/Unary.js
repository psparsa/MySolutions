// Problem: Unary
// Mode: Code Golf
// URL: https://www.codingame.com/multiplayer/codegolf/chuck-norris-codesize

a=[],b="";[...readline()].forEach((c)=>(b+=c.charCodeAt(0).toString(2).padStart(7,"0")));t=b[0];for(i=1;i<=b.length;++i)if(b[i]==t[0])t+=b[i];else a.push(t),t=b[i];for(i=0,b='';i<a.length;++i)b+=(a[i][0]=="1"?"0 ":"00 ")+"0".repeat(a[i].length)+" ";print(b.trim());