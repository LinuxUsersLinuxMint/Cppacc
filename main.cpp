#include "classvoid.hpp"
using namespace std;

int main()
{
    while (true)
    {
        string process;
    
        cout << "1. Info Default Acc / CrAcc / CrAcc2 / CrAcc3" << "\n";
        cout << "2. Create Acc" << "\n";
        cout << "3. Create Acc2" << "\n";
        cout << "4. Create Acc3" << "\n";
        cout << "Enter the process: ";
        cin >> process;

        if (process == "1")
        {
            string iprocess;
            cout << "Select the user account you want to view. (D / 1 / 2 / 3) (If there is no user account, please create a user account): ";
            cin >> iprocess;

            if (iprocess == "D")
            {
                DefaultAccount::InfodefaultAcc;
            }
            if (iprocess == "1")
            {
                CreateAcc::InfoCrAcc;
            }
            if (iprocess == "2")
            {
                CreateAcc_tw::InfotwAcc;
            }
            if (iprocess == "3")
            {
                CreateAcc_thr::InfothrAcc;
            }
            else
            {
                cout << "Invalid user acc...";
            }
        
        }
        if (process == "2")
        {
            cracc.CreateAccount();
        }
        if (process == "3")
        {
            cracctw.CreateAccount();
        }
        if (process == "4")
        {
            craccthr.CreateAccount();
        }
        if (process == "exit")
        {
        	exit(0);
		}
        else
        {
            cout << "Invalid Process...";
        }
    }
}