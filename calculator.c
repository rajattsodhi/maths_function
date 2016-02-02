int main()
{
    char o;
    float num1,num2;
    float nums[5];
    float max,min;
    int i;
    float arr[5],num;
    printf("Enter operator either (+) or (-) or (*) or divide (:) or average (a) or remainder (%) or (m)in and max ");
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
        case '%':
	    printf("Enter two operands: ");
            scanf("%f%f",&num1,&num2);
            printf("%.1f % %.1f = %.1f",num1, num2, num1%num2);
            break;
       case 'm':
	    printf("Enter 5 operands: ");
            for(i=0;i<5;i++)
            scanf("%f",&nums[0]);
	    float max, min;
	    max=nums[0];
	    min=nums[0];
	    for(i=1;i<5;i++){
		if (max<nums[i])
			max=nums[i];
		if (min>nums[i])
			min=nums[i];
	    }
	    
            printf("min = %.1f, max = %.1f",min,max);
            break;
        
       
        
        
        
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            printf("Error! operator is not correct");
            break;
    }
    return 0;
}
