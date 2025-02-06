#include <iostream>
using namespace std;

int main()
{

    int arr1[3][3],arr2[3][3],sum[3][3];

    cout << "Enter first 3x3 Matrix" << endl;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cin >> arr1[i][j];
        }
    }

    cout<<"Enter second 3x3 Matrix "<<endl;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cin >> arr2[i][j];
        }
    }

   cout<<"Your first Matrix is "<<endl;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << arr1[i][j] << " ";
        }

        cout << endl;
    }

    cout<<"Your second Martix is"<<endl;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << arr2[i][j] << " ";
        }

        cout << endl;
    }
  for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j]+arr2[i][j];
            
        }
    }
    

    cout<<"The sum of matrix is "<<endl;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << sum[i][j] << " ";
        }

        cout << endl;
    }


    return 0;
}
