#ifndef _CLASS_VOID_HPP_
#define _CLASS_VOID_HPP_

#include "classobj.hpp"
#include "defaultacc.hpp"
#include "CADK/ForCpp/cppdefined.hpp"
uns

V DefaultAccount::InfodefaultAcc()
{
    ct << "Guest Name: " << dfacc.Accname << n;
    ct << "Guest Surname: " << dfacc.Accsurname << n;
    ct << "Guest Age: " << dfacc.AccAge << n;
    ct << "Guest Credi: " << dfacc.AccCredi << n;
}

V CreateAcc::InfoCrAcc()
{
    ct << "Acc Name: " << cracc.Accname << n;
    ct << "Acc Surname: " << cracc.Accsurname << n;
    ct << "Acc Age: " << cracc.AccAge << n;
    ct << "Acc Credi: " << cracc.AccCredi << n;
}

V CreateAcc_tw::InfotwAcc()
{
    cout << "Acc2 Name: " << cracctw.Accname << n;
    cout << "Acc2 Surname: " << cracctw.Accsurname << n;
    cout << "Acc2 Age: " << cracctw.AccAge << n;
    cout << "Acc2 Credi: " << cracctw.AccCredi << n;
}

V CreateAcc_thr::InfothrAcc()
{
    cout << "Acc3 Name: " << craccthr.Accname << n;
    cout << "Acc3 Surname: " << craccthr.Accsurname << n;
    cout << "Acc3 Age: " << craccthr.AccAge << n;
    cout << "Acc3 Credi: " << craccthr.AccCredi << n;
}

#endif