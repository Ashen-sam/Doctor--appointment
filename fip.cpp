#include<iostream>                                   //iostream header file
#include<string>                                       //string header file

using namespace std;

struct appointment
{                                                           //Declaring appointment Structure variables         
	string patientName;
	string patientDiseas;
	string patientSex;
	int doc_Id;
	int patientAge;
	int patientNum;
	int patientID;
	char choice;
	char choose;

};


void addDoc() {                                                 //addDoc void Function and admin can add doctors to the appointments
	appointment app;

	cout << endl;
	cout << "\tPlease click 'x' for Add doctors in this month: ";
	cin >> app.choice;
	if (app.choice == 'x')
	{

		cout << endl << endl;
		cout << "\tCardiologist :-  Dr.Peter Gregory   ID: 1921\n";
		cout << "\tGynologist   :-  Dr.Simon sancher   ID: 1233\n";
		cout << "\tDermotologist:-  Dr.Maxwell hapter  ID: 1425\n";
		cout << "\tRadiologit   :-  Dr.Harry monk      ID: 1531\n";
		cout << "\tNeurologist  :-  Dr.Riki casper     ID: 1935\n\n\n";
		
		cout << "\tFill the details sheet for appointment\n\n";
		
	cout << "\t[1].Patient Name : ";
	cin >> app.patientName;


	cout << "\t[2].Patient age  : ";
	cin >> app.patientAge;

    cout << "\t[2].Patient Sex  : ";
	cin >> app.patientSex;       

	cout << "\t[4].Patient disease: ";
	cin >> app.patientDiseas;
	

	cout << "\t[5].Contact Number: ";
	cin >> app.patientNum;

	cout << "\t[3].Doctor ID       : ";
	cin >> app.doc_Id;




	cout << endl << endl;
	cout << "\tDoctor Appointment added Successful\n\n";
	cout << endl << endl;


	cout << "\tPlease click 'y' view patient appointment status: ";
	cin >> app.choose;

	cout << endl << endl;
		
		
		
	}
	else {
		cout << "\tWrong input!!\n\n";
}


	cout << endl << endl;

	if (app.choose == 'y')
	{
		cout << "\t*---------------------------------------*" << endl;
		cout << "\t* Patient Name:- " << app.patientName << "\t\t\t*" << endl;
		cout << "\t* Doctor ID   :- " << app.doc_Id << "\t\t\t*" << endl;
		cout << "\t* Date        :- 2023.02.13             *" << endl;
		cout << "\t* Time        :- 7.30 a.m - 10.15 a.m   *" << endl;
		cout << "\t* Patient no  :- 22                     *" << endl;
		cout << "\t*---------------------------------------*" << endl;

		cout << endl << endl << endl;

	}
	else {
		cout << "\t\tInvalid Input!!!" << endl;

		cout << endl << endl << endl;
	}

}

char op2;                   //Declare variables for void Delete Doctor Function
int docId;

void deleteDoc()                                                 //admin can delete the doctors of the registered appointments
{                                                           
	cout << "\tPlease click'w'to delete doctors:- ";
	cin >> op2;
	cout << endl << endl;

	if (op2 == 'w') {



		cout << "\tThe Registered Doctors in Appointments in this month" << endl << endl;
		cout << "\tCardiologist :-  Dr.Peter Gregory   ID: 1921\n";
		cout << "\tGynologist   :-  Dr.Simon sancher   ID: 1233\n";
		cout << "\tDermotologist:-  Dr.Maxwell hapter  ID: 1425\n";
		cout << "\tRadiologit   :-  Dr.Harry monk      ID: 1531\n";
		cout << "\tNeurologist  :-  Dr.Riki casper     ID: 1935\n\n\n";
		
			cout << "\tEnter the Doctor ID For delete Doctor:-  ";
	cin >> docId;
	cout << endl << endl;

	if (docId == 1921)
	{

		cout << "\tDeleted Cardiologist :-  Dr.Peter Gregory   ID: 1921\n";
		cout << endl << endl;

	}
	else if (docId == 1233)
	{

		cout << "\tDeleted Gynologist   :-  Dr.Simon sancher   ID: 1233\n";
		cout << endl << endl;

	}
	else if (docId == 1425)
	{
		cout << "\tDeleted Dermotologist:-  Dr.Maxwell hapter  ID: 1425\n";
		cout << endl << endl;

	}
	else if (docId == 1531)
	{
		cout << "\tDeleted Radiologit   :-  Dr.Harry monk      ID: 1531\n";
		cout << endl << endl;

	}
	else if (docId == 1935) {
		cout << "\tDleted Neurologist  :-  Dr.Riki casper     ID: 1935\n";
		cout << endl << endl;
	}
	}	else {
		cout << "\tINvalid input!!!\n\n\n";
	}
}


