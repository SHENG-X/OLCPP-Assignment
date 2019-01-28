
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>        // exit function prototype
#include "ClientData.cpp" // ClientData class definition
using namespace std;

void outputLine(ostream &, const ClientData &); // prototype
void writeFile();
void readSequentially(ifstream& inCredit, ClientData client) ;
void readRandomly(ifstream& inCredit, ClientData client, int recordNumber);

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
    int userChoice;
    cout<< "-------------Menu Options-------------"<<endl;
    cout<<"Enter 1 for create a random file: "<<endl;
    cout<<"Enter 2 for  read it sequentially: "<<endl;
    cout<<"Enter 3 for read it randomly: "<<endl;
    cin >> userChoice;
    cout<<"-----------------------------------------"<<endl;

    if(userChoice==1)
    {
        writeFile();
    }
    else if(userChoice==2)
    {
        // while (inCredit && !inCredit.eof())
        // {
        //     if (client.getAccountNumber() != 0)
        //     {
        //         // display record
        //         outputLine(cout, client);
        //     }
        //     // read next from file
        //     inCredit.read(reinterpret_cast<char *>(&client),
        //                   sizeof(ClientData));
        // } // end while
        readSequentially(inCredit, client);
    }
    else if(userChoice==3)
    {
        int numRow;
        cout<<"Enter line number to read: ";
        cin >> numRow;
        readRandomly(inCredit, client, numRow);
    }


    // if(recordNumber == 1)
    // {
    //     // read first record from file
    //     inCredit.read(reinterpret_cast<char *>(&client),
    //                   sizeof(ClientData));

    //     outputLine(cout, client);
    //     return 0;
    // }
    // if(recordNumber == -1){
    //     // read all records from file
    //     while (inCredit && !inCredit.eof())
    //     {
    //         // read next from file
    //         inCredit.read(reinterpret_cast<char *>(&client),
    //                       sizeof(ClientData));
    //         // display record
    //         if (inCredit.eof())
    //             outputLine(cout, client);
    //     } // end while
    //     return 0;
    // }
    // inCredit.seekg(sizeof(ClientData) * (recordNumber - 1), ios::cur);
    // // read first record from file
    // inCredit.read(reinterpret_cast<char *>(&client),
    //               sizeof(ClientData));
    // outputLine(cout, client);

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

void writeFile(){
    ofstream outCredit("credit.dat", ios::out | ios::binary);

    // exit program if ofstream could not open file
    if (!outCredit)
    {
        cerr << "File could not be opened." << endl;
        exit(1);
    } // end if
    int account;
    char lname[15];
    char fname[10];
    double balance;
    ClientData blankClient[10];
    for (int i = 0; i < 10; ++i)
    {
        cout << "enter first name : ";
        cin >> fname;
        cout << "enter last name : ";
        cin >> lname;
        cout << "enter account number : ";
        cin >> account;
        cout << "enter balance : ";
        cin >> balance;
        blankClient[i].setFirstName(fname);
        blankClient[i].setLastName(lname);
        blankClient[i].setAccountNumber(account);
        blankClient[i].setBalance(balance);
    }
    // constructor zeros out each data member

    // output 100 blank records to file
    for (int i = 0; i < 10; ++i)
        outCredit.write(reinterpret_cast<const char *>(&blankClient[i]),
                        sizeof(ClientData));
}

void readSequentially(ifstream& inCredit, ClientData client)
{
     while (inCredit && !inCredit.eof())
        {
            if (client.getAccountNumber() != 0)
            {
                // display record
                outputLine(cout, client);
            }
            // read next from file
            inCredit.read(reinterpret_cast<char *>(&client),
                          sizeof(ClientData));
        } // end while
}
void readRandomly(ifstream& inCredit, ClientData client, int recordNumber)
{
    inCredit.seekg(sizeof(ClientData) * (recordNumber - 1), ios::cur);
    // read first record from file
    inCredit.read(reinterpret_cast<char *>(&client),
                  sizeof(ClientData));
    outputLine(cout, client);
}