#include<iostream>
#include<fstream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<cstring>
#include<stdlib.h>
#include<stack>
using namespace std;

int cars();

void Toyota()
{
	char typ_cars[] = {'h' , 'c'};
	int re;
	do
	{ 
		t:
		return2:
	cout<<"\t\t\t\t\t\t * * Toyota Companie * * \n";
	cout<<"\t\t\t\t\t   * Avaliable Cars From Toyota Are * :\n";
	cout<<"h) Toyota Hilux 2022 \n";
	cout<<"c) Toyota Camry 2022 \n";
	cout<<"Please Press 'h' If You Want ''Hilux' OR Press 'c' If You Want 'Camry': \n";
	cin>>typ_cars[0];
		system("CLS");

	
	if(typ_cars[0]=='h')
{
	cout<<"\n\t\t\t\t* * * Specifications Of Hilux 2022: * * * \n"; 
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cout<<"\t\t | Structure Type :---------------------------|        Transfer| \n";
    cout<<"\t\t | Payment System :---------------------------|    Back Payment| \n";
    cout<<"\t\t | Engine Type :------------------------------|          Diesel| \n"; 
    cout<<"\t\t | Number Of Horses :-------------------------|      147 Horses| \n" ;
    cout<<"\t\t | Gear Type :--------------------------------|          Normal| \n"; 
    cout<<"\t\t _______________________________________________________________ \n\n";
    cout<<"\t\t | Price Including Tax Is :-------------------|      83,599 SAR| \n" ; 
    cout<<"\t\t _______________________________________________________________ \n\n";
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cout<<"\t\t   - Enter Number 0 To Return Into The <--Page...\n \t\t   - OR Press Any Number To Finish The Program. \n";
    cout<<"\t\t   - To Return To The 'Available Car Page' Press Number '1' \n";
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cin>>re;
    if(re==0)
    {	   
	system("CLS");
      goto return2;
	}
    else if(re==1)
    {       		
	 system("CLS");
     cars();
	}
    else
    {
    		 system("CLS");
    	cout<<"\t\t\t\t\t (The Program Has Been Completed.) \a\n\n";
        exit(0);
	}
    
}
    else if(typ_cars[0]=='c')
    {
    cout<<"\n\t\t\t\t* * * Specifications Of Camry 2022: * * * \n"; 
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cout<<"\t\t | Structure Type :---------------------------|         Sedan| \n";
    cout<<"\t\t | Payment System :---------------------------| Front Payment| \n";
    cout<<"\t\t | Engine Type :------------------------------|        Petrol| \n"; 
    cout<<"\t\t | Number Of Horses :-------------------------|    204 Horses| \n" ;
    cout<<"\t\t | Gear Type :--------------------------------|     Automatic| \n"; 
    cout<<"\t\t _____________________________________________________________ \n\n";
    cout<<"\t\t | Price Including Tax Is :-------------------|   100,999 SAR| \n" ; 
    cout<<"\t\t _____________________________________________________________ \n\n";
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cout<<"\t\t   - Enter Number 0 To Return Into The <--Page...\n \t\t   - OR Press Any Number To Finish The Program. \n";
    cout<<"\t\t   - To Return To The 'Available Car Page' Press Number '1' \n";
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cin>>re;
    if(re==0)
    {	   
	  system("CLS");
      goto return2;
	}    
	else if(re==1)
    {       		
	 system("CLS");
     cars();
	}    
	else
    {
    	 system("CLS");
    	cout<<"\t\t\t\t\t (The Program Has Been Completed.) \a\n\n";
        exit(0);
	} 
	   	
	}
	else
	{
		cout<<"\t\t\t\t\t\t Invalid Choice...!\n";
		cout<<"\t\t\t\t\t\t Try Agien...!:\n\n";
		goto t;
		
	}
	 
} while(typ_cars[0]=='h' || typ_cars[0]=='c');
	
system("CLS");
}

void Hyundai()
{
	char typ_cars[] = {'e' , 'a'};
	int re;
	do
	{
		return1:
	cout<<"\n\t\t\t\t\t\t* * Hyundai Companie * * \n";
	cout<<"\t\t\t\t\t   * Avaliable Cars From Hyundai Are * :\n";
	cout<<"e) Hyundai Elantra 2023 \n";
	cout<<"a) Hyundai Azera MID 2023 \n";
	cout<<"Please Press 'e' If You Want ''Elantra' OR Press 'a' If You Want 'Azera': \n";
	cin>>typ_cars[0];
		 system("CLS");

	
	if(typ_cars[0]=='e')
{
	cout<<"\n\t\t\t\t* * * Specifications Of Elantra 2023: * * * \n"; 
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cout<<"\t\t | Structure Type :---------------------------|           Sedan| \n";
    cout<<"\t\t | Payment System :---------------------------|   Front Payment| \n";
    cout<<"\t\t | Engine Type :------------------------------|          Petrol| \n"; 
    cout<<"\t\t | Number Of Horses :-------------------------|      127 Horses| \n" ;
    cout<<"\t\t | Gear Type :--------------------------------|       Automatic| \n"; 
    cout<<"\t\t _______________________________________________________________ \n\n";
    cout<<"\t\t | Price Including Tax Is :-------------------|      81,398 SAR| \n" ; 
    cout<<"\t\t _______________________________________________________________ \n\n";
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cout<<"\t\t   - Enter Number 0 To Return Into The <--Page...\n \t\t   - OR Press Any Number To Finish The Program. \n";
    cout<<"\t\t   - To Return To The 'Available Car Page' Press Number '1' \n";
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cin>>re;
    if(re==0)
    {
   	 system("CLS");
     goto return1;
	}
    else if(re==1)
    {       		
	 system("CLS");
     cars();
	}
	else
    {
    		 system("CLS");
    	cout<<"\t\t\t\t\t (The Program Has Been Completed.) \a\n\n";
        exit(0);
	}
    
    
}
    else if(typ_cars[0]=='a')
    {
    cout<<"\n\t\t\t\t* * * Specifications Of Azera MID 2023: * * * \n"; 
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cout<<"\t\t | Structure Type :---------------------------|         Sedan| \n";
    cout<<"\t\t | Payment System :---------------------------| Front Payment| \n";
    cout<<"\t\t | Engine Type :------------------------------|        Petrol| \n"; 
    cout<<"\t\t | Number Of Horses :-------------------------|    290 Horses| \n" ;
    cout<<"\t\t | Gear Type :--------------------------------|     Automatic| \n"; 
    cout<<"\t\t _____________________________________________________________ \n\n";
    cout<<"\t\t | Price Including Tax Is :-------------------|   149,599 SAR| \n" ; 
    cout<<"\t\t _____________________________________________________________ \n\n";
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cout<<"\t\t   - Enter Number 0 To Return Into The <--Page...\n \t\t   - OR Press Any Number To Finish The Program. \n";
    cout<<"\t\t   - To Return To The 'Available Car Page' Press Number '1' \n";
    cout<<"\t\t /////////////////////////////////////////////////////////////////\n";
    cin>>re;
    if(re==0)
    {
     system("CLS");
     goto return1;
	}
    else if(re==1)
    {       		
	 system("CLS");
     cars();
	}
	else
    {
    		 system("CLS");
    	cout<<"\t\t\t\t\t (The Program Has Been Completed.) \a\n\n";
        exit(0);
	}
    
    	
	}

} while(typ_cars[0]=='e' || typ_cars[0]=='a');
system("CLS");

}

