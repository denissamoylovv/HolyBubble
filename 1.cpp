#include <stdio.h>

int main(){
	int i=0,a,b;
	double av=0,ave=0;
	FILE *f;
	
	f=fopen("1",r);
	while(fscanf(f,"%d",&a)==1){
		av+=a;
		ave+=(a*a);
		i++;
	}
	printf("g %g\n",(ave/i-av*av/i/i));
	fclose(f);
	
	return 0;
}
