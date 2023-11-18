#include "classvoid.hpp"
using namespace std;

int main()
{
    string process;
    
    cout << "1. Info Default Acc / CrAcc / CrAcc2 / CrAcc3" << endl;
    cout << "2. Create Acc" << endl;
    cout << "3. Create Acc2" << endl;
    cout << "4. Create Acc3" << endl;
    cout << "Enter the process: " << endl;
    cin >> process;

    if (process == "1")
    {
        string iprocess;
        cout << "Select the user account you want to view. (D / 1 / 2 / 3) (If there is no user account, please create a user account): " << endl;
        cin >> iprocess;

        if (iprocess == "D")
        {
            InfodefaultAcc();
        }
        if (iprocess == "1")
        {
            InfoCrAcc();
        }
        if (iprocess == "2")
        {
            InfotwAcc();
        }
        if (iprocess == "3")
        {
            InfothrAcc();
        }
        else
        {
            cout << "Invalid user acc..." << endl;
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
    else
    {
        cout << "Invalid Process..." << endl;
    }
    
}