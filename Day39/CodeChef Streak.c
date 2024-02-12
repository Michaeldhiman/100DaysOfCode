#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int om[n], addy[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &om[i]);
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &addy[i]);
        }
        int omstreak=0;
        int om_max=0;
        for(int i=0;i<n;i++){
            if(om[i]!=0){
                omstreak++;
            }else{
                if(om_max<omstreak) om_max=omstreak;
                omstreak=0;
            }
        }
        if(omstreak>om_max) om_max=omstreak;
        int addystreak=0;
        int addy_max=0;
        for(int i=0;i<n;i++){
            if(addy[i]!=0){
                addystreak++;
            }else{
                if(addy_max<addystreak) addy_max=addystreak;
                addystreak=0;
            }
        }
        if(addystreak>addy_max) addy_max=addystreak;
        
        
        if(om_max>addy_max) printf("om\n");
        else if(om_max<addy_max) printf("addy\n");
        else printf("draw\n");
        
    }
    return 0;
}

      
