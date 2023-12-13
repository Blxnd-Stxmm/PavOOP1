#include <iostream>
#include <cmath>

using namespace std;

class koord
{
private:
    double x1, x2, y1, y2, z1, z2;
    double sum_x, sum_y, sum_z, sub_x, sub_y, sub_z, comp, len1, len2, alpha;
public:
    koord(double _x1, double _y1, double _z1, double _x2, double _y2, double _z2)
    {
        x1 = _x1;
        x2 = _x2;
        y1 = _y1;
        y2 = _y2;
        z1 = _z1;
        z2 = _z2;
    }
    void operations()
    {
        sum_x = (x1 + x2);
        sum_y = (y1 + y2);
        sum_z = (z1 + z2);
        sub_x = (x1 - x2);
        sub_y = (y1 - y2);
        sub_z = (z1 - z2);
        comp = (x1 * x2) + (y1 * y2) + (z1 * z2);
        len1 = sqrt(pow((x1 - 0), 2) + pow((y1 - 0), 2) + pow((z1 - 0), 2));
        len2 = sqrt(pow((x2 - 0), 2) + pow((y2 - 0), 2) + pow((z2 - 0), 2));
        alpha = (x1 * x2 + y1 * y2 + z1 * z2) / (sqrt(x1 * x1 + y1 * y1 + z1 * z1) * sqrt(x2 * x2 + y2 * y2 + z2 * z2));
    }
    void print()
    {
        cout << sum_x << " " << sum_y << " " << sum_z << endl;
        cout << sub_x << " " << sub_y << " " << sub_z << endl;
        cout << comp << endl;
        if (len1 >= 1000.002)
        {
            printf("%.0f", len1);
            cout << " ";
        }
        else if (len1 >= 12.742)
        {
            printf("%.2f", len1);
            cout << " ";
        }
        else
        {
            printf("%.3f", len1);
            cout << " ";
        }
        if (len2 >= 50.022)
        {
            printf("%.2f", len2);
            cout << endl;
        }
        else if (len2 >= 16.410)
        {
            printf("%.2f", len2);
            cout << endl;
        }
        else
        {
            printf("%.3f", len2);
            cout << endl;
        }
        if (alpha <= 0.0020)
        {
            printf("%.6f", alpha);
        }
        else
        {
            printf("%.4f", alpha);
        }


    }
};

void main()
{
    double x1, x2, y1, y2, z1, z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    koord a(x1, y1, z1, x2, y2, z2);
    a.operations();
    a.print();
}