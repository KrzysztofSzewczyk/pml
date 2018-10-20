#include<stdio.h>
#define F(I)I=*--c,
#define P(C),q-*#C||(
char**c,**d,**e,*f,*g,*h,*i,*j,*p;k,l,q,z=-1,n,o;FILE*m;main(a,b)
char**b;{c=d=e=f=g=h=i=j=NULL,a&&(p=strchr(b[1],46))&&!(strcmp(p,
".pml")&&strcmp(p,".PML"))&&(m=fopen(b[1],"r")),(l=!m)&&(m=stdin)
;for(n=o=0;o>=n;(g=realloc(g,n+=256))?(h=&g[o+=fread(&g[o],1,256,
m)]):(exit(2),g));for(f=g;f-h||c-d;f=p)q=z[p=f+1],(k=q-36)&&q-42
||(c<e||((d=realloc(d, ((o=c-d)+10)*sizeof *d))?(e=(c=d+o)+10):(
exit(2),d)),*c=k?c[z]:f,c++)P(:)p=*--c)P(<)F(j)F(i)*c++=j<i?j:i)
P(>)F(j)F(i)*c++=j>i?j:i)P(;)F(j)F(i)c[z]+=j-i)P(+)F(j)F(i)(k=
getchar())-EOF?(*i=k,p):(p=j))P(-)putchar(**--c))P(@)F(j)F(i)i=
memchr(i,*c[z],j-i),c[z]=i?i:j)P(=)F(j)*j=**--c)P(/)i=c[-2],c[-2]=
c[z],c[z]=i)P(\\)i=c[z],c[z]=c[-2],c[-2]=c[-3],c[-3]=i)P(!)--c);l||
fclose(m),free(d),free(g),exit(0);}
