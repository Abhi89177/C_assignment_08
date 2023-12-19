//assignment : 08
//18. Write a C program to find factorial of any number using recursion.

int factorial(int num){
	
	if(num == 0 || num ==1)
	return num;
	
	return num*factorial(num-1);
}

int main(){
	int num;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	printf("\nThe factorial of number is %d",factorial(num));
	
}
