//assignment : 08
//20. Write a C program to find GCD (HCF) of two numbers using recursion.

int gcd(int a,int b){
	if(b==0)
	return a;
	
	return gcd(b,a%b);
}

int main(){
	int a,b;
	printf("\nenter the values : ");
	scanf("%d%d",&a,&b);
	
	printf("\nThe gcd of the numbers are : %d",gcd(a,b));
}
