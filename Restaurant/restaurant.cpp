#include<iostream>

using namespace std;


main()
{
	int ch;
	float sum , pay , change;
	string ans;
	s:
	cout<<"\t\t\t\t\t\t\1 Smiley Taste Restaurant \2 \n";
	cout<<"\t\t\t\t\t\t--------------------------- \n\n";
	
	cout<<"\t\t\t\t # MENU:\n";
	cout<<"\t\t\t\t 1) Appetizers \n";
	cout<<"\t\t\t\t 2) Main Dishes \n";
	cout<<"\t\t\t\t 3) Beveraes \n";
	cout<<"\t\t\t\t 4) Desserts \n";
	cout<<"\t\t\t\t 5) Finish Ordering \n";
	cout<<"\n Please Pick Your Choice: \n";
		    cout<<"\t\t\t\t\t\t\t\t\t\t\t| Orderb Total Price = "<<sum<<" $|\n";
		    cout<<"\t\t\t\t\t\t\t\t\t\t\t-------------------------------\n";
    cin>>ch;
    
	switch(ch)
	{
		int order_num , order_qua ;
		
		case 1:
			int ch;
			system(("cls"));
			do
			{
			
			cout<<"\t\t |\t  | Hot Appetizers | \t\t   |\t | Cold Appetizers |\t\t|\n\t\t |\t  ------------------\t\t   |\t -------------------\t\t|\n";
    cout<<"\t\t | 1) Creamy Walnut Soup ___________10.12$ | 5) Veggie Pizza ____________13.99$ | \n";
    cout<<"\t\t | 2) Creamy Cauliflower Soup ______9.39$  | 6) Turkey Roll-ups _________11.89$ | \n";
    cout<<"\t\t | 3) Onion Rings With Cheese ______7.79$  | 7) Grape Poppers ___________13.49$ | \n"; 
    cout<<"\t\t | 4) Eggplant Rolls With Labneh ___12.45$ | 8) Picnic Egg Salad ________9.19$  | \n" ;
    cout<<"\t\t -------------------------------------------------------------------------------- \n";
    cout<<"\t\t \1 Please Choose The Number Of Appetizer you Want: ";
    cin>>order_num;
    if(order_num == 1)
    {
      cout<<"\t\t Choose The Order Quantity: ";
       cin>>order_qua;
       sum+=order_qua*10.12;
	}
	else if(order_num == 2)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*9.39;
	}
	else if(order_num == 3)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*7.79;
	}
	else if(order_num == 4)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*12.45;
	}
	else if(order_num == 5)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*13.99;
	}
	else if(order_num == 6)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*11.89;
	}
	else if(order_num == 7)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*13.49;
	}
	else if(order_num == 8)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*9.19;
	}
    cout<<"\n";
    cout<<"\t\t # Press 'Any Number' To Continue Ordering OR '0' To Back To The Menu <--\n";
    cin>>ch;
    system(("cls"));
    
    }while(ch !=0);
    goto s;
			break;
			
		case 2:
			system(("cls"));
			do
			{
			
			cout<<"\t\t\t\t |\t\t  | Main Dishes | \t\t   |\t \t\t\n\t\t\t \t |\t\t ------------------\t\t   |\t\t\t \n";
    cout<<"\t\t\t\t | 1) Braised Chicken Legs With Grabes_____29.18$  | \n";
    cout<<"\t\t\t\t | 2) Cedar-Plank Salmon __________________33.39$  | \n";
    cout<<"\t\t\t\t | 3) Grilled Pizza _______________________21.79$  | \n"; 
    cout<<"\t\t\t\t | 4) Double-Stack Mushroom And Chicken ___30.89$  | \n" ;
    cout<<"\t\t\t\t | 5) Spring Pasta: Broken Lasagna ________24.49$  | \n" ;
    cout<<"\t\t\t\t | 6) Habanero BBQ Shrimp _________________32.19$  | \n" ;
    cout<<"\t\t\t\t | 7) Classic Sole Meuniere _______________27.8$   | \n" ;

    cout<<"\t\t\t\t --------------------------------------------------- \n";
    cout<<"\t\t\t\t\1 Please Choose The Number Of Main Dishes you Want: ";
    cin>>order_num;
    if(order_num == 1)
    {
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
       cin>>order_qua;
       sum+=order_qua*29.18;
	}
	else if(order_num == 2)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*33.39;
	}
	else if(order_num == 3)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*21.79;
	}
	else if(order_num == 4)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*30.89;
	}
	else if(order_num == 5)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*24.49;
	}
	else if(order_num == 6)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*32.19;
	}
	else if(order_num == 7)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*27.8;
	}
	
    cout<<"\n";
    cout<<"\t\t\t\t# Press 'Any Number' To Continue Ordering OR '0' To Back To The Menu <--\n";
    cin>>ch;
    system(("cls"));
    
    }while(ch !=0);
    goto s;
		break;
		
		case 3:
			system(("cls"));
			do
			{
			
			cout<<"\t\t |\t   | Fresh Juices | \t      |\t     | Soft Drinks |\t     |\n\t\t |\t  ------------------\t      |     -----------------\t     |\n";
    cout<<"\t\t | 1) Mixed Fruit Juice _______4.21$  | 4) Soda _______________2.45$ | \n";
    cout<<"\t\t | 2) Orange Juice ____________2.10$  | 5) coca Cola __________4.39$ | \n";
    cout<<"\t\t | 3) Fresh Mango Juice _______3.59$  | 6) Apple Sprite _______4.30$ | \n"; 
    cout<<"\t\t --------------------------------------------------------------------- \n";
    cout<<"\t\t |\t   | Hot Coffee | \t      |\t     | Cold Coffee |  \t     |\n\t\t |\t  ----------------\t      |\t    -----------------\t     |\n";
    cout<<"\t\t | 7) Espersso _________________6.12$ | 10) Spanish Latte _____9.20$ | \n";
    cout<<"\t\t | 8) Hot Chocolate ____________8.30$ | 11) Caramel Macchiato_12.19$ | \n";
    cout<<"\t\t | 9) Cappuccino _______________7.10$ | 12) Frappuccino _______8.89$ | \n"; 
    cout<<"\t\t ---------------------------------------------------------------------\n";
    cout<<"\t\t \1 Please Choose The Number Of Beveraes you Want: ";
    cin>>order_num;
    if(order_num == 1)
    {
      cout<<"\t\t Choose The Order Quantity: ";
       cin>>order_qua;
       sum+=order_qua*4.21;
	}
	else if(order_num == 2)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*2.10;
	}
	else if(order_num == 3)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*3.59;
	}
	else if(order_num == 4)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*2.45;
	}
	else if(order_num == 5)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*4.39;
	}
	else if(order_num == 6)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*4.30;
	}
	else if(order_num == 7)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*6.12;
	}
	else if(order_num == 8)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*8.30;
	}
	else if(order_num == 9)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*7.10;
	}
	else if(order_num == 10)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*9.20;
	}
	else if(order_num ==11)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*12.19;
	}
	else if(order_num == 12)
	{
		cout<<"\t\t Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*8.89;
	}
    cout<<"\n";
    cout<<"\t\t # Press 'Any Number' To Continue Ordering OR '0' To Back To The Menu <--\n";
    cin>>ch;
    system(("cls"));
    
    }while(ch !=0);
    goto s;
			break;
			
			case 4: 
			system(("cls"));
			do
			{

			cout<<"\t\t\t\t |\t\t  | Desserts | \t\t      |\t \t\t\n\t\t\t \t |\t\t ---------------\t      |\t\t\t \n";
    cout<<"\t\t\t\t | 1) Strawberry Crunch Poke Cake _____30.19$ | \n";
    cout<<"\t\t\t\t | 2) Coffee Cookies'N'Ice Cream ______32.10$ | \n"; 
    cout<<"\t\t\t\t | 3) Triple-Chocolate Trifle _________29.79$ | \n" ;
	cout<<"\t\t\t\t | 4) Key Lime Pie Mousse _____________22.39$ | \n";
    cout<<"\t\t\t\t | 5) Espresso Cookies ________________16.22$ | \n" ;
    cout<<"\t\t\t\t | 6) Cheesecake Pops _________________19.70$ | \n" ;
    cout<<"\t\t\t\t | 7) Easy Blondise ___________________15.10$ | \n" ;

    cout<<"\t\t\t\t ---------------------------------------------- \n";
    cout<<"\t\t\t\t\1 Please Choose The Number Of Desserts you Want: ";
    cin>>order_num;
    if(order_num == 1)
    {
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
       cin>>order_qua;
       sum+=order_qua*30.19;
	}
	else if(order_num == 2)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*32.10;
	}
	else if(order_num == 3)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*29.79;
	}
	else if(order_num == 4)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*22.39;
	}
	else if(order_num == 5)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*16.22;
	}
	else if(order_num == 6)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*19.70;
	}
	else if(order_num == 7)
	{
      cout<<"\t\t\t\t  Choose The Order Quantity: ";
        cin>>order_qua;
       sum+=order_qua*15.10;
	}
	
    cout<<"\n";
    cout<<"\t\t\t\t# Press 'Any Number' To Continue Ordering OR '0' To Back To The Menu <--\n";
    cin>>ch;
    system(("cls"));
    
    }while(ch !=0);
    goto s;
		break;
		
		case 5: 
			system(("cls"));
	        cout<<"| Orderb Total Price = "<<sum<<" $|\n";
		    cout<<"------------------------------------\n";
	        cout<<"Paid Cash : ... $ ";
	        cin>>pay;
		    cout<<"------------------------------------\n";
		    change = pay-sum;
		    cout<<"Remaining Cash : "<<change<<" $\n";
		    cout<<"------------------------------------\n";
		    a:
		    cout<<"Do You Want Anything Else ? ";
		    cin>>ans;
		    cout<<"------------------------------------\n";
		    
		    if(ans == "yes")
		    {
				system(("cls"));
		    	goto s;
		    	sum=0;
			}
		    
		    else if(ans == "no")
		    {
			system(("cls"));
		   	cout<<"\t\t\t\t\t\tThank You For Visiting Our \n";
		    cout<<"\t\t\t\t\t\t---------------------------\n";
		    cout<<"\t\t\t\t\t\t\1 Smiley Taste Restaurant \2 \n";
	        cout<<"\t\t\t\t\t\t--------------------------- \n\n";	
			}
			else 
			{
			cout<<"NOT: yse / no \n";
			cout<<"------------------------------------\n";
			sum=0;
		    	goto a;
			}
		break;
		
		default	:
		system(("cls"));
		cout<<"\t\t\t\t\t\t Invalid Choice...!\n";
		cout<<"\t\t\t\t\t\t Try Agien...:\n";
		cout<<"------------------------------------------------------------------------------------------------------------------------\n";
	     	goto s;	
			 break;	
	}
}