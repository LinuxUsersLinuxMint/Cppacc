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
            cout << "Account Name: " << endl;
            cin >> Accname;
            cout << "Account Surname: " << endl;
            cin >> Accsurname;
            cout << "Account Age: " << endl;
            cin >> AccAge;
            cout << "Account Credi: " << endl;
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