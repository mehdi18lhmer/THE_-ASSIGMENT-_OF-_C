
   // secondly we do the sum with do while loop
    do {
        printf("Enter a number  ");
        scanf("%d", &N2);

        if (N2 >= 20) {
            printf("error enter a number less than 20.\n");
        }
        N2 = N2 + N2;
        printf("the sum is = %d", N2);
    } while (N2 < 20);

    return 0;
}