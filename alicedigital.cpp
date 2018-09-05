#include<iostream>
int TD,n,m,i,pS,cS,mS;
bool isM;
int main() {
    scanf("%d", &TD);
    while(TD--){
        pS=0;cS=0;mS=0;isM=false;
        scanf("%d %d",&n,&m);
        while(n--){
            scanf("%d",&i);
            if(i<=m){if(isM&&pS+cS>mS)mS=pS+cS;if(i==m){pS=cS;cS=0;isM=true;}else{pS=cS=0;isM=false;}}
            else cS+=i;
        }
        cS+=pS;
        printf("%d\n",m+((isM&&cS>mS)?cS:mS));
    }
}