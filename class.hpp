#ifndef _CLASS_HPP_
#define _CLASS_HPP_

#include <iostream>
#include <string> 

#include "CADK/ForCpp/cppdefined.hpp"
uns

cl DefaultAccount
{
    pb
        _str Accname;
        _str Accsurname;
        _i AccAge;
        _i AccCredi;
		V InfodefaultAcc();    
};

cl CreateAcc: pbl DefaultAccount
{
    pb
        V CreateAccount()
        {
            ct << "Account Name: " << n;
            cn >> Accname;
            ct << "Account Surname: " << n;
            cn >> Accsurname;
            ct << "Account Age: " << n;
            cn >> AccAge;
            ct << "Account Credi: " << n;
            cn >> AccCredi;
        }
        V InfoCrAcc();
};

cl CreateAcc_tw: pbl CreateAcc
{
	pb
        V InfotwAcc();
};

cl CreateAcc_thr: pbl CreateAcc
{
	pb
		V InfothrAcc();
};

#endif