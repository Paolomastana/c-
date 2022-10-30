//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//double F(double x, int n)
//{
//    if (n == 0)
//        return x;
//    else if (n == 1)
//        return log(fabs(sin(x))); // log это ln в c++
//    else
//        return -pow(cos(x) / sin(x), n - 1) / (n - 1) - F(x, n - 2);
//}
//
//double F_for(double x, int n)
//{
//    if (n == 0)
//        return x;
//    else if (n == 1)
//        return log(fabs(sin(x))); // log это ln в c++
//    else
//    {
//        double F1 = x;
//        double F2 = log(fabs(sin(x)));
//        double res = 0.0;
//        for (int i = 2; i <= n; i++)
//        {
//            res = -pow(cos(x) / sin(x), i - 1) / (i - 1) - F1;
//            F1 = F2;
//            F2 = res;
//        }
//        return res;
//    }
//}
//
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    double a, b;
//
//    cout << "¬ведите a: ";
//    cin >> a;
//
//    cout << "¬ведите b: ";
//    cin >> b;
//
//    int n;
//
//    cout << "¬ведите n: ";
//    cin >> n;
//
//    cout << "Result: " << F(b, n) - F(a, n);
//    //cout << "Result: " << F_for(b, n) - F_for(a, n);
//
//    return 0;
//}