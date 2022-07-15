#include<iostream>
using namespace std;
class Publication
{
    protected:
    string title;
    float price;
    
};
class book:public virtual Publication
{
    protected:
        int page_count;
    public:
    void get_data()
    {
        cout << "Enter the Title of the book" << endl;
        cin >> title;
        cout << "Enter the price of the book" << endl;
        cin >> price;
        cout << "Enter the number of pages in the book " << endl;
        cin >> page_count;
    }
    void put_Data()
    {
        cout << "-------------- BOOK-------------"<<endl;
        cout << "Title :-  " << title<<endl;
        cout << "Price :-  " << price<<endl;
        cout << "Page Count :-  " << page_count<<endl;
        
    }
};
class tape:virtual public Publication
{
    protected:
        float time;
    public:
        void get_Data()
        {
            cout << endl;
            cout << "Enter the time of Tape"<<endl;
            cin >> time;
            cout << "Enter the Title of the Tape" << endl;
            cin >> title;
            cout << "Enter the price of the Tape" << endl;
            cin >> price;
            time = 0;

        }
        
        void put_Data()
        {
            
            cout << "-------------- TAPE-------------"<<endl;
            cout<<"title of the Tape :- "<<title<<endl;
            cout << "price of tape :- " << price<<endl;
            cout << "Time of tape :- " << time<<endl;
        }
};

int main()
{
    book bk;
    bk.get_data();
    bk.put_Data();
    tape tp;
    tp.get_Data();
    tp.put_Data();

    return 0;
}
