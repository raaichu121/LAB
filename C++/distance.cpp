#include <iostream>

using namespace std;

class distance
{
   private:
        float x1, x2, y1, y2, dist;

    public:
        void getdata()
        {
            cout << "Enter first coordinate:";
            cin >> x1 >> y1;
            cout << "Enter second coordinate:";
            cin >> x2 >> y2;
        }

    int calculate()
        {
		dist = sqrt ( pow ((x2-x1), 2)+ pow ((y2-y1), 2)); 
		cout << "distance betn two point is.";
        cout << dist << endl:
        }
 };
 
int main()
    {
        distance d1;
        d1.getdata(); 
		d1.calculate();
         return 0;
     }
