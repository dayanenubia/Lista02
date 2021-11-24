#include <stdio.h>

int main(){
	int p1 = 150, p2 = 140 , ano=0;
	while(p2<=p1){
		p1+=1;
		p2+=2;
		ano++;
		printf("No ano %d P1 tem %d cm e P2 tem %d cm\n", ano, p1, p2);
		Sleep(500);
	} // fim while
	printf("Demorou %d anos para a pessoa 2 passar a pessoa 1",ano);
	return 0;
}
