#include <cstdio>
#include <math.h>
int main() {
long long long n=6468788225617165986834135576917225554894970052906780082141292898838678923742026084559084901363224395182081413759373601970886398345078454871067418638776399877369835815864588492402032028528479213234903065119260918626898946879536042497121173961708383046923014963200237357474695802979352362779091821460596090696114227336999674297373937878140721179588651627609610720415300434919907303304793419750067544897943659160663577985086393237284299395059432425879380685160699466423530867300368207133793468258998003421974260389;
long long long u=-1;
long long long v;
//    scanf("%lld", &n);
        if(n==1 || n==2){
            u=-1;
        }else if(n%3!=0){
        int extra=n%3;
        int endloop=1;
        v=n;
        while(v){
            int div=(int)round(pow(10,endloop));
            printf("..%d\n",div);
            if((v%10)==extra){
                printf("1 2<\n");
                v=v/10;
                u=n/div+(n % (int)round(pow(10,(endloop-1))));
                endloop=0;
                continue;
            }else if (((v%10)-extra)%3==0){
                printf(">3\n");
                v=v/10;
                u=n/div+n%(int)round(pow(10,(endloop-1)));
                endloop=0;
                continue;
            }
            v=v/10;
            endloop++;
        }

       }else{
       u=n;
       }
       n=u;
     printf("%lld\n", n);
    return 0;
}