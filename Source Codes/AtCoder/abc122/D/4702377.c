#include <stdio.h>

int main(void){
    long ans[98] = {61,230,865,3247,12185,45719,171531,643550,2414454,9058467,33985227,127504505,478366600,794717734,733354121,261943303,776803305,580025381,51688048,44657419,737209731,604119499,159693437,858533109,639056669,549054109,996291083,531294469,23314687,783022045,855462856,649970414,68697295,409213624,604356692,88638656,978442997,534833116,763737161,785892908,123883652,639213333,181836645,998121103,124885216,501575626,39816123,113468411,799008836,775465589,256852905,664630886,971550783,751629411,51018086,702530485,725438992,696683714,792638194,221791721,149602322,414054379,986519078,981760191,305799096,515140586,406959393,975058685,245601370,324759692,673385295,191483611,570246669,427196161,781042769,569725155,842176273,25328739,847501730,206282374,353770801,323137024,371653459,940737264,123820509,915711339,847205021,252858375,718889563,866398347,738390145,133009077,333099663,170591295,329869205,616680192,597534442,388130742};
    int n;
    scanf("%d",&n);
    printf("%d\n",ans[n - 3]);
    return 0;
} 