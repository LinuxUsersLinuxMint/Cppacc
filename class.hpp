#ifndef _CLASS_HPP_
#define _CLASS_HPP_

#include <iostream>
#include <string> 

using namespace std;

class DefaultAccount
{
    public:
        string Accname;
        string Accsurname;
        int AccAge;
        int AccCredi;
		void InfodefaultAcc();    
};

class CreateAcc: public DefaultAccount
{
    public:
        void CreateAccount()
        {
            cout << "Account Name: " << "\n";
            cin >> Accname;
            cout << "Account Surname: " << "\n";
            cin >> Accsurname;
            cout << "Account Age: " << "\n";
            cin >> AccAge;
            cout << "Account Credi: " << "\n";
            cin >> AccCredi;
        }
        void InfoCrAcc();
};

class CreateAcc_tw: public CreateAcc
{
	public:
		void InfotwAcc();
};

class CreateAcc_thr: public CreateAcc
{
	public:
		void InfothrAcc();
};

#endif