void viewApp()                                                        //admin can view the already registered appointments
{

	cout << "\tRegitered Appointments for the Available Doctors\n\n";
	cout << "\tDOC ID = 1921" << endl;
	cout << "\t23 Patients Reistered Already\n\n";

	cout << "\tDOC ID = 1233" << endl;
	cout << "\t42 Patients Reistered Already\n\n";

	cout << "\tDOC ID = 1425" << endl;
	cout << "\t14 Patients Reistered Already\n\n";

	cout << "\tDOC ID = 1921" << endl;
	cout << "\t23 Patients Reistered Already\n\n";

	cout << "\tDOC ID = 1935" << endl;
	cout << "\t23 Patients Reistered Already\n\n";

	cout << endl << endl;

}


void viewCompDetails()
{                                                //viewCompanyDetails void Function

	cout << "\t  Location    :-  London,MetroPoliton carcel street 108/29   \n\n";
	cout << "\t  Emali       :-  spirelondon@gmail.com   \n\n";
	cout << "\t  WebServices :-  WWW.SPIRELONDON.COM   \n\n";
	cout << "\t  Telephone   :-  +44 123 345 4752   \n\n";

	cout << endl << endl;
}




int main()
{                                                          //main Function

	string userName, passWord;                     //declaring variables for main function
	char op;
	char press;
	int attempts= 3;
	cout << endl << endl;
	

	cout << "\t\t**SPIRE HEALTH LONDON** \n\n";
	cout << "\t\t\tUserlogin\n\n";

	cout << "\tPress 'y' to login:- ";
	cin >> press;


	cout << endl << endl;

while(attempts>0){

	if (press == 'y') {                                               //if else condition for username and password in 3 attempts.
		cout << " Username: ";
		cin >> userName;
		cout << " Password: ";
		cin >> passWord;
		cout << endl;
	}
	else {
		cout << "wrong Input";
	}

	if (userName == "admin" && passWord == "password") {

		cout << "\t Login successful\n\n";

		do {                                                         //do while loop for looping the menu
			cout << "\tAppointment system SPIRE HEALTH LONDON hospital\n\n";
			cout << "\t[1]. Make an Appointment.\n";
			cout << "\t[2]. Delete an Appointments.\n";
			cout << "\t[3]. View Appointment.\n";
			cout << "\t[4]. View company details\n";
			cout << "\t[5]. Log out\n";
			cout << "\t[6]. Exit\n\n";
			cout << "\tselect option: ";
			cin >> op;
			cout << endl << endl;

			switch (op) {                               //Switch case for calling the functions
			case '1':
				addDoc();                               //Calling  addDoctor function
				break;
			case'2':
				deleteDoc();                           //Calling  delete Doctor function
				break;
			case'3':
				viewApp();                              //Calling  viewApp Function
				break;
			case'4':
				viewCompDetails();                      //Calling viewCompanyDetails Function
				break;
			case'5':
				cout << "logged out successfully!\n\n ";
				break;
			case'6':
				cout << "Thanks for visiting US!!!\n\n";
				break;
			default:
				cout << "invalid input!!\n\n";
				
			}
		} while (op != '5');

	}
	else {
		cout << "\t !!!Wrong username or password!!!/n";
		cout << endl << endl;
	}
	
	attempts--;                                                
	
	if(attempts==0){
		cout<<"\tExceeded maximum number of attempts/n";
	}else{
		cout<<"\tyou have "<<attempts<<" attempts remaining\n\n";
	
	}

}



	return 0;
}
