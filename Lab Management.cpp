#include<iostream>
#include<map>
#include<windows.h>
using namespace std;

class helpline_team
{	
    public:
    helpline_team()
    {
		cout<<"\n\n\t\t\t\t\t\t Log-in \n\n";
	}
	~helpline_team()
	{} 
	
    private:	
    void check()
    	{
    	int svr;
    	string userName;
        string userPassword;
        int loginAttempt = 0;
         
        while (loginAttempt < 2)
        {
        cout<<"\n Please enter your user name: ";
        cin>>userName;
        cout<<"\n Please enter your user password: ";
        cin>>userPassword;
        
        if (userName == "Tadeeb" && userPassword == "T@covid19")
        {
        cout<<"\n\n\n\t\t\t\t\t\t Welcome Tadeeb!\n";
        break;
        }
        else if (userName == "Nipun" && userPassword == "N@covid19")
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
      
        if (loginAttempt == 2)
        {
        cout << "\n\t\t\t\tToo many login attempts! Sorry try after 10 minutes.";
        exit(0);
        }

  // new part of check begins from here
 cout<<"\n\n Use the intensity number mentioned below to get information about different labs\n\
 (3 for high)\n\
 (2 for medium)\n\
 (1 for low)\n\n\
 Enter the number to know the details = ";
	    cin>>svr;
        if (svr==1)
        {
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
        }	 
    protected:	
		int A_total_patients,B_total_patients,C_total_patients;
		void call()
		{
			check();
		}
	    void data_frm_ht()
		{
	 	 A_total_patients = 80;
		 B_total_patients = 40;
		 C_total_patients = 60;
	    }   
};

class patient_info : protected helpline_team
{
	public:
		~patient_info()
		{}
	public:
		void display_msg()
		{
		call();
	    }
	    void display_info()
	    {
		data_frm_ht();
		cout<<"\n\n\n Total number of patients coming to the different labs are\n\
 \n lab Ayur Tests:- "<<A_total_patients;
		cout<<"\n Sanjeevni Lab.:- "<<B_total_patients;
		cout<<"\n Bhagwati diagnostics:- "<<C_total_patients;
		timeSlots();
		call_1();
	    }
	// Abstraction & Encapsulation
	private:
		string name,f_name,city,s_name,time;
		long double age,ph_num,h_num;
		float DNA_enzyme,RNA_enzyme,nucleotide;
		void registration()
		{
			cout<<"\n\n\n\t\t\t\t\t\t Patient registration forum.";
			cout<<"\n\n\n Enter your name: ";
			cin>>name;
			cout<<"\n Enter your fathers name: ";
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
		}
		void test()
		{
			float fluroscense = 15.6;
			cout<<"\n\n\n\n\t\t\t\t\t\t Lab, Test in progress";
			cout<<"\n\n\n\n Enter patient DNA enzyme %: ";
			cin>>DNA_enzyme;
			cout<<"\n Enter patient RNA enzyme %: ";
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
	                b = "Sanjeevni Lab";
					string *x=&a,*y=&b,t;
					t = *x;
					*x = *y;
					*y = t;
					cout<<"\n\n Our lab treats moderate patients, You can refer to: "<<b; 		
			    }
			}
		}
	protected:
	    void timeSlots()
		{
			string morning[4] = {"9-10AM","10-11AM","11-12noon","12-1PM"};
			string evening[4] = {"2-3PM","3-4PM","4-5PM","5-6PM"};	
		}	
		void call_1()
		{
			registration();
			test();
		}		
};
class lab_info : public patient_info
{
	public:
		void display_info()
		{
			chemical();
		}
		~lab_info()
		{}
	protected:
		void chemical()
		{		
			//Create dictionary here.
			string i;
			std::map< string , string > chem_list;
			chem_list.insert(pair<string , string>("a","Acetaminophen (500 mL)"));
			chem_list.insert(pair<string , string>("h","Haloperidol (300 mL)"));
			chem_list.insert(pair<string , string>("e","Esomeprazole (100 mL)"));
			cout<<"\n\n\n\t\t\t\t\t Chemicals in lab";
			cout<<"\n\n Enter an alphabet(a,h,e):-";
			cin>>i;
			if (i == "a")
			{
			   cout<<"\n"<<chem_list[" a"];
			}
			if (i == "h")
			{
			   cout<<"\n"<<chem_list[" h"];
			}
			if (i == "e")
			{
			   cout<<"\n"<<chem_list[" e"];
			}
	        }
};

int main()
{
	system("Color C0");
	lab_info obj1;
	obj1.display_msg();
	obj1.patient_info::display_info();
	obj1.display_info();
	return 0;
}
       
    
        
        
