#include <iostream>
#include <cmath>

using namespace std;

struct coord
{
    double x, y;
};

double dist(const coord& pt1, const coord& pt2)
{
    double val;
    val = sqrt((pt1.x-pt2.x)*(pt1.x-pt2.x) + (pt1.y-pt2.y)*(pt1.y-pt2.y));
    return val;
}

inline double area(const double& s1, const double& a,
                   const double& b, const double&c)
{
    return sqrt(s1 * (s1 - a) * (s1 - b) * (s1 - c));
}

int main()
{
    coord* pts = new coord[3];
    int count = 3;
    char sep;

    for (int i = 0; i < count; i++)
    {
        cout << "Enter coord "<< i+1 << " as x,y : ";
        cin >> pts[i].x >> sep >> pts[i].y;
    }

    double a, b, c;
    a = dist(pts[0], pts[1]);
    b = dist(pts[1], pts[2]);
    c = dist(pts[2], pts[0]);
    double s;
    s = (a + b + c);

    double ar = area(s/2, a, b, c);

    cout << "Area of triangle = " << ar << " sq-units" << endl;

    delete [] pts;
    return 0;
}
