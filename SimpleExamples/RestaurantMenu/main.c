int main()
{
    int list, menu, price_1=0, i=0, price_2=0, list_2;
    char menu_1, menu_2, menu_3, menu_4, menu_5, menu_6, menu_u;
    char total;

    printf("*****************************************************************\n");
    printf("\tWelcome to restaurant\n");
first:
    printf("*****************************************************************\n");
    printf("- press 1 to see the menu, press 2 to order.\n");
    printf("- press 3 to pay the account, press 4 to exit.\n");
    printf("*****************************************************************\n");
    printf("selection = ");
    scanf("%d",&list);
    switch(list)
    {
    case 1:
first_menu:
        printf("\t\tMenu\n");
        printf("1-) cold and hot appetizers \t(8 $)\n");
        printf("\ta-) ezme\n");
        printf("\tb-) salad\n");
        printf("2-) soups \t\t\t(3 $)\n");
        printf("\ta-) ezo gelin\n");
        printf("\tb-) mercimek\n");
        printf("\tc-) iskembe\n");
        printf("\td-) sebze sobe\n");
        printf("3-) home foods \t\t(10$)\n");
        printf("\ta-) kuru fasulye\n");
        printf("\tb-) bezelye\n");
        printf("\tc-) nohut\n");
        printf("\td-) sebze corbasi\n");
        printf("4-) kebaps \t\t(15 $)\n");
        printf("\ta-) adanali acili\n");
        printf("\tb-) urfa\n");
        printf("\tc-) cennet kebabi\n");
        printf("5-) desserts \t\t\t(9 $)\n");
        printf("\ta-) kunefe\n");
        printf("\tb-) baklava\n");
        printf("6-) drinks \t\t\t(2 $)\n");
        printf("\ta-) cola\n");
        printf("\tb-) ayran\n");
        printf("\tc-) soda\n");
        printf("****************************************\n\n");
        goto first;
        break;
    case 2:
top_menu:
        printf("**************|menu|********************\n");
        printf("******place your first order!!!*******\n");
        printf("[1] cold and hot appetizers \t(8 $)\n");
        printf("[2] soups \t\t\t(3 $)\n");
        printf("[3] home foods \t\t(10 $)\n");
        printf("[4] kebaps \t\t(15 $)\n");
        printf("[5] desserts \t\t\t(9 $)\n");
        printf("[6] drinks \t\t\t(2 $)\n");
        printf("****************************************\n\n");
        printf("selection = ");
        scanf("%d",&menu);
        do
        {
            switch(menu)
            {
            case 1:
menu_1_first:
                printf("\n[1] cold and hot appetizers \t(8 $)\n");
                printf("\t[a] ezme\n");
                printf("\t[b] salad\n");
                printf("\t[c] to return to the top menu\n\n");
                printf("selection = ");
                menu_1=getche();
                printf("\n");
                switch(menu_1)
                {
                case 'a':
                {
                    char order_1[15]= {"ezme"};
                    price_1+=8;
                    break;
                }
                break;
                case 'b':
                {
                    char order_1[15]= {"salad"};
                    price_1+=8;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu;
                }
                break;
                default:
                    printf("only use a, b and u!!!\n\n");
                    goto menu_1_first;
                    break;
                }
                break;

            case 2:
menu_2_first:
                printf("\n[2] soups \t\t\t(3 $)\n");
                printf("\t[a] ezo gelin\n");
                printf("\t[b] mercimek\n");
                printf("\t[c] iskembe\n");
                printf("\t[d] sebze corbasi\n");
                printf("\t[u] to return to the top menu\n\n");
                printf("selection = ");
                menu_2=getche();
                printf("\n");
                switch(menu_2)
                {
                case 'a':
                {
                    char order_1[15]= {"ezogelin"};
                    price_1+=3;
                    break;
                }
                break;
                case 'b':
                {
                    char order_1[15]= {"mercimek"};
                    price_1+=3;
                    break;
                }
                break;
                case 'c':
                {
                    char order_1[15]= {"iskembe"};
                    price_1+=3;
                    break;
                }
                break;
                case 'd':
                {
                    char order_1[15]= {"sebze corbasi"};
                    price_1+=3;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu;
                }
                break;
                default:
                    printf("only use a , b , c , d and u!!!\n\n");
                    goto menu_2_first;
                    break;
                }
                break;

            case 3:
menu_3_first:
                printf("\n[3] home foods \t\t(10 $)\n");
                printf("\t[a] kuru fasulye\n");
                printf("\t[b] bezelye\n");
                printf("\t[c] nohut\n");
                printf("\t[u] to return to the top menu\n\n");
                printf("selection = ");
                menu_3=getche();
                printf("\n");
                switch(menu_3)
                {
                case 'a':
                {
                    char order_1[15]= {"kuru fasulye"};
                    price_1+=10;
                    break;
                }
                break;
                case 'b':
                {
                    char order_1[15]= {"bezelye"};
                    price_1+=10;
                    break;
                }
                break;
                case 'c':
                {
                    char order_1[15]= {"nohut"};
                    price_1+=10;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu;
                    break;
                }
                break;
                default:
                    printf("only use a , b, c and u!!!\n\n");
                    goto menu_3_first;
                    break;
                }
                break;

            case 4:
menu_4_first:
                printf("[4] kebaps \t\t(15 $)\n");
                printf("\t[a] adana acili\n");
                printf("\t[b] urfa\n");
                printf("\t[c] cennet kebabi\n");
                printf("\t[u] to return to the top menu\n\n");
                printf("selection = ");
                menu_4=getche();
                printf("\n");
                switch(menu_4)
                {
                case 'a':
                {
                    char order_1[15]= {"adana acili"};
                    price_1+=15;
                    break;
                }
                break;
                case 'b':
                {
                    char order_1[15]= {"urfa"};
                    price_1+=15;
                    break;
                }
                break;
                case 'c':
                {
                    char order_1[15]= {"cennet kebabi"};
                    price_1+=15;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu;
                }
                break;
                default:
                    printf("only use a , b, c and u!!!\n\n");
                    goto menu_4_first;
                    break;
                }
                break;
            case 5:
menu_5_first:
                printf("[5] desserts \t\t\t(9 $)\n");
                printf("\t[a] kunefe\n");
                printf("\t[b] baklava\n");
                printf("\t[u] to return to the top menu\n\n");
                printf("selection = ");
                menu_5=getche();
                printf("\n");
                switch(menu_5)
                {
                case 'a':
                {
                    char order_1[15]= {"kunefe"};
                    price_1+=9;
                    break;
                }
                break;
                case 'b':
                {
                    char order_1[15]= {"baklava"};
                    price_1+=9;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu;
                    break;
                }
                break;
                default:
                    printf("only use a , b and u!!!\n\n");
                    goto menu_5_first;
                    break;
                }
                break;
            case 6:
menu_6_first:
                printf("6-) drinks \t\t\t(2 $)\n");
                printf("\t[a] cola\n");
                printf("\t[b] ayran\n");
                printf("\t[c] soda\n");
                printf("\t[u] to return to the top menu\n\n");
                printf("selection = ");
                menu_6=getche();
                printf("\n");
                switch(menu_6)
                {
                case 'a':
                {
                    char order_1[15]= {"cola"};
                    price_1+=2;
                    break;
                }
                break;
                case 'b':
                {
                    char order_1[15]= {"ayran"};
                    price_1+=2;

                    break;
                }
                break;
                case 'c':
                {
                    char order_1[15]= {"soda"};
                    price_1+=2;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu;
                }
                break;
                default:
                    printf("only use a , b, c and u!!!\n\n");
                    goto menu_6_first;
                    break;
                }
                break;
            }
            break;
        }
        while(i<0);
        {
top_menu_2:
            printf("\t\tmenu\n");
            printf("*****place your second order!!!*****\n");
            printf("[1] cold and hot appetizers \t(8 $)\n");
            printf("[2] soups \t\t\t(3 $)\n");
            printf("[3] home foods \t\t(10 $)\n");
            printf("[4] kebaps \t\t(15 $)\n");
            printf("[5] desserts \t\t\t(9 $)\n");
            printf("[6] drinks \t\t\t(2 $)\n");
            printf("****************************************\n\n");
            printf("selection = ");
            scanf("%d",&menu_2);
            switch(menu_2)
            {
            case 1:
menu_1_first_2:
                printf("\n[1] cold and hot appetizers \t(8 $)\n");
                printf("\t[a] ezme\n");
                printf("\t[b] salad\n");
                printf("\t[c] to return to the top menu\n\n");
                printf("selection = ");
                menu_1=getche();
                printf("\n");
                switch(menu_1)
                {
                case 'a':
                {
                    char order_2[15]= {"ezme"};
                    price_2+=8;
                    break;
                }
                break;
                case 'b':
                {
                    char order_2[15]= {"salad"};
                    price_2+=8;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu_2;
                }
                break;
                default:
                    printf("only use a, b and u!!!\n\n");
                    goto menu_1_first_2;
                    break;
                }
                break;
            case 2:
menu_2_first_2:
                printf("\n[2] soups \t\t\t(3 $)\n");
                printf("\t[a] ezo gelin\n");
                printf("\t[b] mercimek\n");
                printf("\t[c] iskembe\n");
                printf("\t[d] sebze corbas2i\n");
                printf("\t[u] to return to the top menu\n\n");
                printf("selection = ");
                menu_2=getche();
                printf("\n");
                switch(menu_2)
                {
                case 'a':
                {
                    char order_2[15]= {"ezogelin"};
                    price_2+=3;
                    break;
                }
                break;
                case 'b':
                {
                    char order_2[15]= {"mercimek"};
                    price_2+=3;
                    break;
                }
                break;
                case 'c':
                {
                    char order_2[15]= {"iskembe"};
                    price_2+=3;
                    break;
                }
                break;
                case 'd':
                {
                    char order_2[15]= {"sebze corbas2i"};
                    price_2+=3;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu_2;
                }
                break;
                default:
                    printf("only use a , b , c , d and u!!!\n\n");
                    goto menu_2_first_2;
                    break;
                }
                break;

            case 3:
menu_3_first_2:
                printf("\n[3] homefoods \t\t(10 $)\n");
                printf("\t[a] kuru fasulye\n");
                printf("\t[b] bezelye\n");
                printf("\t[c] nohut\n");
                printf("\t[u] to return to the top menu\n\n");
                printf("selection = ");
                menu_3=getche();
                printf("\n");
                switch(menu_3)
                {
                case 'a':
                {
                    char order_2[15]= {"kuru fasulye"};
                    price_2+=10;
                    break;
                }
                break;
                case 'b':
                {
                    char order_2[15]= {"bezelye"};
                    price_2+=10;
                    break;
                }
                break;
                case 'c':
                {
                    char order_2[15]= {"nohut"};
                    price_2+=10;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu_2;
                }
                break;
                default:
                    printf("only use a , b, c and u!!!\n\n");
                    goto menu_3_first_2;
                    break;
                }
                break;

            case 4:
menu_4_first_2:
                printf("[4] kebaps \t\t(15 $)\n");
                printf("\t[a] adana acili\n");
                printf("\t[b] urfa\n");
                printf("\t[c] cennet kebabi\n");
                printf("\t[u] to return to the top menu\n\n");
                printf("selection = ");
                menu_4=getche();
                printf("\n");
                switch(menu_4)
                {
                case 'a':
                {
                    char order_2[15]= {"adana acili"};
                    price_2+=15;
                    break;
                }
                break;
                case 'b':
                {
                    char order_2[15]= {"urfa"};
                    price_2+=15;
                    break;
                }
                break;
                case 'c':
                {
                    char order_2[15]= {"cennet kebabi"};
                    price_2+=15;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu_2;
                }
                break;
                default:
                    printf("only use a , b, c and u!!!\n\n");
                    goto menu_4_first_2;
                    break;
                }
                break;
            case 5:
menu_5_first_2:
                printf("[5] desserts \t\t\t(9 $)\n");
                printf("\t[a] kunefe\n");
                printf("\t[b] baklava\n");
                printf("\t[u] to return to the top menu\n\n");
                printf("selection = ");
                menu_5=getche();
                printf("\n");
                switch(menu_5)
                {
                case 'a':
                {
                    char order_2[15]= {"kunefe"};
                    price_2+=9;
                    break;
                }
                break;
                case 'b':
                {
                    char order_2[15]= {"baklava"};
                    price_2+=9;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu_2;
                }
                break;
                default:
                    printf("only use a , b and u!!!\n\n");
                    goto menu_5_first_2;
                    break;
                }
                break;

            case 6:
menu_6_first_2:
                printf("6-) drinks \t\t\t(2 $)\n");
                printf("\t[a] cola\n");
                printf("\t[b] ayran\n");
                printf("\t[c] soda\n");
                printf("\t[u] to return to the top menu\n\n");
                printf("selection = ");
                menu_6=getche();
                printf("\n");
                switch(menu_6)
                {
                case 'a':
                {
                    char order_2[15]= {"cola"};
                    price_2+=2;
                    break;
                }
                break;
                case 'b':
                {
                    char order_2[15]= {"ayran"};
                    price_2+=2;
                    break;
                }
                break;
                case 'c':
                {
                    char order_2[15]= {"soda"};
                    price_2+=2;
                    break;
                }
                break;
                case 'u':
                {
                    goto top_menu_2;
                }
                break;
                default:
                    printf("only use a , b, c and u!!!\n\n");
                    goto menu_6_first_2;
                    break;
                }
            }
taken:
            printf("**************************orders are ok*****************************\n");
            printf("- Press 1 to see the menu again, press 2 to order again.\n");
            printf("- Press 3 to pay the account, press 4 to exit.\n");
            printf("***********************************************************************************\n");
            printf("selection = ");
            scanf("%d",&list_2);
            switch(list_2)
            {
            case 1:
                goto first;
            case 2:
                goto first_menu;
            case 3:
amont:
                printf("your orders = \n");
                printf("1.order = %d $\n",price_1);
                printf("2.order = %d $\n",price_2);
                printf("total amount payable = %d\n",price_1+price_2);
                printf("If you want to pay the amount press 'e'!\n");
                char amont;
                scanf("%s",&amont);
                if(amont=='e')
                {
                    printf("the amount has been paid already, good luck sir =)\n\n");
                    goto finally;
                }
                else
                {
                    printf("you entered wrong, just use the letters e and h!!!\n\n");
                    goto amont;
                }
                break;
            case 4:
                printf("We hope you come again\n\n");
                goto finally;
                break;
            default:
                printf("you can only use 1 , 2 , 3 and 4 keys!\n\n");
                goto taken;
            }
        }
    case 3:
        printf("no amount due yet please order first!\n\n");
        goto first;
    case 4:
        printf("We hope you come again\n\n");
        break;
    default:
        printf("you can only use 1 , 2 , 3 and 4 keys!!!\n\n");
        goto first;
    }
finally:
    printf("bye bye\n\n");
    return 0;
}
