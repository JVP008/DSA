// Problem Statement : Consider a food menu. use Insertion Sort on Number data
// and Implementation of Linear Search

#include <bits/stdc++.h>
using namespace std;
class Food
{
private:
    string food_name;
    int food_id;
    int quantity;
    friend class Canteen;
};

class Canteen
{
private:
    // Internal Helper Function that Helps in Sorting foods by thier id
    void insertion_sort(vector<Food> &arr)
    {

        for (int i = 1; i < arr.size(); i++)
        {
            int j = i;
            while (j > 0 && arr[j - 1].food_id > arr[j].food_id)
            {
                Food temp;
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                j -= 1;
            }
        }
    }

public:
    Food f;
    // save the attributes of food into the vector array.
    vector<Food> v;
    void add_Food()
    {
        cout << "Enter Food Name: ";
        cin >> f.food_name;
        cout << "\n";
        cout << "Enter Food Id: ";
        cin >> f.food_id;
        cout << "\n";
        cout << "Enter Food Quantity: ";
        cin >> f.quantity;
        cout << "\n";
        v.push_back(f);
        cout << "Food Inserted: ";
        // after pushing the food; sort them by thier food_id.
        // We will utilize Insertion sort to do that operation
        // fix:
        insertion_sort(v);
        for (auto it : v)
        {
            cout <<" "<< it.food_id << " " << it.food_name << " " << it.quantity << "\n";
        }
        //previous bug : before doing insertion_sort it was printing unsorted array;
        // insertion_sort(v);
    }
    // Search food
    void search_Food(string food_name)
    {
        // If no food is available in the vector do:
        if (v.size()<1){
            cout<<"No Food\n";
            return ;
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (food_name == f.food_name)
            {
                cout << "Food Is Available!\n";
                return; // break
            }
        }
        cout << "Food Is Not Available\n";
    }
    void update()
    {
        cout << "Enter Food You want to update\n";
        string food;
        string food_update;
        cin >> food_update;
        cin >> food;
        for (auto it : v)
        {
            if (it.food_name == food_update)
            {
                it.food_name = food;
                cout << "Updating Successful\n";
                return;
            }
        }
    }
    // display MENU function
    void display()
    {
        if (v.size() < 1)
        {
            cout << "Food Is Not Available\n";
            return;
        }
        cout << "Foods Available are\n";
        int i = 0;
        for (auto it : v)
        {
            cout <<i<< it.food_id << " " << it.food_name << " " << it.quantity << "\n";
            i+=1;
        }
    }
};

int main()
{
    Canteen c;
    // for continuation
    int ch = 1;
    string food_name;
    // for switch-case;
    int choose = 0;
    while (ch)
    {
        cout << "Enter Choice:\n";
        cout << "1 for adding the food\n";
        cout << "2 for searching the food\n";
        cout << "3 for displaying available food\n";
        cin >> choose;

        switch (choose)
        {
        case 1:
            c.add_Food();
            break;
        case 2:
            cout << "Enter Food you want to search: \n";
            cin >> food_name;
            c.search_Food(food_name);
            cout << "Menu Overview: ";
            c.display();
            break;
        case 3:
            cout << "Final Menu\n";
            c.display();
            break;
        case 4:
            cout << "Invalid\n";
        }
        cout << "Continue: (1) or (0): ";
        cin >> ch;
    }
    cout << "\nEnd Of Program!\n";
    return 0;
}
