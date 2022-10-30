//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
//void swap(int* a, int i, int j)
//{
//    int s = a[i];
//    a[i] = a[j];
//    a[j] = s;
//}
//
//
//bool nextPermutation(int* a, int n)
//{
//    int j = n - 2;
//    while (j != -1 && a[j] >= a[j + 1]) j--;
//    if (j == -1)
//        return false; // ������ ������������ ���
//    int k = n - 1;
//    while (a[j] >= a[k]) k--;
//    swap(a, j, k);
//    int l = j + 1, r = n - 1; // ��������� ���������� ����� ������������������
//    while (l < r)
//        swap(a, l++, r--);
//    return true;
//}
//
//
//// ��� ��������
//void Print(int* a, int n)  // ����� ������������
//{
//    static int num = 1; // ����� ������������
//    cout.width(3); // ������ ���� ������ ������ ������������
//
//    bool flag = true;
//
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] == i + 1) {
//            if (a[i] == i + 1) {
//
//                flag = false;
//
//                break;
//            }
//        }
//    }
//
//    if (flag)
//    {
//        cout << num++ << ": ";
//
//        for (int i = 0; i < n; i++) {
//            cout << a[i] << " ";
//        }
//
//        cout << endl;
//    }
//}
//
//// ������ � ����
//void print_to_file(int* a, int n, ofstream& myfile)  // ����� ������������
//{
//    static int num = 1; // ����� ������������
//    myfile.width(3); // ������ ���� ������ ������ ������������
//
//    bool flag = true;
//
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] == i + 1) {
//            if (a[i] == i + 1) {
//
//                flag = false;
//
//                break;
//            }
//        }
//    }
//
//    if (flag)
//    {
//        myfile << num++ << ": ";
//
//        for (int i = 0; i < n; i++) {
//            myfile << a[i] << " ";
//        }
//
//        myfile << endl;
//    }
//}
//
//
//int main()
//{
//    int n, * a;
//    cout << "n = ";
//    cin >> n;
//    a = new int[n];
//    for (int i = 0; i < n; i++)
//        a[i] = i + 1;
//
//    ofstream myfile("search_tasks_5.txt");
//    //Print(a, n); // ����� � ������� ��� �����
//    if (myfile.is_open())
//    {
//        while (nextPermutation(a, n))
//            //Print(a, n); // ����� � ������� ��� �����
//            print_to_file(a, n, myfile);
//        myfile.close();
//    }
//    else cout << "Unable to open file";
//
//    return 0;
//}