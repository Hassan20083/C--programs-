#include<iostream>   //Header files. Input output stream.
#include<conio.h>    
#include<cmath>     // for Use the mathematical functions.
using namespace std;  //  Call the funtion to the standard libraby.
int main ()          //  FUntion main.
//    Body of the program.
{
	//  Variable declarations.
	//  int type and double type.
 int Number;
 int Number1;
 int Number2;
 int Number3;
 int Number4;
 int a,b;
 // Double type variable decleration...
 double a1,b1;
 int result;
 double result1;	
       
 	//  // for clear the screen..  
 	
 	system("cls");
 cout<<"          ************************ WELCOME  *************************"<<endl;
 cout<<"          ***********************  TO  THE   ************************"<<endl;
 cout<<"          ***************** SCIENTIFIC  CALCULATOR ******************"<<endl;
 cout<<"          ****************  Press any key to start ******************"<<endl;
 cout<<"          ***********************************************************"<<endl;
             // Usinf Do-While loop.
             // The hole code of calculator written after the Do ...
 do
 {        
 getch();    
 system("cls");
 cout<<"         ****************** SCIENTIFIC CALCULATOR ******************"<<endl;
cout<<endl;
 cout<<"    **************************************************************************"<<endl;
 cout<<"    *      [Press (1) For:   Arithmetic Operations.]                         *"<<endl;    
 cout<<"    *      [Press (2) For:   Trigonometric Functions.]                       *"<<endl;
 cout<<"    *      [Press (3) For:   Logarithmic Functions.]                         *"<<endl;
 cout<<"    *      [Press (4) For:   Power Functions.......]                         *"<<endl;     
 cout<<"    *      [Press (5) For:   Exit..................]                         *"<<endl;
 cout<<"    **************************************************************************"<<endl;
 cout<<endl;
 cout<<"Enter your choice=";
 
           // Take an integer from user.
           
 cin>>Number;
 // IF number is greater than 5 show an invalid option.
 if (Number>5)
 {
 	cout<<"**********************************************************************"<<endl;
 	cout<<"*               **********   INVALID OPTION   **********             *"<<endl;
 	cout<<"**********************************************************************"<<endl;
 	cout<<endl;
 	cout<<"             *[.Please select the above (5) option.]*"<<endl;
 	cout<<"             ****************************************";
 }
          //   Using Nested Switch statement .
		  	
 switch(Number)
 {              //     If Users Press one the following case run..
         case 1:
  
  {       
          system("cls");
          cout<<" ********************* SCIENTIFIC CALCULATOR ***********************"<<endl;
          cout<<"          ******************************************"<<endl;
          cout<<"          *       Press (1) : Addition             *"<<endl;
          cout<<"          *       Press (2) : Subtraction          *"<<endl;
          cout<<"          *       Press (3) : Multipilication      *"<<endl;    
          cout<<"          *       Press (4) : Division             *"<<endl;
          cout<<"          ******************************************"<<endl;
          cout<<endl;
          cout<<"Enter your choice=";
          // Run time value...
          cin>>Number1;
          //  // IF number1 is greater than 4 show an invalid option.
          if (Number1>4)
          {
          	cout<<"**********************************************************************"<<endl;
 	        cout<<"*               **********   INVALID OPTION   **********             *"<<endl;
 	        cout<<"**********************************************************************"<<endl;
 	
		  }
          //  Case 1 has its own inner switch .....
             switch(Number1)
              {
              	 // If user press 1.
         case 1:
  {
          cout<<"\n\nEnter first number=";
          // Run time value.
          cin>>a;
          cout<<"Enter an other number=";
          // Run time value.
          cin>>b;
          //  Intialization.....
          result=a+b;
          cout<<"\n Sum of"<<" "<<a<<"+"<<b<<"="<<result<<endl;
          
          //  Break the case....
          break;
  }                   // IF user press 2.
         case 2:
  {
          cout<<"\n\nEnter first number=";
          // Run time value.
          cin>>a;
          cout<<"Enter an other number=";
          // Run time value.
          cin>>b;
          // Initialization.....
          result=a-b;
          // Results print on the screen...
          cout<<"\n Subtraction of"<<" "<<a<<"-"<<b<<"="<<result<<endl;
          // Break the following case...
          break;
  }
        // IF user press 3...
         case 3:
  {
          cout<<"\n\nEnter first number=";
          // Run time value.
          cin>>a;
          cout<<"Enter an other number=";
          // Run time value.
          cin>>b;
          // Intialization...
          result=a*b;
          cout<<"\nMultiplication of"<<" "<<a<<"x"<<b<<"="<<result<<endl;
          // End the Case 3.........
          break;
  }
                 // IF user press 4...
          case 4:           
 {
          cout<<"\n\nEnter first number=";
          // Run time value.
          cin>>a;
          cout<<"Enter an other number=";
          // Run time value.
          cin>>b;
        
       
         result1=a/b;
         cout<<"\nDivision of"<<" "<<a<<"/"<<b<<"="<<result1<<endl;
        
         break;
 }
}       // end of inner switch
         break;
     }  // end of case 1 arithmatic operation
           // IF user press 2......
         case 2:
         {
         	
          system("cls");
          cout<<" ********************* SCIENTIFIC CALCULATOR ***********************"<<endl;
          cout<<"              ******************************************"<<endl;
          cout<<"              *       Press (1) :  Sin function        *"<<endl;
          cout<<"              *       Press (2) :  Cos function        *"<<endl;    
          cout<<"              *       Press (3) :  Tan function        *"<<endl;
          cout<<"              ******************************************"<<endl;
          cout<<endl;
          cout<<"Enter your choice=";
          // Run time value.....
          cin>>Number2;
          // if Number2 is greater than 3 show a invalid option....
          if (Number2>3)
          {
          	cout<<"**********************************************************************"<<endl;
 	        cout<<"*               **********   INVALID OPTION   **********             *"<<endl;
 	        cout<<"**********************************************************************"<<endl;
 	
		  }
          
          // Case 2 has its own switch statement..
          switch(Number2)
          {
          	// IF user press 1...
           case 1:
          {
          cout<<"\n\n Enter a number=";
          cin>>a1;
          result1=(sin(a1));
          cout<<"\nSin of "<<a1<<" = "<<result1<<endl;
		  // Break the case 1..
         break;
     }
          // IF user press 2...
         case 2:
     {
         cout<<"\n\n Enter a number...";
         cin>>a1;
         // cos funtion....
         result1=(cos(a1));
         cout<<"\nCos of "<<a1<<" = "<<result1<<endl;
         // Break the case 2...
         break;
     }        
         // IF user press 3...
         case 3:
     {
         cout<<"\n\n Enter a number=";
         cin>>a1;
         // Tan funtion....
         result1=(tan(a1));
         cout<<"\nTan of "<<a1<<" = "<<result1<<endl;
          // BReak the case 3.....
         break;
   }
         }// inner switch
         break;
         }//inner case 2 trignomatic
         case 3:
         {
         	// For clear the screen ....
         system("cls");
         cout<<" ********************* SCIENTIFIC CALCULATOR ***********************"<<endl;
         cout<<"             *******************************************"<<endl;
          cout<<"            *       Press (1) :  Natural log          *"<<endl;
          cout<<"            *       Press (2) :  Log with base(10)    *"<<endl;    
          cout<<"            *******************************************"<<endl;
          cout<<endl;
          cout<<"Enter your choice....";
         // Run time value.
         cin>>Number3;
          // IF number is greater than 2 show an invalid option.
         if (Number3>2)
          {
          	cout<<"**********************************************************************"<<endl;
 	        cout<<"*               **********   INVALID OPTION   **********             *"<<endl;
 	        cout<<"**********************************************************************"<<endl;
 	
		  }
          
         // Case 3 has its own innner switch..
         switch(Number3)
        {
        	// If user press 1.
        case 1:
        {
         cout<<"\n\n Enter a number...";
         cin>>a1;
         // Log Function......
         result1=log(a1);
         cout<<"\nLog of"<<a1<<" = "<<result1<<endl;
         // For break the case.
         break;
   }     //  IF user press 2.
         case 2:
         {
         cout<<"\n\n Enter a number...";
         cin>>a1;
         // Log with BAse ten function......
         result1= log10(a1);
         cout<<"\nLOg with base ten ("<<a1<<") = "<<result1<<endl;
         break;
     }
           }// end of switch 
           break;
         }// end of case 3 logrithmic
         case 4:
         {
             system("cls");
             cout<<" ********************* SCIENTIFIC CALCULATOR ***********************"<<endl;
          cout<<"             ****************************************"<<endl;
          cout<<"             *       Press (1) :  Power functions   *"<<endl;
          cout<<"             *       Press (2) :  Square root       *"<<endl;    
          cout<<"             ****************************************"<<endl;
          cout<<endl;
          cout<<"Enter your choice=";
          // Run time value.
          cin>>Number4;
           // IF number is greater than 2 show an invalid option.
          if (Number4>2)
          {
          	cout<<"**********************************************************************"<<endl;
 	        cout<<"*               **********   INVALID OPTION   **********             *"<<endl;
 	        cout<<"**********************************************************************"<<endl;
 	
		  }
          // Case 4 has its own inner switch.....
          switch(Number4)
         {
          case 1:
          { 
           cout<<"\n\nEnter a number...";
           // Run time value.
           cin>>a1;
           cout<<"Enter power...";
           // Run time value.
           cin>>b1;
           // Pwer function...
           result1=pow(a1,b1);
           cout<<"\nResult = "<<result1<<endl;
           break;
       }    
           //  IF user press 2.
          case 2:
          {
           cout<<"\n\nEnter a number...";
           // Run time value.
           cin>>a;
          // intialization.
           result1=sqrt(a);
           cout<<"\n\nResult = "<<result1<<endl;
           break;
     }

    }// end of switch
           break;
         }// end of case power function
         
  }// outer switch
  
}
      // if User press 5.....
     // THE body after the while condition has been run.....

     
      while (Number!=5);	
	  
      //  cls for clear the screen;
      system("cls");
      cout<<"     ***********************************************************************"<<endl;
      cout<<"     *     ************ THANKS FOR USING THIS CALCULATOR *********         *"<<endl;
      cout<<"     *                                                                     *"<<endl;
      cout<<"     *       ******************* ALLAH HAFIZ ********************          *"<<endl;
      cout<<"     ***********************************************************************"<<endl;
      cout<<endl;
      cout<<endl;
      // for clear the screen ..
      
      system("cls");
      cout<<"***********************************************************************"<<endl;
      cout<<"************   IF you want to restart Then Press (Y/y)   **************"<<endl;
      cout<<"*                                                                     *"<<endl;
      cout<<"*      **************     Otherwise Press (N/n)    ************       *"<<endl;
      cout<<"***********************************************************************"<<endl;
      cout<<endl;
      cout<<"Enter Your choice and press Enter=";
      // Decleration of char...type.
      char K;
      //Get character..
      cin>>K;
      // Use if else statement for condition...
      //if user press y/Y then restrat the calculator...
      if (K=='y')
      {
      	//   Call the main Function For re use the calculator....
      	cout<<main();
      	
	  }
	  else if (K=='Y')
	  {
	  	//   Call the main Function For re use the calculator....
	  	cout<<main();
	  	
	  }
	  // At this condition if user press n then function has stoped....
	  else if (K=='n')
	  {
	  	// For clear the above screen..
	  	system("cls");
      cout<<"     ***********************************************************************"<<endl;
      cout<<"     *     ************ THANKS FOR USING THIS CALCULATOR *********         *"<<endl;
      cout<<"     *                                                                     *"<<endl;
      cout<<"     *       ******************* ALLAH HAFIZ ********************          *"<<endl;
      cout<<"     ***********************************************************************"<<endl;
      
	  	// for turn off the program..
	  	return 0;
	  }
	  // At this condition if user press n then function has stoped....
	  else if (K=='N')
	  {
	  	// For clear the above screen..
	  	system("cls");
      cout<<"     ***********************************************************************"<<endl;
      cout<<"     *     ************ THANKS FOR USING THIS CALCULATOR *********         *"<<endl;
      cout<<"     *                                                                     *"<<endl;
      cout<<"     *       ******************* ALLAH HAFIZ ********************          *"<<endl;
      cout<<"     ***********************************************************************"<<endl;
      
	  	// for turn off the program..
	  	return 0;
	  }
	  else 
	  {
	  	cout<<endl;
	  	cout<<endl;
	    	cout<<"\n\n**********************************************************************"<<endl;
 	        cout<<"\n\n*               **********   INVALID OPTION   **********             *"<<endl;
 	        cout<<"\n\n**********************************************************************"<<endl;
 	        
	  }
	
	  // Press any key an then turn off the program....
    getch();
    
}
