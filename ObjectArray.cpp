#include <iostream>

using namespace std;

 
struct Patient
 {
	
		int   patient_id;
   	   char  title[5];
      char  firstname[10];
   	   char  surname[10];
   	  
  
};

int main() 
{
	int subscript=0;
	int loopsubscript;
	int recordnum=1;
	int prompt;
	int currentPatient;
	
	
	Patient* patient =new Patient[10];
	
	currentPatient=patient[subscript].patient_id;
	while (currentPatient>0)
	{
		cout<<"Please enter patient id or 0 to exit ";
		cin>>patient[subscript].patient_id;
		if (patient[subscript].patient_id<1)
		{
			break;
			subscript--;
		}
			
		
		cout<<"Please enter title: ";
		cin>>patient[subscript].title;
	
		cout<<"Please enter surname: ";
	   	cin>>patient[subscript].surname;
	
	   	cout<<"Please enter firstname: ";
	   	cin>>patient[subscript].firstname;
	   	cout <<"\n";
	   	subscript++;
	}
					
		
		//now print out contents of array
		
	for (loopsubscript = 0; loopsubscript <subscript; ++loopsubscript) 
	{
		cout<<"Record number "<<recordnum<<"\n";
		cout<<"Patient number: "<<patient[loopsubscript].patient_id;
	   	cout << "\n";
	   	cout<<"Title: "<<patient[loopsubscript].title;
	   	cout << "\n";
	   	cout<<"Surnmae: "<<patient[loopsubscript].surname;
	   	cout << "\n";
	   	cout<<"Firstname: "<<patient[loopsubscript].firstname;
		cout << "\n"<<"\n";
		recordnum++;

	}
	 
	delete[] patient;
	cin>>prompt;
	return 0;
}