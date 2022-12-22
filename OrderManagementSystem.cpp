#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
using namespace std;
int main()
{
    char fullname[30];
    int qty, apply;
    char discount;
    int option = 0;
    int choice, mobile;
    int pizzaoption, pizzaoption1;
    int junkoption, junkoption1;
    int breakfastoption, breakfastoption1;
    // int choice;
    char gotobeginning, gotoTypesOfFood;
    char piz1[] = "Chicken Fazita", piz2[] = "Chicken Bar BQ", piz3[] = "Peri Peri", piz4[] = "Creamy Max";
    char Junk1[] = "samosa and kachori", junk2[] = "Butter Chicken", junk3[] = "white Rice Biryani", junk4[] = "Potato Chips";
     char bkft1[] = "Biscuits & Gravy",bkft2[] = "French Toast",bkft3[] = "Hot Chocolate Oatmeal",bkft4[]="Avocado Toast";
    starting:
    system("cls");
    cout << endl;
    cout << "\t\t\t|-------------------------------------------------------------|\n";
    cout << "\t\t\t|                  Food Hub Welcomes You!                     |\n";
    cout << "\t\t\t|-------------------------------------------------------------|\n";
    gotoTypesOfFood:
    cout << "\n\n\nEnter Your Name: ";
    cin.getline(fullname, 20);
    cout<<endl;
    cout<<endl;
    cout << "\t\t\t|-------------------------------------------------------------|\n";
    cout << "\t\t\t|                      Types Of Food                          |\n";
    cout << "\t\t\t|-------------------------------------------------------------|\n";
    cout << "Hello! " << fullname << "\n\n What would you like to order?\n\n";
    cout << "1. Fast Food\n";
    cout << "2. Junk Food\n";
    cout << "3. BreakFast \n";
    cout << "Enter Your choice:";
    cin >> option;
    if (option == 1)
    {
        // displayFastFood();
        cout << "\n1) " << piz1 << "\n";
        cout << "\n2) " << piz2 << "\n";
        cout << "\n3) " << piz3 << "\n";
        cout << "\n4) " << piz4 << "\n";
        cout << "\nPlease Enter Which Pizza Flavor would you like to have?:";
        cin >> pizzaoption;
        if (pizzaoption >= 1 && pizzaoption <= 5)
        {
            cout << "\n1) Small P250.00\n";
            cout << "\n2) Regular P500.00\n";
            cout << "\n3) Large P900.00\n";
            cout << "\n Choose size Please!";
            cin >> pizzaoption1;
            if (pizzaoption1 >= 1 && pizzaoption1 <= 3)
            {
                cout << "\n Please Enter Quantity:";
                cin >> qty;
                switch (pizzaoption1)
                {
                case 1:
                    option = 250.00 * qty;
                    break;
                case 2:
                    option = 500.00 * qty;
                    break;
                case 3:
                    option = 900.00 * qty;
                    break;
                }
                system("cls");
                switch (pizzaoption1)
                {
                case 1:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << piz1;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=='Y' || gotobeginning=='y')
			{
			  goto starting;
			  //return 0;
			}
                    break;
                case 2:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << piz2;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                case 3:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << piz3;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                case 4:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << piz4;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                }
            }
        }
    }
    if (option == 2)
    {
        cout << endl;
        cout << "\t\t\t|-------------------------------------------------------------|\n";
        cout << "\t\t\t|         Junk Food always waits for You!                     |\n";
        cout << "\t\t\t|-------------------------------------------------------------|\n";
        cout << endl;
        cout << "\n1) " << Junk1 << "\n";
        cout << "\n2) " << junk2 << "\n";
        cout << "\n3) " << junk3 << "\n";
        cout << "\n4) " << junk4 << "\n";
        cout << "\nPlease Enter Which Pizza Flavor would you like to have?:";
        cin >> junkoption;
        if (junkoption >= 1 && junkoption <= 5)
        {
            cout << "\n1) Small P150.00\n";
            cout << "\n2) Regular P300.00\n";
            cout << "\n3) Large P500.00\n";
            cout << "\n Choose size Please!";
            cin >> junkoption1;
            if (junkoption1 >= 1 && junkoption1 <= 3)
            {
                cout << "\n Please Enter Quantity:";
                cin >> qty;
                switch (junkoption1)
                {
                case 1:
                    option = 150.00 * qty;
                    break;
                case 2:
                    option = 300.00 * qty;
                    break;
                case 3:
                    option = 500.00 * qty;
                    break;
                }
                // system("cls");
                switch (junkoption1)
                {
                case 1:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << Junk1;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;

                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                case 2:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << junk2;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                case 3:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << junk3;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {                    
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                case 4:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << junk4;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                }
            }
        }
    }
     if (option == 3)
    {
        // displayFastFood();
        cout << "\n1) " << bkft1 << "\n";
        cout << "\n2) " << bkft2 << "\n";
        cout << "\n3) " << bkft3 << "\n";
        cout << "\n4) " << bkft4 << "\n";
        cout << "\nPlease Enter Which Pizza Flavor would you like to have?:";
        cin >> breakfastoption;
        if (breakfastoption >= 1 && breakfastoption <= 5)
        {
            cout << "\n1) Small P100.00\n";
            cout << "\n2) Regular P150.00\n";
            cout << "\n3) Large P200.00\n";
            cout << "\n Choose size Please!";
            cin >> breakfastoption1;
            if (breakfastoption1 >= 1 && breakfastoption1 <= 3)
            {
                cout << "\n Please Enter Quantity:";
                cin >> qty;
                switch (breakfastoption1)
                {
                case 1:
                    option = 100.00 * qty;
                    break;
                case 2:
                    option = 150.00 * qty;
                    break;
                case 3:
                    option = 200.00 * qty;
                    break;
                }
                system("cls");
                switch (breakfastoption1)
                {
                case 1:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << bkft1;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                case 2:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << bkft2;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay youy bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                case 3:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << bkft3;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {

                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                case 4:
                    cout << "\t\t\t----------------Your Order---------------\n";
                    cout << " " << qty << " " << bkft4;
                    cout << "\n Your Bill is:" << option;
                    cout << "\n Your food will be delivered within 25 Minutes";
                    cout << "\n\n Thank for ordering from Food Hub";
                    cout << "\n\n*****************************************************\n";
                    cout << "\n\n What would you like to order? Y/N:";
                    cin >> discount;
                    if (discount == 'Y' || discount == 'y')
                    {
                        cout << "\n Pay your Bill:" << option;
                    }
                    if (discount == 'N' || discount == 'n')
                    {
                        cout << "\n You are eligible to get 50% Discout";
                        cout << "\n Press 1 to apply discount: ";
                        cin >> apply;
                        cout << "\t\t Applying Discount";
                        for (int i = 0; i < 6; i++)
                        {
                            cout << ".";
                            Sleep(500);
                        }
                        cout << "\n\nApplied Successfully";
                        cout << endl;
                        cout << "\n\n Your paybale amount is: =" << option / 2;
                        cout << "\n\n Press 1 to go to payment method: ";
                        cin >> apply;
                        if (apply == 1)
                        {
                            cout << "\n 1.UPI";
                            cout << "\n 2.Cash On Delivery";
                            cout << "\n 3.Pay Later";
                            cout << "\n\nEnter Your Choice:";
                            cin >> choice;
                            if (choice == 1)
                            {
                                cout << "\n\n\n Enter Your UPI Id (Registered Mobile Number):";
                                cin >> mobile;
                                cout << "\t\t Processing Please Wait";
                                for (int i = 0; i < 6; i++)
                                {
                                    cout << ".";
                                    Sleep(500);
                                }
                                cout << "\n\n\t\tPayment done Successfully";
                                cout << endl;
                            }
                            if (choice == 2)
                            {
                                cout << "\n\t\t Pay Your bill When You Receive Your Orders:";
                            }
                            if (choice == 3)
                            {
                                cout << "\n\t\tYour have to pay your bill Next Month on 5th:";
                            }
                        }
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
