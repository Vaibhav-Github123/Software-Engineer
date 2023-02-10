#include <iostream>
using namespace std;

class Cricket
{
protected:
    int total_run, total_match, avg_runs;
    int perfomans = 123;

public:
    void setData(int total_run, int total_match, int avg_runs)
    {

        this->total_run = total_run;
        this->total_match = total_match;
        this->avg_runs = avg_runs;
    }
};
class derived : public Cricket
{
public:
    void displayData()
    {
        cout << "total run " << total_run << endl;
        cout << "total match " << total_match << endl;
        cout << "avg run are " << (float)total_run / (float)total_match << endl;
        cout << "perfomance is " << perfomans << endl;
        avg_runs = (float)total_run / (float)total_match;
    }
};

int main()
{
    derived d1;
    d1.setData(150000, 200, 0);
    d1.displayData();

    return 0;
}