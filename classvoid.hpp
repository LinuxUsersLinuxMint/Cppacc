#ifndef _CLASS_VOID_HPP_
#define _CLASS_VOID_HPP_

#include "classobj.hpp"
#include "defaultacc.hpp"

void DefaultAccount::InfodefaultAcc()
{
    cout << "Guest Name: " << dfacc.Accname << endl;
    cout << "Guest Surname: " << dfacc.Accsurname << endl;
    cout << "Guest Age: " << dfacc.AccAge << endl;
    cout << "Guest Credi: " << dfacc.AccCredi << endl;
}

void CreateAcc::InfoCrAcc()
{
    cout << "Acc Name: " << cracc.Accname << endl;
    cout << "Acc Surname: " << cracc.Accsurname << endl;
    cout << "Acc Age: " << cracc.AccAge << endl;
    cout << "Acc Credi: " << cracc.AccCredi << endl;
}

void CreateAcc_tw::InfotwAcc()
{
    cout << "Acc2 Name: " << cracctw.Accname << endl;
    cout << "Acc2 Surname: " << cracctw.Accsurname << endl;
    cout << "Acc2 Age: " << cracctw.AccAge << endl;
    cout << "Acc2 Credi: " << cracctw.AccCredi << endl;
}

void CreateAcc_thr::InfothrAcc()
{
    cout << "Acc3 Name: " << craccthr.Accname << endl;
    cout << "Acc3 Surname: " << craccthr.Accsurname << endl;
    cout << "Acc3 Age: " << craccthr.AccAge << endl;
    cout << "Acc3 Credi: " << craccthr.AccCredi << endl;
}

#endif