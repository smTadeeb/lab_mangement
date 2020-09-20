#include<iostream>                                                    // Basic input-output system.
#include<map>                                                        // Importing this to use map(dictionary).
#include<windows.h>                                                 // Importing this to change color of console.
using namespace std;                                               // Using standard library in our program.

class helpline_team
{	
    public:                                                        //////////////////////////////////////////////////////////////////////////////////
    helpline_team()                                               // Using constructor just in case if garbage value comes our system wont crash. //
    {                                                            //////////////////////////////////////////////////////////////////////////////////
		cout<<"\n\n\t\t\t\t\t\t Log-in \n\n";                   
	}                                                          
	~helpline_team()
	{} 	                                                /////////////////////////////////////////////////////////////////////////////////////////////
    private:	                                               // Making private access as we dot want to give info about username and password to anyone.//
    void check()                                              // Defing private method to check valid users of lab                                       //
    	{                                                    //                                                                                         //
    	int svr;                                            // Defining member-variables and their datatypes.                                          //
    	string userName;                                   /////////////////////////////////////////////////////////////////////////////////////////////
        string userPassword;
        int loginAttempt = 0;                             ///////////////////////////////////////////////////////////////////////
        while (loginAttempt < 2)                         // Using while-loop as we don't know how many times user will retry. //
        {                                               ///////////////////////////////////////////////////////////////////////
        cout<<"\n Please enter your user name: ";
        cin>>userName;
        cout<<"\n Please enter your user password: ";
        cin>>userPassword;                                                         /////////////////////////////////
        if (userName == "Tadeeb" && userPassword == "T@covid19")                  // Using iterators to check.   //
        {                                                                        //                             //
        cout<<"\n\n\n\t\t\t\t\t\t Welcome Tadeeb!\n";                           // Showing message on console. //  
        break;                                                                 // Using break if it gets true.// 
        }                                                                     // Using same process below.   //
        else if (userName == "Nipun" && userPassword == "N@covid19")         /////////////////////////////////
        {
        cout<<"\n\n\n\t\t\t\t\t\t Welcome Nipun!\n";
        break;
        }
        else
        {
        cout<<"\n\n Invalid login attempt. Please try again.\n" << '\n';
        loginAttempt++;
        }
        }
        // This if just to check user attempts and is outside of if-else ladder.
        if (loginAttempt == 2)
        {
        cout << "\n\t\t\t\tToo many login attempts! Sorry try after 10 minutes.";
        exit(0);
        }
// new part of iteration inside check method begins from here
 cout<<"\n\n Use the intensity number mentioned below to get information about different labs\n\
 (3 for high)\n\
 (2 for medium)\n\
 (1 for low)\n\n\
 Enter the number to know the details = ";                                                     //////////////////////////////////
	    cin>>svr;                                                                         // Taking user-input.           // 
        if (svr==1)                                                                          // Iteration begins from here.  // 
        {                                                                                   //////////////////////////////////
        cout<<"\n\n This lab check patients with low intensity symptoms.\n\
 Lab Name: Ayur Tests.\n\
 Location: Freeganj Ujjain (M.P).\n\
 capacity: 40";
        }
        else if (svr==2)
        {
        cout<<"\n\n This is your lab which checks patient with medium symptoms.\n\
 Lab Name: Sanjeevni Lab.\n\
 Location: Ring road Ujjain (M.P).\n\
 capacity: 60";
        }
        else if (svr==3)
        {
      	cout<<"\n\n This lab checks patient with High symptoms.\n\
 Lab Name: Bhagwati diagnostics.\n\
 Location: Main road Ujjain (M.P).\n\
 capacity: 72";
        }
        else
        {
        cout<<"\n False input given";	
        }
        }	                                                                   ///////////////////////////////////////////////////////////////////////////////
    protected:	                                                                  // Defining protected inside same class so as to access its private methods. //
		int A_total_patients,B_total_patients,C_total_patients;          // Defining variables and data-types.                                        // 
		void call()                                                     // Defining method to call private access methods.                           //
		{                                                              //                                                                           //
			check();                                              // Private method.                                                           //
		}                                                            //                                                                           //
	    void data_frm_ht()                                              // Making another method for taking predefined data from help_line team.     //
		{                                                          //                                                                           //
	 	 A_total_patients = 80;                                   // Fixed values                                                              //
		 B_total_patients = 40;                                  ///////////////////////////////////////////////////////////////////////////////
		 C_total_patients = 60;                                
	    }                                                      
};                                                             
class patient_info : protected helpline_team                // Making help_line team class protected for all other classes as we want its data safest.
{
	public:
		// Destructor for clearing memory space.
		~patient_info()
		{}
	public:                                                                                 ////////////////////////////////////
	    void display_info()                                                                // Defing Public method           //
	    {                                                                                 // Calling all methods inside it. //
	    call();                                                                          ////////////////////////////////////
		data_frm_ht();
		cout<<"\n\n\n Total number of patients coming to the different labs are\n\
 \n lab Ayur Tests:- "<<A_total_patients;
		cout<<"\n Sanjeevni Lab.:- "<<B_total_patients;
		cout<<"\n Bhagwati diagnostics:- "<<C_total_patients;
		timeSlots();
		call_1();
	    }
    // Abstraction & Encapsulation                                                     ////////////////////////////////////////////////////////////
	private:                                                                      // Using private access specifier so main cant access it. // 
		string name,f_name,city,s_name,time;                                 // Defining private variables and their datatypes.        //
		long double age,ph_num,h_num;                                       //                                                        //
		float DNA_enzyme,RNA_enzyme,nucleotide;                            //                                                        //
		void registration()                                               // Defining a method for registeration of end users.      //
		{                                                                //                                                        //
			cout<<"\n\n\n\t\t\t\t\t\t Patient registration forum."; // Displaying message on console.                         //
			cout<<"\n\n\n Enter your name: ";                      //                                                        //
			cin>>name;                                            // Taking user input                                      //
			cout<<"\n Enter your fathers name: ";                //////////////////////////////////////////////////////////// 
			cin>>f_name;                                   
			cout<<"\n Enter your age: ";                     
			cin>>age;                                      
			cout<<"\n Enter your phone number: ";          
			cin>>ph_num;                                  
			cout<<"\n Enter your house number: ";          
			cin>>h_num;                                   
			cout<<"\n Enter your city name: ";            
			cin>>city;                                  
			cout<<"\n Enter your state name: ";       
			cin>>s_name;                              
			cout<<"\n Time alloted to you: ";        
			cin>>time;
			cout<<"\n Test: For Covid-Sars-19, Kindly submit Rs 2500/- to the counter desk";
		}                                                                                      ///////////////////////////////////////////////////////////////////////
		void test()                                                                           // Defining another method for testing patient sample inside private.//
		{                                                                                    //                                                                   //
			float fluroscense = 15.6;                                                   // Taking predefined valuea and binding it with below formula.       //
			cout<<"\n\n\n\n\t\t\t\t\t\t Lab, Test in progress";                        //                                                                   //
			cout<<"\n\n\n\n Enter patient DNA enzyme %: ";                            //  Taking user inputs.                                              //
			cin>>DNA_enzyme;                                                         //                                                                   //
			cout<<"\n Enter patient RNA enzyme %: ";                                ///////////////////////////////////////////////////////////////////////
			cin>>RNA_enzyme;
			cout<<"\n Enter patient Nucleotide level: ";
			cin>>nucleotide;
	        cout<<"\n\n Fluroscense % in sample: "<<(3*DNA_enzyme/RNA_enzyme)-nucleotide<<" %\n";     ///////////////////////////////////////////////////////////
		    if (fluroscense == (3*DNA_enzyme/RNA_enzyme)-nucleotide)                             // Using iterator and data-binding i.e. Encapsulation.   //  
		    {                                                                                   //                                                       //
		    	cout<<"\n Unable to identify, needs COVID-SARS_virus Retest";                  // Displaying output                                     //
			}                                                                             ///////////////////////////////////////////////////////////
			else if (fluroscense >= (3*DNA_enzyme/RNA_enzyme)-nucleotide)
			{
		    	cout<<"\n\n Patient is NEGATIVE";
			}
		    else if (fluroscense <= (3*DNA_enzyme/RNA_enzyme)-nucleotide)            
			{
		    	cout<<"\n Patient is POSITIVE";                                                         ////////////////////////////////////////////
		        if ((3*DNA_enzyme/RNA_enzyme)-nucleotide > 90.6 )                                      // Using iterator inside iterator ladder. //
			    {                                                                                 //                                        //
				cout<<"\n\n Patient is highly impacted with COVID-19";                       // Displaying message on console.         //
		        	string a,b;                                                                 // Defining datatypes.                    //
		        	a = "City Lab";                                                            // Giving predefined values.              //
	                b = "Sanjeevni Lab";                                                              //                                        //
					string *x=&a,*y=&b,t;                                            // Defining pointers.                     //
					t = *x;                                                         //                                        //
					*x = *y;                                                       // Swappin.                               //
					*y = t;                                                       //////////////////////////////////////////// 
					cout<<"\n\n Our lab treats moderate patients, You can refer to: "<<b; 		
			    }
			}
		}                                                                           ////////////////////////////////////////////////////
	protected:                                                                         // Partial Abstraction                            //
	    void timeSlots()                                                              // Method for showing time-slots.                 // 
		{                                                                        //                                                // 
			string morning[4] = {"9-10AM","10-11AM","11-12noon","12-1PM"};  // Using Array to pack all in one variable.       //
			string evening[4] = {"2-3PM","3-4PM","4-5PM","5-6PM"};	       //                                                //
		}	                                                              //                                                //
		void call_1()                                                        // Using method just for calling private methods. //  
		{                                                                   //                                                //
			registration();                                            // calling private method inside same class.      //
			test();                                                   ////////////////////////////////////////////////////
		}		                                                       
};                                                            ////////////////////////////////////////////////////////////////////////////////////////////////
class lab_info : public patient_info                         // Using Multilevel-Inheritance as we want data flow from each preceding class to next class. // 
{                                                           //                                                                                            //
	public:                                            // Making access as public so as to call its method in main.                                  //
		void display_info()                       // Method to call another method from protected access specifier inside this same class.      // 
		{                                        //                                                                                            //
			chemical();                     // Calling protected method.                                                                  //
		}                                      //                                                                                            //
		~lab_info()                           // Destructor for clearing memory space.                                                      //
		{}                                   //                                                                                            //
	protected:                                  // Partial Abstraction.                                                                       //
		void chemical()                    // Method for chemicals present in lab.                                                       //
		{		                  ////////////////////////////////////////////////////////////////////////////////////////////////
			string i;
			std::map< string , string > chem_list;                                    ////////////////////////////////////////////////////////////
			chem_list.insert(pair<string , string>("a","Acetaminophen (500 mL)"));   // Created Map(dictionary) with key value pair as string. //
			chem_list.insert(pair<string , string>("h","Haloperidol (300 mL)"));    // inserting pairs inside Map using insert and pair.      // 
			chem_list.insert(pair<string , string>("e","Esomeprazole (100 mL)"));  //                                                        //
			cout<<"\n\n\n\t\t\t\t\t Chemicals in lab";                            // Displaying message on console.                         // 
			cout<<"\n\n Enter an alphabet(a,h,e):-";                             //                                                        //
			cin>>i;                                                             // Taking user input.                                     //
			if (i == "a")                                                      // Using iterators to check and display value accordingly.//
			{                                                                 //                                                        //
			   cout<<"\n "<<chem_list["a"];                                  // Displaying values based on keys.                       // 
			}                                                               ////////////////////////////////////////////////////////////
			if (i == "h")                                                   
			{                                                             
			   cout<<"\n "<<chem_list["h"];                              
			}                                                           
			if (i == "e")                                              
			{                                                          
			   cout<<"\n "<<chem_list["e"];                           
			}                                                       
	        }
};                                                   ///////////////////////////////////////////////////////////////////////////////
int main()                                          // Code execution starts here.                                               //
{                                                  //                                                                           //
	system("Color C0");                       // Changing color of console screen.                                         //
	lab_info obj1;                           // Created object for derived class lab_info.                                //
	obj1.patient_info::display_info();      // Using compile time polymorphism (Method-overiding) using scope operator.  //
	obj1.display_info();                   // display_info method is present in both class having same signature.       // 
	return 0;                             // Execution stops here.                                                     //
}                                            ///////////////////////////////////////////////////////////////////////////////
       
    
        
        
