#include<iostream>                                                   //input output system.
#include<map>                                                       //dictionary mapping used.                                                      
#include<windows.h>                                                //graphic integration and attributes function. 
#include<conio.h>                                                 //console opening.
#include <stdexcept>                                             //exceptional handling.
#include<fstream>                                               //file handler.
using namespace std;                                           

class helpline_team                                            //master class which is used to deliver data to sub classes.
{	
    public:                                                     //access specifier.
    helpline_team(){}                                           //constructor and destructor.               
	~helpline_team(){} 	                                                        
    private:	                                               
    void check()                                                //private method used for login access.
    	{                                                   
    	int svr;                                           
    	string userName,userPassword="";                       //password masking using char and string.
    	char pw =' ';
        int loginAttempt = 0;                           
        while (loginAttempt < 2)                              //looping to start again if incorrect password or username entered with limit. 
        {                                               
        cout<<"\n Please enter your user name: ";
        cin>>userName;
        cout<<"\n Please enter your user password: ";
	     	while(pw!=13)
	    {
		pw = getch();
		if(pw!=13)
		{
		userPassword +=pw;
		cout<<"*";                                                //masking or encryption of original password into a symbol. 
        }
        }
        if ((userName == "Tadeeb" || userName == "Nipun") && (userPassword == "T@covid19" || userPassword == "N@covid19"))                  
        {                                                                       
		cout<<"\n\n\n\t\t\t\t\t\t Welcome "<<userName<<" "<<"!\n";                          //username and password.
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
  while(loginAttempt<100)   
    {
    	cout<<"\n\n Use the intensity number mentioned below to get information about different labs\n\
 (3 for high)\n\
 (2 for medium)\n\
 (1 for low)\n\n\
 Enter the number to know the details = ";                                         
	    cin>>svr;                                                                             
        if (svr==1)                                                           // chencking the testing level of lab with if-else conditions.               
        {                                                                     // looping back using while if invalid input given.             
        cout<<"\n\n This lab check patients with low intensity symptoms.\n\
 Lab Name: Ayur Tests.\n\
 Location: Freeganj Ujjain (M.P).\n\
 capacity: 40";
        break;
        }
        else if (svr==2)
        {
        cout<<"\n\n This is your lab which checks patient with medium symptoms.\n\
 Lab Name: Sanjeevni Lab.\n\
 Location: Ring road Ujjain (M.P).\n\
 capacity: 60";
        break;
        }
        else if (svr==3)
        {
      	cout<<"\n\n This lab checks patient with High symptoms.\n\
 Lab Name: Bhagwati diagnostics.\n\
 Location: Main road Ujjain (M.P).\n\
 capacity: 72";
        break;
        }
        else
        {
        cout<<"\n\n\n Wrong input given,Try again!!";
		loginAttempt++;	
        }
    }
    }
    protected:	                                                         
		int A_total_patients,B_total_patients,C_total_patients,total;           
		void call()                                                    
		{                                                             
			check();                                                  
		}                                                            
	    void data_frm_ht()                                          
		{                                                          
	 	 A_total_patients = 80;                                   //displaying no. of patients attended in respective labs.
		 B_total_patients = 40;                            
		 C_total_patients = 60;    
		 total = A_total_patients + B_total_patients + C_total_patients;    //total expected patients to come in a day.                           
	    }                                                      
};                                                             
class patient_info : protected helpline_team               //Sub-Class patient lab which extracts data from base class.
{
	public:
		// Destructor for clearing memory space.
		~patient_info(){}
	protected:                                                                                 
	    void display_info()                            //method which calls base class protected data and further operations.                                                              
	    { 
		cout<<"\n\n ____________________________________________Log-in___________________________________________________ \n\n";                                                                               
	    call();                                                                          
		data_frm_ht();
		string input;
		int attempt = 0;
		while (attempt<5)
		{
		cout<<"\n\n\n Do you want to know the nos of patients coming to different labs(y/n) :";
		cin>>input;
		if ((input == "y") || (input == "Y"))                       //ask user wheather to see no. of patients data. 
		{
		cout<<"\n Total number of patients coming to the different labs are\n\
 \n lab Ayur Tests:- "<<A_total_patients;
		cout<<"\n Sanjeevni Lab.:- "<<B_total_patients;
		cout<<"\n Bhagwati diagnostics:- "<<C_total_patients;
		break;
	    }
	    else if ((input == "n") || (input == "N"))
	    {
	    	cout<<"\n";
	    	break;
		}
		else
		{
			cout<<"\n \"Wrong input please put either (y or n)\"";
	    	attempt++;
		}
	    }
		timeSlots();
		call_1();
	    }
    // Abstraction & Encapsulation                                       
	private:                                                                                                                  
		long long int age,ph_num;                                   
		float DNA_enzyme,RNA_enzyme,nucleotide;                     
		void registration()                            // method which create a database of user registration.               
		{    
		 ofstream dbms;
		 dbms.open("database.txt",ios_base::app);           //flie creation named database and no overriting.
		    char f_name[100],name[100],time[100],city[100],address[100];                                           
			cout<<"\n\n\n _____________________________________ Patient registration forum ____________________________________"; 
			cout<<"\n\n\n Enter your name: ";                      
		    cin.ignore(); 
			cin.getline(name,100);                                  
			dbms<<name<<endl;
			cout<<"\n Enter your fathers name: ";           //patients details such as name,no, city, age etc.     
		    cin.ignore(); 
			cin.getline(f_name,100);
			dbms<<f_name<<endl;
			cout<<"\n Enter your city & state name: ";      
			cin.ignore();
			cin.getline(city,100);                                                                 
			dbms<<city<<endl;
			cout<<"\n Time alloted to you: ";        
		    cin.ignore();
			cin.getline(time,100); 
			dbms<<time<<endl;
			cout<<"\n Enter your address: ";          
			cin.ignore();
			cin.getline(address,100);                                                            
			dbms<<address<<endl;
			int g;
			//Exceptional handling for age.
			try
			{
			cout<<"\n Enter your age: ";           // if user types string in age the error will get handled by try-catch and ask user to retype.
			cin>>age;
			dbms<<" "<<age<<endl;                                  
			if (!(age>0 && age<=1000))     
			{throw 5;}                                                     
			}catch(int l)
		    {
		    	cerr<<"\n Invalid Input. Please enter valid input. Its runtime_error ";
			}
	        cout<<"\n Enter your phone number: ";          
			cin>>ph_num;
			dbms<<ph_num<<endl;  
			dbms.close(); 
			cout<<"\n\n Test: For Covid-Sars-19, Kindly submit Rs 2500/- to the counter desk";
		}
			     
		void test()                      //method to calculate whether a person is infected with covid or not.                                                                    
		{                                                                                
			float fluroscense = 15.6;                                                  
			cout<<"\n\n\n\n _______________________________________Lab, Test in progress _________________________________________";                        
			cout<<"\n\n\n\n Enter patient DNA enzyme %: ";                         
			cin>>DNA_enzyme;                                                         
			cout<<"\n Enter patient RNA enzyme %: ";                            //formula is made by us only.
			cin>>RNA_enzyme;
			cout<<"\n Enter patient Nucleotide level: ";
			cin>>nucleotide;
	        cout<<"\n\n Fluroscense % in sample: "<<(3*DNA_enzyme/RNA_enzyme)-nucleotide<<" %\n"; 
		    if (fluroscense == (3*DNA_enzyme/RNA_enzyme)-nucleotide)                              
		    {                                                                                   
		    	cout<<"\n Unable to identify, needs COVID-SARS_virus Retest";                  
			}                                                                                 
			else if (fluroscense >= (3*DNA_enzyme/RNA_enzyme)-nucleotide)
			{
		    	cout<<"\n\n Patient is NEGATIVE";
			}
		    else if (fluroscense <= (3*DNA_enzyme/RNA_enzyme)-nucleotide)            
			{
		    	cout<<"\n Patient is POSITIVE";                                            
		        if ((3*DNA_enzyme/RNA_enzyme)-nucleotide > 90.6 )                          
			    {                                                                         
				cout<<"\n\n Patient is highly impacted with COVID-19";                   
		        	string a,b;                                                     
		        	a = "City Lab";                                                    
	                b = "Sanjeevni Lab";                   //use of pointer to swap the patient who is highly infected with corona.
					string *x=&a,*y=&b,t;                 //in the high intensity dealing patients lab. 
					t = *x;                              //if the sample exceeds a particular amount of nucleotide level.
					*x = *y;                                                       
					*y = t;                                                       
					cout<<"\n\n Our lab treats moderate patients, You can refer to: "<<b; 		
			    }
			}
		}                                                                      
	protected:                                                        
	    void timeSlots()               // filtering time into time slots for providing results to batches of divided time.
		{                                                                    
			string morning[4] = {"9-10AM","10-11AM","11-12noon","12-1PM"};  
			string evening[4] = {"2-3PM","3-4PM","4-5PM","5-6PM"};	      
		}	                                                           
		void call_1()           // method to call private methods of this class.                                         
		{                                                              
			registration();                                            
			test();                                                  
		}
};                                            
class lab_info : public patient_info        //3rd sub class use to inherit the data from above classes.
{                                          
	public: 
	    void show()                //method to call operator function.
		{
			operator --();
    	}                             
		void display_info()               //method to call private method of this class only.
		{                                
			chemical();                
		}                           
	~lab_info(){}                           
	protected:                      
		void chemical()           //method to check the list of available chemicals present inside the lab with quantity.
		{		                  
			string i;
			std::map< string , string > chem_list;         //using of map to create dictionary.                           
			chem_list.insert(pair<string , string>("a","Acetaminophen (500 mL)"));  
			chem_list.insert(pair<string , string>("h","Haloperidol (300 mL)"));    
			chem_list.insert(pair<string , string>("e","Esomeprazole (100 mL)"));  
			cout<<"\n\n\n ______________________________________ Chemicals in lab ____________________________________________";                          
			cout<<"\n\n Enter an alphabet(a,h,e):-";                            
			cin>>i;                                                            
			if (i == "a")                       //taking input from alphabet to check list in order.                               
			{                                                                
			   cout<<"\n "<<chem_list["a"];         //calling of the array of list from alphabets typed. 
			}                                                              
			if (i == "h")                                                   
			{                                                             
			   cout<<"\n "<<chem_list["h"];                              
			}                                                           
			if (i == "e")                                              
			{                                                          
			   cout<<"\n "<<chem_list["e"];                           
			}                                                       
	        }
	    void operator -(int un_reg)                                 //operator function used to calculate total patients tested.
	    { cout<<"\n\n Patient data from helpline team: "<<total;
	      total = total - un_reg;
	      cout<<"\n Today's unregistered patients: "<<un_reg;
	      cout<<"\n Data sent to Govt. :"<<total;
		}
	private:
	void operator --()               //operator function and method overloading to call all methods inherited from different classes.
	{
		
		lab_info obj1;
		obj1.patient_info::display_info();
		obj1.operator -(30);
		display_info();
		string input2;
		int attempt2;
		cout<<"\n\n\n ___________________________________ Weekly Report of lab _____________________________"; 
		while(attempt2<5)
		{
		cout<<"\n\n\n Do you want to check weekly report(y/n) : ";
		cin>>input2;
		if (input2 == "y" || input2 == "Y")
		{
		string data;
		ifstream repo;
		repo.open("report.txt");      //asking user wheather to see the weekly report from filehandling created earlier.
		while(getline(repo,data))
		{
		cout<<"\n"<<data;
		}
		repo.close();
		break;
	    }
	    else if (input2 == "n" || input2 == "N")
	    {
	    	cout<<"\n\n\t\t\t Ok Have a great day.";
	    	exit(0);
	    	break;
		}
		else
		{
			cout<<"\n\n Invalid Entry.Please enter (y/n)";
			attempt2++;
		}
	}
	} 
};
int main()                                    
{     
    system("Color C0");               // changing the foreground and background color.
	lab_info obj1;                   //creating the object of the sub class 3.
	obj1.show();                    //calling the method containing data inherited using multiple inheritence.                          
	return 0;                           
}                                      


       //..................................THANK YOU......................................................................//  
       
    
        
        
