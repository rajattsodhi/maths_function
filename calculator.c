int main()
{
    char o;
    float num1,num2;
    int i;
    float arr[5],num;
    printf("Enter operator either\n+\n-\n*\n: divide\na average ");
    scanf("%c",&o);
    
    switch(o) {
        case '+':
	    printf("Enter two operands: ");
    	    scanf("%f%f",&num1,&num2);
            printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);
            break;
	case '-':
	    printf("Enter two operands: ");
            scanf("%f%f",&num1,&num2);
            printf("%.1f - %.1f = %.1f",num1, num2, num1-num2);
            break;
	 case '*':
	    printf("Enter two operands: ");
            scanf("%f%f",&num1,&num2);
            printf("%.1f * %.1f = %.1f",num1, num2, num1*num2);
            break;
	case '/':
	    printf("Enter two operands: ");
            scanf("%f%f",&num1,&num2);
            printf("%.1f / %.1f = %.1f",num1, num2, num1/num2);
            break;
        case 'a':
	    i=0;
	    num=0;
	   
	    while(num!=-1 || i<5)
	    printf("Enter a number, -1 to stop maximum 5 numbers and minimum 1 number: ");
            scanf("%f",&num);
	    arr[i]=num;
            printf("%.1f / %.1f = %.1f",num1, num2, num1/num2);
            break;
        
       
        
        
        
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            printf("Error! operator is not correct");
            break;
    }
    return 0;
}
