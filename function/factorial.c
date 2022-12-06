    #include <stdio.h>
    int cube(int n);
    int main()
    {
        int n;
        printf("enter the no\n");
        scanf("%d",&n);
        cube(n);
        printf("%d",cube(n));
        return 0;
    }

    int cube(int n){
        if (n==0)
        {
            return 1;
        }
        else if (n==1)
        {
            return 1;
        }
        else{
            return n*cube(n-1);
        }
        

    }


