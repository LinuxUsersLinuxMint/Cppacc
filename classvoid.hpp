#ifndef _CLASS_VOID_HPP_
#define _CLASS_VOID_HPP_

#include "classobj.hpp"
#include "defaultacc.hpp"

void DefaultAccount::InfodefaultAcc()
{
    cout << "Guest Name: " << dfacc.Accname << "\n";
    cout << "Guest Surname: " << dfacc.Accsurname << "\n";
    cout << "Guest Age: " << dfacc.AccAge << "\n";
    cout << "Guest Credi: " << dfacc.AccCredi << "\n";
}

void CreateAcc::InfoCrAcc()
{
    cout << "Acc Name: " << cracc.Accname << "\n";
    cout << "Acc Surname: " << cracc.Accsurname << "\n";
    cout << "Acc Age: " << cracc.AccAge << "\n";
    cout << "Acc Credi: " << cracc.AccCredi << "\n";
}

void CreateAcc_tw::InfotwAcc()
{
    cout << "Acc2 Name: " << cracctw.Accname << "\n";
    cout << "Acc2 Surname: " << cracctw.Accsurname << "\n";
    cout << "Acc2 Age: " << cracctw.AccAge << "\n";
    cout << "Acc2 Credi: " << cracctw.AccCredi << "\n";
}

void CreateAcc_thr::InfothrAcc()
{
    cout << "Acc3 Name: " << craccthr.Accname << "\n";
    cout << "Acc3 Surname: " << craccthr.Accsurname << "\n";
    cout << "Acc3 Age: " << craccthr.AccAge << "\n";
    cout << "Acc3 Credi: " << craccthr.AccCredi << "\n";
}

#endif