main()
{
	return3:
	int ch;
	
	cout<<"\t\t\t\t\t   * * * Welcome To Our Car Show * * * \n";
	do
	{
		b:
		start:
	cout<<"#Our Services:\n";
	cout<<"1) Avaliable Cars Companies\n";
	cout<<"2) Our Branches\n";
	cout<<"3) Customer Service\n";
	cout<<"4) Exit\n";
	cout<<"\nPlease Pick Your Choice: \n";
	cin>>ch;
		system("CLS");

	
	if(ch==1)
	  //cars();
	  {
	  	int ch2;
	cout<<"\t\t\t\t\t * * * The Avaliable Cars Companies: * * * \n";
	cout<<"1) Toyota\n";
	cout<<"2) Hyundai\n";
	//cout<<"3) Mercedes\n";
	cout<<"3) Get Back To The Main Bage\n";
	cout<<"\nPlease Pick Your Choice: \n";
	cin>>ch2;
		system("CLS");

	
	if(ch2==1)
	 Toyota();
	
	else if(ch2==2)
	Hyundai();
	
//	else if(ch2==3)
   //Mercedes();
   
   else if(ch2==3)
   goto return3;
   
   
   	else
   	{
		cout<<"\t\t\t\t\t\t Invalid Choice...!\n";
		cout<<"\t\t\t\t\t\t Try Agien...!:\n";
		goto return3;
	}
	
	  }
	
	else if(ch==2)
	{   
	    q:
		cout<<"\n|---- KSA-Jeddah-Sari Street-Al Rawda District----|\n|----Avaliable From Sunday To Saturday----|\n";
		cout<<"\n|---- KSA-Jeddah-Prince Muhammed Bin Abdul Aziz Street-Al Rehab District----|\n|----Avaliable From Sunday To Saturday----|\n";
		int r;
		cout<<"\n- Enter Number 0 To Return Into The <--Page...\n";
		cin>>r;
		 system("CLS");

		if(r==0)
		goto b;
		else
		{
			cout<<"Erorr\n";
	    	cout<<"Try Again\n";
	     	goto q;
		}
		
	}
	
	
	else if(ch==3)
	{
		w:
		cout<<"To Contact Us, Contact Us On:\n";
		cout<<"- S.T. 1010032265.\n- Online S.T.1010654213.\n- Tax Number.3000562895000\n";
		cout<<"\n- Enter Number 0 To Return Into The <--Page...\n";
		int r;
		cin>>r;
		 system("CLS");

		if(r==0)
		goto b;
		else
		{
			cout<<"Erorr\n";
	    	cout<<"Try Again\n\n";
		    goto w;
		}
		
	}
	
	else if(ch==4)
	{
		cout<<"\t\t\t\t\t (The Program Has Been Completed.) \n\n";
		exit(0);
	}
	else
	{
			 system("CLS");
		cout<<"\t\t\t\t\t\t Invalid Choice...!\n";
		cout<<"\t\t\t\t\t\t ^^If You Want To Exit, Enter (4)^^.\n";
		cout<<"\t\t\t\t\t\t Try Agien...!:\n";
		goto start;
	}
	
}while(ch<1 && ch<2 && ch<3);
return 0;
}


int cars()

{ 
	int ch2;
	start:
	cout<<"\t\t\t\t\t   * * * The Avaliable Cars Companies: * * * \n";
	cout<<"1) Toyota\n";
	cout<<"2) Hyundai\n";
	cout<<"3) Get Back To The Main Bage\n";
	//cout<<"3) Mercedes\n";
	cout<<"\nPlease Pick Your Choice: \n";
	cin>>ch2;    		
	 system("CLS");
	
	
	if(ch2==1)
	 Toyota();
	
	else if(ch2==2)
	Hyundai();
	
	else if(ch2==3)
	main();
	
  //else if(ch2==3)
   //Mercedes();
   	else
	{
		cout<<"\t\t\t\t\t\t Invalid Choice...!\n";
		cout<<"\t\t\t\t\t\t Try Agien...!:\n";
		goto start;
	}
}