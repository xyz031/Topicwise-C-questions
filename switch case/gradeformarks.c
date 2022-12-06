 #include<stdio.h>
 int main()
 {
int n;
scanf("%d",&n);
int d=n/10;
switch (d)
{
case 10:
    printf("A");
    break;
case 9:
    printf("A");
    break;
    case 8:
    printf("B");
    break;
    case 7:
    printf("C");
    break;
    case 6:
    printf("D");
    break;
    case 5:
    printf("E");
    break;
    case 4:
    printf("F");
    break;
    case 3:
    printf("G");
    break;
    case 2:
    printf("H");
    break;
default:
    break;
}

return 0;
}
