#include<stdio.h>
main(){
	int marks;
	printf(" enter your marks out of 100 :");
	scanf("%d", &marks);
	
	
	char ch = marks>90?'A' :marks>80?'B' :marks>70?'C' :marks>60?'D' :marks>50?'E' :'F' ;
	
	printf("%c ",ch);
	
	
	  switch(ch){
		case 'A': printf(" EXCELLENT WORK!");
		break;
		case 'B': printf(" Well Done");
		break;
		case 'C': printf(" Good Job");
		break;
		case 'D': printf(" you passed, but you could do better ");
		break;
		case 'E': printf(" sorry, you are failed");
		break;
		case 'F': printf(" sorry, you are failed ");
		break;
	}	
	
	
	
	
	if(ch=='A'||ch=='B'||ch=='C'||ch=='D'){
		printf(" congratulation! you are eligible for next level");
	}
	else{
		printf(" sorry , try again next year");
	}
		
	

	
	
	
	
	
	
}
