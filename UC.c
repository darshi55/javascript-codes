#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct cart{
char item_name[100];
int price;

struct cart *next;
}cart;

cart *head=NULL;
cart *curr=NULL;



struct cart *add_to_cart(struct cart *head,char item_name[100], int price) {
    
    struct cart *new_item= (struct cart*)malloc(sizeof(struct cart));
    strcpy(new_item->item_name,item_name);
    new_item->price=price;
    new_item->next=NULL;
    
   if(head==NULL)
    {
        head = new_item;
    }
    else{
        new_item->next = head;
        head = new_item;
    }
    printf("\n%s has been added to your cart for Rs %d.\n",item_name, price);
struct cart *temp=head;
int total=0;
while(temp!=NULL){
  total += temp->price;
  temp=temp->next;
  
}
printf("\nTotal is %d",total);
return head;
}

int main(){
    int choice;
    int ch,dh,eh,gh,jh;
    int wax,Ac,clean,appliance;
    int n;
    

    printf("Hello! welcome to urban company\n");
    while(choice!=-1){
    printf("\nEnter 1 for women's salon and spa\n2 for men's salon and spa\n3 for repair services\n4 for cleaning services\n5 for electrician\n6 for other services\n");
    scanf("%d",&choice);
    switch(choice){
        case -1:
        break;
        //women's salon and spa
        case 1:
        while(ch!=-1){
        printf("\nEnter 1 for waxing\n2 for facial and cleanups\n3 for manicure\n4 for pedicure\n5 for threading\n6 for bleach and detan\n7 for hair care\n");
        scanf("%d",&ch);
        switch(ch){
            case -1:
            break;
            
            case 1:
            while(wax!=-1){
            printf("Enter 1 for full body waxing\n2 for leg waxing\n3 for back waxing\n");
            scanf("%d",&wax); 
            switch(wax){
                case -1:
                break;
                case 1:
                printf("\nFull body waxing is at Rs.949\n");
                printf("To add it in cart press 1\n");
                scanf ("%d",&n);
                if(n==1){
                    head =add_to_cart(head,"fullwax",949);
                }
                break;
                case 2:
                printf("Leg waxing is at Rs.249\n");
                printf("To add it in cart press 1\n");
                scanf("%d",&n);
                if(n==1){
                    head =add_to_cart(head,"legwax",249);
                }
                break;
                case 3:
                printf("Back waxing is at Rs.349\n");
                printf("To add it in cart press 1\n");
                scanf("%d",&n);
                if(n==1){
                    head=add_to_cart(head,"back_wax",249);
                }
                break;
                
                default:printf("Wrong value entered");
                break;
                
            }
            printf("\nto go back press -1\n");
            }
        break;
            case 2:
            printf("facial is at Rs.500\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"facial",500);
            }
        break; 
        
          case 3:
          printf("Manicure is at Rs.400\n");
          printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"manicure",400);
            }
            break;
            
        case 4:
        printf("pedicure is at Rs.500\n");
         printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"pedicure",500);
            }
            break;
            
        case 5:
        printf("Threading is at Rs.50\n");
         printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"threading",50);
            }
            break;
            
        case 6:
         printf("Bleach and detan is at Rs.600\n");
         printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"Bleach and detan",600);
            }
            break;
            
        case 7:
         printf("hair care is at Rs.400\n");
         printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"hair care",400);
            }
            break;
            
        default:printf("Wrong value entered\n");
            
        
          }
        
        
        printf("\nTo go back press -1");
        }
        break;
        //Men's salon and spa
        case 2:
        while(dh!=-1){
            printf("\nEnter 1 for hair cut\n2 for hair colour\n3 for shave beard\n4 for detan and facials\n5 for massage therapy\n6 for manicure and pedicure\n");
        scanf("%d",&dh);
        switch(dh){
            case -1:
                break;
            case 1:
            printf("Men's haircut is at Rs.249\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"hair cut",249);
            }
            break;
            case 2:
            printf("Men's haircolour(with dye) is at Rs.400\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"hair colour",400);
            }
            break;
            case 3:
            printf("Men's shaving is at Rs.150\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"shave beard",150);
            }
            break;
            
            case 4:
            printf("Men's facial and detan is at Rs.1500\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"facial and detan",1500);
            }
            break;
            
            case 5:
            printf("Men's facial and head massage is at Rs.300\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"facial and head massage",300);
            }
            break;
            
            case 6:
            printf("Men's Manicure and pedicure is at Rs.749\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"Manicure and pedicure",749);
            }
            break;
            
            default:printf("Wrong value entered");
            
            
            
            
            
            
            
            
        }
          printf("To go back press-1"); 
        }
        break;
            //repair services
        case 3:
        while(eh!=-1){
            printf("\nEnter 1 for Ac repair service\n2 for microwave repair service\n3 for refrigerator repair service\n4 for washing machine repair service\n5 for water purifier repair service\n6 for chimney repair service\n7 for geyser repair service\n8 for air cooler repair service\n9 for Television repair\n");
            scanf("%d",&eh);
            switch(eh){
                case -1:
                break;
            case 1:
            while(Ac!=-1){
            printf("Ac repair service Includes : \n");
            printf("Enter 1 for Ac check-up\n2 for Gas leak fixing and refill\n3 for Ac installation and uninstallation\n");
            scanf("%d",&Ac);
            //printf("Ac repair service is at Rs.249\n");
            switch(Ac){
                case -1:
                break;
                case 1:
                printf("\nAc checkup is at Rs.300\n");
                printf("To add it in cart press 1\n");
                scanf ("%d",&n);
                if(n==1){
                    head =add_to_cart(head,"Ac checkup",300);
                }
                break;
                case 2:
                printf("Gas leak fixing and refillis at Rs.2500");
                printf("To add it in cart press 1\n");
                scanf("%d",&n);
                if(n==1){
                    head =add_to_cart(head,"gas fix-refill",2500);
                }
                break;
                case 3:
                printf("Ac installation or uninstallation is at Rs.800 \n");
                printf("To add it in cart press 1\n");
                scanf("%d",&n);
                if(n==1){
                    head=add_to_cart(head,"Ac ins or unins",800);
                }
                break;
                
                default:printf("Wrong value entered");
                break;
                printf("\npress -1 to go back\n");
            }
            
            break;
            case 2:
            printf("microwave repair service at Rs.200 (new parts not included)\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"microwave repair",200);
            }
            break;
            case 3:
            printf("refrigerator repair service is at Rs.180 (new parts not included)\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"refrigerator repair",180);
            }
            break;
            
            case 4:
            printf("washing machine repair is at Rs.180 (new parts not included)\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"washing machine repair",180);
            }
            break;
            
            case 5:
            printf("water purifier repair service is at Rs.300 (new parts not included)\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"water purifier repair",300);
            }
            break;
            
            case 6:
            printf("chimney repair service is at Rs.400 (new parts not included)\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"chimney repair",400);
            }
            break;
            
            case 7:
            printf("geyser repair service is at Rs.150 (new parts not included)\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"geyser repair",150);
            }
            break;
            
            case 8:
            printf("Air cooler repair service is at Rs.800 (new parts not included)\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"Air cooler repair",800);
            }
            break;
            
            case 9:
            printf("Television repair service is at Rs.900 (new parts not included)\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"Television repair",900);
            }
            break;
            
            
                
            }
        }
        printf("To go back press-1");
       
        }
        break;
           //cleaning services
        case 4:
         while(gh!=-1){
            printf("\nEnter 1 for bathroom and kitchen cleaning\n2 for coakroach,Ant and General pest control\n3 for full home cleaning\n4 for sofa and carpet cleaning\n5 for disinfection services\n");
            scanf("%d",&gh);
            switch(gh){
                
            case -1:
            break;
                
            case 1:
            while(clean!=-1){
            printf("bathroom and kitchen cleaning : \n");
            printf("Enter 1 for bathroom cleaning\n2 for kitchen cleaning\n");
            scanf("%d",&clean);
            
            switch(clean){
                case -1:
                break;
                case 1:
                printf("\nbathroom cleaning is at Rs.400\n");
                printf("To add it in cart press 1\n");
                scanf ("%d",&n);
                if(n==1){
                    head =add_to_cart(head,"bathroom cleaning",400);
                }
                break;
                case 2:
                printf("kitchen cleaning at Rs.1060");
                printf("To add it in cart press 1\n");
                scanf("%d",&n);
                if(n==1){
                    head =add_to_cart(head,"Kitchen cleaning",1060);
                }
                break;
                
                default:printf("Wrong value entered");
                break;
            }
                printf("\npress -1 to go back\n");
            }
            break;
            
            case 2:
            printf("coakroach,Ant and General pest control at Rs.1200\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"General pest",1200);
            }
            break;
            
            case 3:
            printf("full home cleaning is at Rs.1450\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"full home cleaning",1450);
            }
            break;
            
            case 4:
            printf("sofa and carpet cleaning is at Rs.500\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"sofa and carpet cleaning",500);
            }
            break;
            
            case 5:
            printf("disinfection services is at Rs.1800\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"disinfection services",1800);
            }
            break;
            
            default:printf("Wrong value entered");
            break;
            
            }
        
        printf("To go back press-1");
       
        }
         break;
          //electrician
        case 5:
        
         while(jh!=-1){
        printf("\nEnter 1 for Appliances\n2 for switch and socket\n3 for fan\n4 for light\n5 for Mcb and fuse\n6 for inverter and stablizer\n7 for wiring\n");
        scanf("%d",&jh);
        switch(jh){
            case -1:
            break;
            
            case 1:
            while(appliance!=-1){
            printf("Enter 1 for full body waxing\n2 for leg waxing\n3 for back waxing\n");
            scanf("%d",&appliance); 
            switch(appliance){
                case -1:
                break;
                case 1:
                printf("\nFull body waxing is at Rs.949\n");
                printf("To add it in cart press 1\n");
                scanf ("%d",&n);
                if(n==1){
                    head =add_to_cart(head,"fullwax",949);
                }
                break;
                case 2:
                printf("Leg waxing is at Rs.249\n");
                printf("To add it in cart press 1\n");
                scanf("%d",&n);
                if(n==1){
                    head =add_to_cart(head,"legwax",249);
                }
                break;
                case 3:
                printf("Back waxing is at Rs.349\n");
                printf("To add it in cart press 1\n");
                scanf("%d",&n);
                if(n==1){
                    head=add_to_cart(head,"back_wax",249);
                }
                break;
                
                default:printf("Wrong value entered");
                break;
                
            }
            printf("\nto go back press -1\n");
            }
        break;
            case 2:
            printf("facial is at Rs.500\n");
            printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"facial",500);
            }
        break; 
        
          case 3:
          printf("Manicure is at Rs.400\n");
          printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"manicure",400);
            }
            break;
            
        case 4:
        printf("pedicure is at Rs.500\n");
         printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"pedicure",500);
            }
            break;
            
        case 5:
        printf("Threading is at Rs.50\n");
         printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"threading",50);
            }
            break;
            
        case 6:
         printf("Bleach and detan is at Rs.600\n");
         printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"Bleach and detan",600);
            }
            break;
            
        case 7:
         printf("hair care is at Rs.400\n");
         printf("To add it to cart press 1\n");
            scanf("%d",&n);
            if(n==1){
                head =add_to_cart(head,"hair care",400);
            }
            break;
            
        default:printf("Wrong value entered\n");
            
        
          }
        
        
        printf("\nTo go back press -1");
        }
        break;
        
        
    
}

    }
    
    
return 0;
}



