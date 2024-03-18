#include <iostream>
#include "ChainNode/ChainNode.h"
#include "LinkedList/LinkedList.h"
#include "LinkedStack/LinkedStack.h"

using namespace std;

int main()
{
    // ChainNode a;ChainNode b (10,&a);ChainNode c (20,&b);
    // cout<<"a = "<<a.element<<"\tb = "<<b.element<<"\tc = "<<c.element<<endl;
    cout << "---------LinkedList--------" << endl;
    int maxSize, choice, i, e, value, element;
    cout << "66003065 Prapaipit Sawatraksa" << endl;
    cout << "Enter maxSize of List :  ";
    cin >> maxSize;
    cout << "Maxsize is : " << maxSize << endl;

    LinkedList list(maxSize);
    do
    {
        list.display();
        cout << "Welcome to Lab LinkedList" << endl;
        cout << "1. | Size ( )              |" << endl;
        cout << "2. | IndexOf ( int e )     |" << endl;
        cout << "3. | Get ( int i )         |" << endl;
        cout << "4. | Remove ( int i )      |" << endl;
        cout << "5. | Set ( int i , int e ) |" << endl;
        cout << "6. | Add ( int i , int e ) |" << endl;
        cout << "7. | Min ( )               |" << endl;
        cout << "8. | Max ( )               |" << endl;
        cout << "9. | Display ( )           |" << endl;
        cout << "10.| Clear ( )             |" << endl;
        cout << "11.| OddCount ( )          |" << endl;
        cout << "12.| EvenCount ( )         |" << endl;
        cout << "13.| Sum ( )               |" << endl;
        cout << "14.| Mean ( )              |" << endl;
        cout << "15.| Sort ( )              |" << endl;
        cout << "16.| Sort2( )              |" << endl;
        cout << "17.| AutoInert ( )         |" << endl;
        cout << "18.| sumEven ( )           |" << endl;
        cout << "19.| sumOOD ( )            |" << endl;
        cout << "0. | Exit  Program !! " << endl;

         do
        {
            cout << "Select your Choice : ";cin >> choice;
            if (cin.fail())
            {
                cout << "Invalid input. Please enter a number between 0 - 5." << endl;
                cin.clear();cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else if (choice < 0 || choice > 5)
            {
                cout << "Choice out of range. Please enter a number between 0 - 4." << endl;
            }
            else
            {
                break;
            }
        } while (true);

        switch (choice)
        {
        case 1:
            cout << " Current list Size is : " << list.size() << endl;
            break;
        case 2:
            cout << "Enter Element : ";
            cin >> e;
            list.indexOf(e);
            cout << "First Index of " << e << "found at " << i << endl;
            break;
        case 3:
            cout << "Enter Index : ";
            cin >> i;
            e = list.get(i);
            cout << "Element is : " << e << endl;
            break;
        case 4:
            cout << "Enter Index : ";
            cin >> i;
            e = list.remove(i);
            cout << "Element is : " << e << endl;
            break;
        case 5:
            cout << "Enter Index : ";
            cin >> i;
            cout << "Enter Element : ";
            cin >> e;
            list.set(i, e);
            break;
        case 6:
            cout << "Input Add Index : ";
            cin >> i;
            cout << "Input Add Element : ";
            cin >> e;
            list.add(i, e);
            break;
        case 7:
            e = list.min();
            cout << " Minimum Element is " << e << endl;
            break;
        case 8:
            e = list.max();
            cout << " Maximum Element is " << e << endl;
            break;
        case 9:
            list.display();
            cout << "Current size of list :  " << list.size() << "/" << list.get_maxSize() << endl;
            break;
        case 10:
            list.clear();
            cout << "LinkedList Cleared . ";
            break;
        case 11:
            e = list.oddCount();
            cout << "Odd count is " << e << endl;
            break;
        case 12:
            e = list.EvenCount();
            cout << "Even count is " << e << endl;
            break;
        case 13:
            value = list.sum();
            cout << "Summation is " << value << endl;
            break;
        case 14:
            value = list.mean();
            cout << "Average is " << value << endl;
            break;
        case 15:
            // char choice;
            cout << "Sorted is ";
            // cout << "Sort from highest to lowest = Y Sort from lowest to highest = N : ";
            // cin >> choice;
            list.sort();
            break;
        case 16:
            cout << "Sorted is ";
            // cout << "Sort from highest to lowest = Y Sort from lowest to highest = N : ";
            // cin >> choice;
            list.sort2();
            break;
        case 17:
            list.AutoInert(maxSize);
            cout << " AutoInsert Genarate Success!" << endl;
            break;
        case 18:
            value = list.sumEven();
            cout << "Summation is " << value << endl;
            break;
        case 19:
            value = list.sumOOD();
            cout << "Summation is " << value << endl;
            break;
        case 0:
            cout << " Exit Program. " << endl;
        default:
            cout << "Wrong choice ,try again..." << endl;
            break;
        }
    } while (choice != 0);
    cout << "-------------------------------------------------------------------------------------------------" << endl;
    cout << "---------LinkedStack---------" << endl;
    cout << "66003065 Prapaipit Sawatraksa" << endl;
    cout << "Enter maxSize of Stack : ";
    cin >> maxSize;
    LinkedStack Stack(maxSize); // constructor
    do
    {
        cout << "----- current status -----" << endl;
        Stack.display();
        cout << endl;
        cout << "----- menu -----" << endl;
        cout << "1. | push elemaent |" << endl;
        cout << "2. | pop elemaent  |" << endl;
        cout << "3. | top elemaent  |" << endl;
        cout << "4. | Isempty Stack |" << endl;
        cout << "5. | IsFull Stack  |" << endl;
        cout << "6. | Clear Stack   |" << endl;
        cout << "7. | Auto Stack    |" << endl;
        cout << "8. | Sawp Stack    |" << endl;
        cout << "0. | Exit  Program !! " << endl;
         do
        {
            cout << "Select your Choice : ";cin >> choice;
            if (cin.fail())
            {
                cout << "Invalid input. Please enter a number between 0 - 8." << endl;
                cin.clear();cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else if (choice < 0 || choice > 8)
            {
                cout << "Choice out of range. Please enter a number between 0 - 8." << endl;
            }
            else
            {
                break;
            }
        } while (true);
        switch (choice)
        {
        case 1:
            cout << " Enter Element : ";
            cin >> element;
            if (element < 0)
            {
                element = -element;
                cout << "Absolute Element : " << element << endl;
            }
            else if (element == 0)
            {
                cout << "Elemnt cannot be nagative. Please Enter a positive value :  ";
                cin >> element;
                element = -element;
                cout << "Absolute Element : " << element << endl;
            }
            Stack.push(element);
            break;
        case 2:
            element = Stack.pop();
            cout << "Element : " << element << endl;
            break;
        case 3:
            element = Stack.top();
            cout << "Element : " << element << endl;
            break;
        case 4:
            cout << " Is the LinkedAtack Empty : " << Stack.Isempty() << endl;
            cout << "Current size of list :  " << Stack.size() << "/" << Stack.get_maxSize() << endl;

            break;
        case 5:
            cout << " Is the LinkedSatck IsFull : " << Stack.IsFull() << endl;
            cout << "Current size of list :  " << Stack.size() << "/" << Stack.get_maxSize() << endl;

            break;
        case 6:
            cout << "LinkedStack Cleared . ";
            Stack.clear();
            break;
        case 7:
            Stack.AutoInert(maxSize);
            cout << " AutoInsert Genarate Success!" << endl;
            break;
        case 8:
            cout << " After Swapping, The Stack  " << endl;
            Stack.Swap();
            break;
        case 0:
            cout << " Exit Program. " << endl;
        efault:
            cout << "Wrong choice ,try again..." << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}