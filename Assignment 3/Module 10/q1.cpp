
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>        // exit function prototype
#include "ClientData.cpp" // ClientData class definition
using namespace std;

void outputLine(ostream &, const ClientData &); // prototype
int main()
{
    ifstream inCredit("credit.dat", ios::in | ios::binary);

    // exit program if ifstream cannot open file
    if (!inCredit)
    {
        cerr << "File could not be opened." << endl;
        exit(EXIT_FAILURE);
    } // end if

    // output column heads
    cout << left << setw(10) << "Account" << setw(16)
         << "Last Name" << setw(11) << "First Name" << left
         << setw(10) << right << "Balance" << endl;

    ClientData client; // create record
    int recordNumber;
    cout<<"Enter Record Number to browser any record: "<<endl;
    cout<<"0 for the first record, -1 for the last"<<endl;
    cin >> recordNumber;

    if(recordNumber == 1)
    {
        // read first record from file
        inCredit.read(reinterpret_cast<char *>(&client),
                      sizeof(ClientData));

        outputLine(cout, client);
        return 0;
    }
    if(recordNumber == -1){
        // read all records from file
        while (inCredit && !inCredit.eof())
        {
            // read next from file
            inCredit.read(reinterpret_cast<char *>(&client),
                          sizeof(ClientData));
            // display record
            if (inCredit.eof())
                outputLine(cout, client);
        } // end while
        return 0;
    }
    inCredit.seekg(sizeof(ClientData) * (recordNumber - 1), ios::cur);
    // read first record from file
    inCredit.read(reinterpret_cast<char *>(&client),
                  sizeof(ClientData));
    outputLine(cout, client);

} // end main

// display single record
void outputLine(ostream &output, const ClientData &record)
{
    output << left << setw(10) << record.getAccountNumber()
           << setw(16) << record.getLastName()
           << setw(11) << record.getFirstName()
           << setw(10) << setprecision(2) << right << fixed
           << showpoint << record.getBalance() << endl;
} // end function outputLine
