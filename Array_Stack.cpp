#include <iostream>
using namespace std;

int arr[5];

void insert(int pos, int element)
{

    if (pos > 5)
        cout << "error";
    else
    {
        for (int i = 5 - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = element;

        cout << "array after insertion : \n";

        for (int i = 0; i <= 5; i++)
        {
            cout << arr[i] << endl;
        }
    }
}

void Delete(int pos)
{
    if (pos > 5)
        cout << "error";
    else
    {

        for (int i = pos - 1; i < 4; i++)
            arr[i] = arr[i + 1];

        cout << "\narray after deletion : \n";

        for (int i = 0; i < 4; i++)
            cout << arr[i] << endl;
    }
}

bool search(int element)
{
    for (int i = 0; i < 5; ++i)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "enter " << i + 1 << " = ";
        cin >> arr[i];
    }
    char c;
    do
    {
        cout << "===============================\n";
        cout << "1) insert\n2) delete\n3) search\n4) exit\nenter num : ";
        cin >> c;

        switch (c)
        {
        case '1':
            int pos;
            cout << "position = ";
            cin >> pos;

            int element;
            cout << "element = ";
            cin >> element;

            insert(pos, element);

            break;

        case '2':
            pos;
            cout << "position = ";
            cin >> pos;

            Delete(pos);
            break;

        case '3':
            cout << "element = ";
            cin >> element;

            if (search(element) == true)
                cout << element << " is in array\n";
            else
                cout << element << " not in array\n";
            break;

        default:
            break;
        }
    } while (c != '4');
    return 0;
}
